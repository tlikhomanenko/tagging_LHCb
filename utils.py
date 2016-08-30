import numpy
import pandas
from collections import OrderedDict

from sklearn import clone
from sklearn.metrics import roc_auc_score
from sklearn.linear_model import SGDClassifier
from sklearn.isotonic import IsotonicRegression

from matplotlib import pyplot as plt
from rep.utils import train_test_split, train_test_split_group, Flattener
from scipy.special import logit, expit
from matplotlib import pyplot as plt
from sklearn.metrics import roc_curve
import root_numpy

from sklearn.base import BaseEstimator, ClassifierMixin


class CalibrationProcedure(BaseEstimator, ClassifierMixin):
    def __init__(self, logistic=False, symmetrize=False, random_state=42, threshold=0.):
        self.logistic = logistic
        self.symmetrize = symmetrize
        self.random_state = random_state
        self.threshold = threshold
    
    def _compute_inds(self, length):
        ind = numpy.arange(length)
        ind_1, ind_2 = train_test_split(ind, random_state=self.random_state, train_size=0.5)
        return ind_1, ind_2
            
    def fit(self, X, y, sample_weight=None):
        labels = (y > self.threshold) * 1
        probs = X
        weights = numpy.ones(len(probs)) if sample_weight is None else sample_weight
        ind_1, ind_2 = self._compute_inds(len(probs))

        calibrator = SGDClassifier(loss='log', random_state=self.random_state, penalty='none', alpha=0.01) if self.logistic \
            else IsotonicRegression(y_min=0, y_max=1, out_of_bounds='clip')
        est_calib_1, est_calib_2 = clone(calibrator), clone(calibrator)
        probs_1 = probs[ind_1]
        probs_2 = probs[ind_2]

        if self.logistic:
            probs_1 = numpy.clip(probs_1, 0.001, 0.999)
            probs_2 = numpy.clip(probs_2, 0.001, 0.999)
            probs_1 = probs_1[:, numpy.newaxis]
            probs_2 = probs_2[:, numpy.newaxis]
            if self.symmetrize:
                est_calib_1.fit(numpy.r_[logit(probs_1), logit(1-probs_1)], 
                                numpy.r_[labels[ind_1] > 0, labels[ind_1] <= 0],
                                sample_weight=numpy.r_[weights[ind_1], weights[ind_1]])
                est_calib_2.fit(numpy.r_[logit(probs_2), logit(1-probs_2)], 
                                numpy.r_[labels[ind_2] > 0, labels[ind_2] <= 0],
                                sample_weight=numpy.r_[weights[ind_2], weights[ind_2]])
            else:
                est_calib_1.fit(logit(probs_1), labels[ind_1], sample_weight=weights[ind_1])
                est_calib_2.fit(logit(probs_2), labels[ind_2], sample_weight=weights[ind_2])
        else:
            if self.symmetrize:
                est_calib_1.fit(numpy.r_[probs_1, 1-probs_1], 
                                numpy.r_[labels[ind_1] > 0, labels[ind_1] <= 0],
                                sample_weight=numpy.r_[weights[ind_1], weights[ind_1]])
                est_calib_2.fit(numpy.r_[probs_2, 1-probs_2], 
                                numpy.r_[labels[ind_2] > 0, labels[ind_2] <= 0],
                                sample_weight=numpy.r_[weights[ind_2], weights[ind_2]])
            else:
                est_calib_1.fit(probs_1, labels[ind_1], sample_weight=weights[ind_1])
                est_calib_2.fit(probs_2, labels[ind_2], sample_weight=weights[ind_2])
        self.calibrators = [est_calib_1, est_calib_2]
        return self

    def predict_proba(self, X):
        probs = X
        calibrated_probs = numpy.zeros(len(probs))
        ind_1, ind_2 = self._compute_inds(len(probs))

        probs_1 = probs[ind_1]
        probs_2 = probs[ind_2]
        
        if self.logistic:
            probs_1 = numpy.clip(probs_1, 0.001, 0.999)
            probs_2 = numpy.clip(probs_2, 0.001, 0.999)
            probs_1 = probs_1[:, numpy.newaxis]
            probs_2 = probs_2[:, numpy.newaxis]
            calibrated_probs[ind_1] = self.calibrators[1].predict_proba(logit(probs_1))[:, 1]
            calibrated_probs[ind_2] = self.calibrators[0].predict_proba(logit(probs_2))[:, 1]
        else:
            calibrated_probs[ind_1] = self.calibrators[1].transform(probs_1)
            calibrated_probs[ind_2] = self.calibrators[0].transform(probs_2)
            numpy.random.seed(self.random_state)
            calibrated_probs = calibrated_probs + numpy.random.normal(size=len(calibrated_probs)) * 0.001
        return calibrated_probs
    

def shrink_floats(data):
    for column in data.columns:
        if data[column].dtype == 'float64':
            data[column] = data[column].astype('float32')
        if data[column].dtype == 'int64':
            data[column] = data[column].astype('int32')
            
            
def shrink_floats_xgb(data):
    for column in data.columns:
        if data[column].dtype == 'float32':
            data[column] = data[column].astype('float')
        if data[column].dtype == 'int32':
            data[column] = data[column].astype('int')
            

def union(*arrays):
    return numpy.concatenate(arrays)


def get_events_statistics(data, id_column='event_id'):
    """
    :return: dict with 'Events' - number of events and 'parts' - number of samples
    """
    return {'Events': len(numpy.unique(data[id_column])), 'parts': len(data)}


def get_events_number(data, id_column='event_id'):
    """
    :return: number of B events
    """
    _, data_ids = numpy.unique(data[id_column], return_inverse=True)
    weights = numpy.bincount(data_ids, weights=data.N_sig_sw) / numpy.bincount(data_ids)
    return numpy.sum(weights)

def get_N_B_events():
    '''
    :return: number of B decays (sum of sWeight in initial root file) 
    '''
    N_B_decays = 7.42867714256286621e+05
    return N_B_decays


def compute_N_B_events_MC(track_file, vertex_file, name=""):    
    Bevents_tracks = pandas.DataFrame(root_numpy.root2array(track_file, branches=['run', 'event', 'IPs']))
    Bevents_tracks = Bevents_tracks.ix[numpy.isfinite(Bevents_tracks.IPs), :]
    B_events_vertices = pandas.DataFrame(root_numpy.root2array(vertex_file, branches=['run', 'event', 'vcharge']))
    B_events_vertices = B_events_vertices[B_events_vertices.vcharge > 0]
    B_events = pandas.concat([Bevents_tracks, B_events_vertices])

    B_events['event_id'] = B_events.run.apply(str) + '_' + B_events.event.apply(str)
    B_events['N_sig_sw'] = 1
    N_B_events = get_events_number(B_events)
    return N_B_events

        
# add difference between max pt in event and pt for each track
def add_diff_pt(data, event_id_column='event_id'):
    max_pt = group_max(data[event_id_column].values.astype(str), data.partPt.values)
    data.loc[:, 'diff_pt'] = max_pt - data['partPt'].values


# max is computing max over tracks in the same event for saome data
def group_max(groups, data):
    # computing unique integer id for each group
    assert len(groups) == len(data)
    _, event_id = numpy.unique(groups, return_inverse=True)
    max_over_event = numpy.zeros(max(event_id) + 1) - numpy.inf
    numpy.maximum.at(max_over_event, event_id, data)
    return max_over_event[event_id]


def combine_taggers(tagger_outputs, tagger_keys):
    """
    Copy-pasted formulas (5.1), (5.2) from [TODO link].
    Formulas by themselves are not readable, please refer to context.
    
    :param tagger_outputs: output of tagger for tracks. 
     There are 4 taggers, each having 
     tag_n - tagger output. 
     prob_n - probability of right tagged.
    """
    pb = []
    pnb = []
    for key in tagger_keys:
        prob = tagger_outputs['prob_{}'.format(key)].values
        tag = tagger_outputs['tag_{}'.format(key)].values
        pb.append((1 + tag) / 2 - tag * prob)
        pnb.append((1 - tag) / 2 + tag * prob)
    pb = numpy.prod(pb, axis=0)
    pnb = numpy.prod(pnb, axis=0)
    probs_wrong = pb / (pb + pnb)
    tag_result = numpy.ones(len(probs_wrong))
    tag_result[probs_wrong > 0.5] = -1
    return tag_result, 1 - probs_wrong, tagger_outputs.weight.values, tagger_outputs.signB.values


def prepare_B_data(data_with_predictions, tagger_keys):
    # collecting all together, 
    # setting tag_n = -99 if untagged
    data_combined = pandas.DataFrame({'event_id': numpy.unique(numpy.concatenate([d.index.values for d in 
                                                                                  data_with_predictions.values()]))})
    data_combined.index = data_combined.event_id
    
    mask_mass_time = False
    
    for key in tagger_keys:
        data_combined['prob_{}'.format(key)] = 0.5
        data_combined['tag_{}'.format(key)] = 1
    for key, d in data_with_predictions.items():
        data_combined.ix[d.index, 'prob_{}'.format(key)] = d['prob_{}'.format(key)]
        data_combined.ix[d.index, 'tag_{}'.format(key)] = d['tag_{}'.format(key)]
        data_combined.ix[d.index, 'weight'] = d['weight']
        data_combined.ix[d.index, 'signB'] = d['signB']
        br = set(d.columns)
        if 'mass' in br and 'time' in br:
            data_combined.ix[d.index, 'time'] = d['time']
            data_combined.ix[d.index, 'mass'] = d['mass']
            mask_mass_time = True
    # getting predictions    
    tags, Bprobs, Bweights, Bsign = combine_taggers(data_combined, tagger_keys)
    mask = ~numpy.isnan(Bprobs)
    tags = tags[mask]
    Bweights = Bweights[mask]
    Bsign = Bsign[mask]
    Bprobs = Bprobs[mask]
    if mask_mass_time:
        return tags, Bprobs, Bweights, Bsign, data_combined.mass.values, data_combined.time.values
    else:
        return tags, Bprobs, Bweights, Bsign


def run_taggers_combination(data_with_predictions, tagger_keys, N_B_events, model_name="", 
                            random_state=42, logistic_combined=False):

    tags, Bprobs, Bweights, Bsign = prepare_B_data(data_with_predictions, tagger_keys)
    Bprob_calibrated, calibration_B = calibrate_probs(Bsign, Bweights, Bprobs, random_state=random_state, symmetrize=True,
                                                      logistic=logistic_combined)

    auc, auc_full = calculate_auc_with_and_without_untag_events(Bsign, Bprobs, Bweights, N_B_events)
    print 'AUC for tagged:', auc, 'AUC with untag:', auc_full
    
    plt.subplot(1, 2, 1)
    plt.hist(Bprobs[Bsign == 1], alpha=0.4, bins=70, weights=Bweights[Bsign == 1], label='$B^+$')
    plt.hist(Bprobs[Bsign == -1], alpha=0.4, bins=70, weights=Bweights[Bsign == -1], label='$B^-$')
    plt.legend(), plt.title('B probs')
    
    plt.subplot(1, 2, 2)
    plt.hist(Bprob_calibrated[Bsign == 1], alpha=0.4, bins=70, weights=Bweights[Bsign == 1], label='$B^+$')
    plt.hist(Bprob_calibrated[Bsign == -1], alpha=0.4, bins=70, weights=Bweights[Bsign == -1], label='$B^-$')
    plt.legend(), plt.title('B probs calibrated'), plt.show()
    
    roc_curve_result = calculate_roc_with_untag_events(Bsign, Bprobs, Bweights, N_B_events)

    tagging_efficiency_combined = sum(Bweights) / N_B_events
    tagging_efficiency_combined_delta = numpy.sqrt(sum(Bweights)) / N_B_events
    
    D2_bootstrap, aucs = bootstrap_calibrate_prob(Bsign, Bweights, Bprobs, logistic=logistic_combined, symmetrize=True)

    D2 = numpy.average((2*(Bprobs - 0.5))**2, weights=Bweights)
    print 'Efficiency, not calibrated', numpy.average((2*(Bprobs - 0.5))**2,
                                                      weights=Bweights) * tagging_efficiency_combined * 100
    print 'Average AUC', numpy.mean(aucs), numpy.std(aucs)
        
    return calibration_B, result_table(tagging_efficiency_combined, tagging_efficiency_combined_delta, D2_bootstrap,
                                       auc_full, model_name), roc_curve_result


def estimate_new_data_old_scheme(estimators, datasets, keys, calibrator_tracks, calibrator_B, N_B_events, model_name='old'):
    data_with_predictions = dict()
    for key in keys:
        probs = estimators[key].predict_proba(datasets[key])[:, 1]
        probs_calibrated = calibrator_tracks[key].predict_proba(probs)
    
        data_with_predictions[key] = pandas.DataFrame({'prob_{}'.format(key): probs_calibrated, 
                                                      'tag_{}'.format(key): datasets[key].tagAnswer.values,
                                                      'weight': datasets[key].N_sig_sw.values,
                                                      'signB': datasets[key].signB.values}, 
                                                      index=numpy.array(datasets[key]['event_id']))
        
    tags, Bprobs, Bweights, Bsign = prepare_B_data(data_with_predictions, keys)
    Bprob_calibrated = calibrator_B.predict_proba(Bprobs)
    
    percentile_bins = [10, 20, 30, 40, 50, 60, 70, 80, 90]
    
    D2 = numpy.average((2*(Bprob_calibrated - 0.5))**2, weights=Bweights)
    auc, auc_full = calculate_auc_with_and_without_untag_events(Bsign, Bprobs, Bweights, N_B_events)
    
    plt.subplot(1, 2, 1)
    compute_mistag(Bprobs, Bsign, Bweights, Bsign > -100, label="$B$", uniform=False, bins=percentile_bins)
    compute_mistag(Bprobs, Bsign, Bweights, Bsign == 1, label="$B^+$", uniform=False, bins=percentile_bins)
    compute_mistag(Bprobs, Bsign, Bweights, Bsign == -1, label="$B^-$", uniform=False, bins=percentile_bins)
    plt.legend(loc='best')
    plt.title('B prob, percentile bins'), plt.xlabel('mistag probability'), plt.ylabel('true mistag probability')
        
    plt.subplot(1, 2, 2)
    compute_mistag(Bprob_calibrated, Bsign, Bweights, Bsign > -100, label="$B$", uniform=False, bins=percentile_bins)
    compute_mistag(Bprob_calibrated, Bsign, Bweights, Bsign == 1, label="$B^+$", uniform=False, bins=percentile_bins)
    compute_mistag(Bprob_calibrated, Bsign, Bweights, Bsign == -1, label="$B^-$", uniform=False, bins=percentile_bins)
    plt.legend(loc='best')
    plt.title('B prob calibrated, percentile bins'), plt.xlabel('mistag probability'), plt.ylabel('true mistag probability')
    plt.show()
    return result_table(sum(Bweights) * 1. / N_B_events, numpy.sqrt(sum(Bweights) * 1.) / N_B_events, [D2],
                        auc_full, model_name)

    
    
def plot_flattened_probs(probs, labels, weights, label=1, check_input=True):
    """
    Prepares transformation, which turns predicted probabilities to uniform in [0, 1] distribution.
    
    :param probs: probabilities, numpy.array of shape [n_samples, 2]
    :param labels: numpy.array of shape [n_samples] with labels (0 and 1)
    :param weights: numpy.array of shape [n_samples]
    :param label: int, predictions of this class will be turned to uniform.
    
    :return: flattener
    """
    if check_input:
        probs, labels, weights = numpy.array(probs), numpy.array(labels), numpy.array(weights)
        assert probs.shape[1] == 2
        assert numpy.in1d(labels, [0, 1]).all()
    
    signal_probs = probs[:, 1]
    flattener = Flattener(signal_probs[labels == label], weights[labels == label])
    flat_probs = flattener(signal_probs)
    
    plt.hist(flat_probs[labels == 1], bins=100, normed=True, histtype='step', 
             weights=weights[labels == 1], label='same sign')
    plt.hist(flat_probs[labels == 0], bins=100, normed=True, histtype='step', 
             weights=weights[labels == 0], label='opposite sign')
    plt.xlabel('predictions')
    plt.legend(loc='upper center')
    plt.show()
    return flattener


def bootstrap_calibrate_prob(labels, weights, probs, n_calibrations=30, threshold=0., symmetrize=False, logistic=False):
    """
    Bootstrap isotonic calibration: 
     * randomly divide data into train-test
     * on train isotonic is fitted and applyed to test
     * on test using calibrated probs p(B+) D2 and auc are calculated 
    
    :param probs: probabilities, numpy.array of shape [n_samples]
    :param labels: numpy.array of shape [n_samples] with labels 
    :param weights: numpy.array of shape [n_samples]
    :param threshold: float, to set labels 0/1 
    :param symmetrize: bool, do symmetric calibration, ex. for B+, B-
    
    :return: D2 array and auc array
    """
    aucs = []
    D2_array = []
    numpy.random.seed(11)
    rand_array = numpy.random.randint(11, 1e5, size=n_calibrations)
    for random_state in rand_array:
        calibration = CalibrationProcedure(logistic=logistic, random_state=random_state, threshold=threshold, symmetrize=symmetrize)
        calibration.fit(probs, labels, sample_weight=weights)
        probs_calibrated = calibration.predict_proba(probs)
        alpha = (1 - 2 * probs_calibrated) ** 2
        aucs.append(roc_auc_score(labels, probs_calibrated, sample_weight=weights))
        D2_array.append(numpy.average(alpha, weights=weights))
    
    plt.figure(figsize=(18, 6))
    bins = [10, 20, 30, 40, 50, 60, 70, 80, 90]
    plt.subplot(1, 2, 1)
    compute_mistag(probs, labels, weights, labels > -100, label="$B$", bins=bins, uniform=False)
    compute_mistag(probs, labels, weights, labels == 1, label="$B^+$", bins=bins, uniform=False)
    compute_mistag(probs, labels, weights, labels == -1, label="$B^-$", bins=bins, uniform=False)
    plt.legend(loc='best')
    plt.xlabel('mistag probability'), plt.ylabel('true mistag probability')
    plt.subplot(1, 2, 2)
    compute_mistag(probs_calibrated, labels, weights, labels > -100, label="$B$", bins=bins, uniform=False)
    compute_mistag(probs_calibrated, labels, weights, labels == 1, label="$B^+$", bins=bins, uniform=False)
    compute_mistag(probs_calibrated, labels, weights, labels == -1, label="$B^-$", bins=bins, uniform=False)
    plt.legend(loc='best')
    plt.xlabel('mistag probability'), plt.ylabel('true mistag probability')
    plt.show()
    return D2_array, aucs


def predict_by_estimator(estimator, datasets, features=None):
    '''
    Predict data by classifier
    Important note: this also works correctly if classifier is FoldingClassifier and one of dataframes is his training data.
    
    :param estimator: REP classifier, already trained model.
    :param datasets: list of pandas.DataFrames to predict.
        
    :return: data, probabilities
    '''     
    if features is None:
        data = pandas.concat(datasets)
    else:
        data = pandas.concat([data[features] for data in datasets])    
    # predicting each DataFrame separately to preserve FoldingClassifier
    probs = numpy.concatenate([estimator.predict_proba(dataset)[:, 1] for dataset in datasets])
    return data, probs


def result_table(tagging_efficiency, tagging_efficiency_delta, D2, auc, name='model'):
    """
    Represents results of tagging in a nice table.
    
    :param tagging_efficiency: float, which part of samples will be tagged
    :param tagging_efficiency_delta: standard error of efficiency
    :param D2: D^2, average value ((p(B+) - 0.5)*2)^2 for sample
    :param name: str, name of model
    :param auc: full auc, calculated with untag events (probs are set 0.5) with B+/B- labels
    
    :return: pandas.DataFrame with only one row, describing result_table
    
    Use pandas.concat to get table with results of different methods.
    """
    result = OrderedDict()
    result['name'] = name
    result['$\epsilon_{tag}, \%$'] = [tagging_efficiency * 100.]
    result['$\Delta \epsilon_{tag}, \%$'] = [tagging_efficiency_delta * 100.]
    result['$D^2$'] = [numpy.mean(D2)]
    result['$\Delta D^2$'] = [numpy.std(D2)]
    epsilon = numpy.mean(D2) * tagging_efficiency * 100.
    result['$\epsilon, \%$'] = [epsilon]
    relative_D2_error = numpy.std(D2) / numpy.mean(D2)
    relative_eff_error = tagging_efficiency_delta / tagging_efficiency
    relative_epsilon_error = numpy.sqrt(relative_D2_error ** 2 + relative_eff_error ** 2) 
    result['$\Delta \epsilon, \%$'] = [relative_epsilon_error * epsilon]
    result['AUC, with untag'] = [numpy.mean(auc) * 100]
    result['$\Delta$ AUC, with untag'] = [numpy.std(auc) * 100]
    return pandas.DataFrame(result)


def calibrate_probs(labels, weights, probs, logistic=False, random_state=42, threshold=0, symmetrize=False):
    """
    Calibrate output to probabilities using 2-folding to calibrate all data
    
    :param probs: probabilities, numpy.array of shape [n_samples]
    :param labels: numpy.array of shape [n_samples] with labels 
    :param weights: numpy.array of shape [n_samples]
    :param threshold: float, to set labels 0/1 
    :param logistic: bool, use logistic or isotonic regression
    :param symmetrize: bool, do symmetric calibration, ex. for B+, B-
    
    :return: calibrated probabilities, calibration class
    """
    calibration = CalibrationProcedure(logistic=logistic, random_state=random_state, threshold=threshold, symmetrize=symmetrize)
    calibration.fit(probs, labels, sample_weight=weights)
    probs_calibrated = calibration.predict_proba(probs)
    return probs_calibrated, calibration


def calculate_auc_with_and_without_untag_events(Bsign, Bprobs, Bweights, N_B_events):
    """
    Calculate AUC score for data and AUC full score for data and untag data (p(B+) for untag data is set to 0.5)
    
    :param Bprobs: p(B+) probabilities, numpy.array of shape [n_samples]
    :param Bsign: numpy.array of shape [n_samples] with labels {-1, 1}
    :param Bweights: numpy.array of shape [n_samples]
    
    :return: auc, full auc
    """
    N_B_not_passed = N_B_events - sum(Bweights)
    Bsign_not_passed = [-1, 1]
    Bprobs_not_passed = [0.5] * 2
    Bweights_not_passed = [N_B_not_passed / 2.] * 2
    
    auc_full = roc_auc_score(union(Bsign, Bsign_not_passed), union(Bprobs, Bprobs_not_passed),
                             sample_weight=union(Bweights, Bweights_not_passed))
    auc = roc_auc_score(Bsign, Bprobs, sample_weight=Bweights)
    return auc, auc_full


def calculate_roc_with_untag_events(Bsign, Bprobs, Bweights, N_B_events):
    """
    Calculate roc curve for for data and untag data (p(B+) for untag data is set to 0.5)
    
    :param Bprobs: p(B+) probabilities, numpy.array of shape [n_samples]
    :param Bsign: numpy.array of shape [n_samples] with labels {-1, 1}
    :param Bweights: numpy.array of shape [n_samples]
    
    :return: fpr, tpr, thr
    """
    N_B_not_passed = N_B_events - sum(Bweights)
    Bsign_not_passed = [-1, 1]
    Bprobs_not_passed = [0.5] * 2
    Bweights_not_passed = [N_B_not_passed / 2.] * 2
    
    return roc_curve(union(Bsign, Bsign_not_passed), union(Bprobs, Bprobs_not_passed),
                     sample_weight=union(Bweights, Bweights_not_passed))


def compute_B_prob_using_part_prob(data, probs, weight_column='N_sig_sw', event_id_column='event_id', signB_column='signB',
                                   sign_part_column='signTrack', normed_signs=False, prior_probs=None, functor=None):
    """
    Compute p(B+) using probs for parts of event (tracks/vertices).
    
    :param data: pandas.DataFrame, data
    :param probs: probabilities for parts of events, numpy.array of shape [n_samples]
    :param weight_column: column for weights in data
    :param event_id_column: column for event id in data
    :param signB_column: column for event B sign in data
    :param sign_part_column: column for part sign in data
    
    :return: B sign array, B weight array, B+ prob array, B event id
    """
    result_event_id, data_ids = numpy.unique(data[event_id_column].values, return_inverse=True)
    if prior_probs is None:
        log_probs = numpy.log(probs) - numpy.log(1 - probs)
    else:
        new_probs = prior_probs * (1 - probs) + (1 - prior_probs) * probs
        log_probs = numpy.log(new_probs) - numpy.log(1 - new_probs)
    sign_weights = numpy.ones(len(log_probs))
    if normed_signs:
        for sign in [-1, 1]:
            maskB = (data[signB_column].values == sign)
            maskPart = (data[sign_part_column].values == 1)
            sign_weights[maskB * maskPart] = sum(maskB * (~maskPart)) * 1. /  sum(maskB * maskPart)
    log_probs *= sign_weights * data[sign_part_column].values
    result_logprob = numpy.bincount(data_ids, weights=log_probs)
    # simply reconstructing original
    result_label = numpy.bincount(data_ids, weights=data[signB_column].values) / numpy.bincount(data_ids)
    result_weight = numpy.bincount(data_ids, weights=data[weight_column]) / numpy.bincount(data_ids)
    return result_label, result_weight, expit(result_logprob), result_event_id


def get_B_data_for_given_part(part_probs, data_calib, N_B_events, logistic=True, sign_part_column='signTrack', part_name='track',
                              random_state=42, normed_signs=False, prior_probs=None):
    """
    Predict probabilities for event parts, calibrate it and compute B data.
    Return B data for given part of event:tracks/vertices.
    
    :param estimator: REP classifier, already trained model.
    :param datasets: list of pandas.DataFrames to predict.
    :param logistic: bool, use logistic or isotonic regression for part (track/vertex) probabilities calibration
    :param sign_part_column: column for part sign in data
    :param part_name: part data name for plots 
    
    :return: B sign, weight, p(B+), event id and full auc (with untag events) 
    """
    # Calibration p(track/vertex same sign|B)
    part_probs_calib, calibration = calibrate_probs(data_calib.label.values, data_calib.N_sig_sw.values, part_probs, 
                                                    logistic=logistic, random_state=random_state)
    plt.figure(figsize=[18, 5])
    plt.subplot(1,3,1)
    plt.hist(part_probs[data_calib.label.values == 0], bins=60, normed=True, alpha=0.3, label='os')
    plt.hist(part_probs[data_calib.label.values == 1], bins=60, normed=True, alpha=0.3, label='ss')
    plt.legend(), plt.title('{} probs'.format(part_name))
    
    plt.subplot(1,3,2)
    plt.hist(part_probs_calib[data_calib.label.values == 0], bins=60, normed=True, alpha=0.3, label='os')
    plt.hist(part_probs_calib[data_calib.label.values == 1], bins=60, normed=True, alpha=0.3, label='ss')
    plt.legend(), plt.title('{} probs calibrated'.format(part_name))
        
    all_events = get_events_statistics(data_calib)['Events']
    
    # Compute p(B+)
    Bsign, Bweight, Bprob, Bevent = compute_B_prob_using_part_prob(data_calib, part_probs_calib, 
                                                                   sign_part_column=sign_part_column, normed_signs=normed_signs,
                                                                   prior_probs=prior_probs)
    Bprob[~numpy.isfinite(Bprob)] = 0.5
    Bprob[numpy.isnan(Bprob)] = 0.5
    
    plt.subplot(1,3,3)
    plt.hist(Bprob[numpy.array(Bsign) == -1], bins=60, normed=True, alpha=0.3, label='$B^-$')
    plt.hist(Bprob[numpy.array(Bsign) == 1], bins=60, normed=True, alpha=0.3, label='$B^+$')
    plt.legend(), plt.title('B probs'), plt.show()
    assert all_events == len(Bprob), '{}, {}'.format(all_events, Bprob)
    
    auc, auc_full = calculate_auc_with_and_without_untag_events(Bsign, Bprob, Bweight, N_B_events=N_B_events)
    print 'AUC for tagged:', auc, 'AUC with untag:', auc_full
    return Bsign, Bweight, Bprob, Bevent, auc_full


def get_result_with_bootstrap_for_given_part(tagging_efficiency, tagging_efficiency_delta, estimator,
                                             datasets, name, N_B_events, logistic=True, n_calibrations=30,
                                             sign_part_column='signTrack', part_name='track', symmetrize=True, 
                                             random_state=42, normed_signs=False, logistic_combined=False):
    """
    Predict probabilities for event parts, calibrate it, compute B data and estimate with bootstrap (calibration p(B+)) D2
    
    :param tagging_efficiency: float, which part of samples will be tagged
    :param tagging_efficiency_delta: standard error of efficiency
    :param estimator: REP classifier, already trained model.
    :param datasets: list of pandas.DataFrames to predict.
    :param name: str, name of model
    :param logistic: bool, use logistic or isotonic regression for part (track/vertex) probabilities calibration
    :param sign_part_column: column for part sign in data
    :param part_name: part data name for plots 
    
    :return: pandas.DataFrame with only one row, describing result_table
    """
    Bsign, Bweight, Bprob, Bevent, auc_full = get_B_data_for_given_part(estimator, datasets, logistic=logistic, 
                                                                        sign_part_column=sign_part_column, 
                                                                        part_name=part_name, random_state=random_state,
                                                                        normed_signs=normed_signs, N_B_events=N_B_events)    
    # Compute p(B+) calibrated with bootstrap
    D2, aucs = bootstrap_calibrate_prob(Bsign, Bweight, Bprob, n_calibrations=n_calibrations, logistic=logistic_combined,
                                        symmetrize=symmetrize)
    print 'mean AUC after calibration:', numpy.mean(aucs), numpy.var(aucs)
    return result_table(tagging_efficiency, tagging_efficiency_delta, D2, auc_full, name)


def estimate_quality(tagging_efficiency, tagging_efficiency_delta, estimator,
                     datasets, name, N_B_events, logistic=True,
                     sign_part_column='signTrack', part_name='track', symmetrize=True, 
                     random_state=42, normed_signs=False, logistic_combined=False):
    """
    Predict probabilities for event parts, calibrate it, compute B data and estimate with bootstrap (calibration p(B+)) D2
    
    :param tagging_efficiency: float, which part of samples will be tagged
    :param tagging_efficiency_delta: standard error of efficiency
    :param estimator: REP classifier, already trained model.
    :param datasets: list of pandas.DataFrames to predict.
    :param name: str, name of model
    :param logistic: bool, use logistic or isotonic regression for part (track/vertex) probabilities calibration
    :param sign_part_column: column for part sign in data
    :param part_name: part data name for plots 
    
    :return: pandas.DataFrame with only one row, describing result_table
    """
    Bsign, Bweight, Bprob, Bevent, auc_full = get_B_data_for_given_part(estimator, datasets, logistic=logistic, 
                                                                        sign_part_column=sign_part_column, 
                                                                        part_name=part_name, random_state=random_state,
                                                                        normed_signs=normed_signs, N_B_events=N_B_events)    
    Bprob_calib, _ = calibrate_probs(Bsign, Bweight, Bprob, logistic=logistic_combined, symmetrize=symmetrize, random_state=random_state)
    plot_calibration(Bprob_calib, Bsign > 0, weight=Bweight)
    auc, _ = calculate_auc_with_and_without_untag_events(Bsign, Bprob, Bweight, N_B_events)
    return result_table(tagging_efficiency, tagging_efficiency_delta, [numpy.average((1-2*Bprob_calib)**2, weights=Bweight)], [auc], name)



def prepare_B_data_for_given_part(estimator, datasets, N_B_events, logistic=True,
                                  sign_part_column='signTrack', part_name='track', 
                                  random_state=42, normed_signs=False):
    """
    Prepare B data for event parts (track/vetex) for further combination of track-based and vertex-based taggers:
    predict probabilities for event parts, calibrate it, compute B data and p(B+) / (1 - p(B+)) (see formula in description) 
    
    :param estimator: REP classifier, already trained model.
    :param datasets: list of pandas.DataFrames to predict.
    :param name: str, name of model
    :param logistic: bool, use logistic or isotonic regression for part (track/vertex) probabilities calibration
    :param sign_part_column: column for part sign in data
    :param part_name: part data name for plots 
    
    :return: pandas.DataFrame with keys: `event_id` - B id, `Bweight` - B weight, `{part_name}_relation_prob` p(B+) / (1 - p(B+)) for given part, `Bsign` - sign B
    """
    
    Bsign, Bweight, Bprob, Bevent, auc_full = get_B_data_for_given_part(estimator, datasets, logistic=logistic, 
                                                                        sign_part_column=sign_part_column, 
                                                                        part_name=part_name, random_state=random_state,
                                                                        normed_signs=normed_signs, N_B_events=N_B_events)    
    # Roc curve
    fpr, tpr, _ = roc_curve(Bsign, Bprob, sample_weight=Bweight)
    plt.plot(fpr, tpr)
    plt.plot([0, 1], [0, 1], 'k--')
    plt.ylim(0, 1), plt.xlim(0, 1), plt.show()
    Bdata_prepared = pandas.DataFrame({'event_id': Bevent, 
                                       'Bweight': Bweight, 
                                       '{}_relation_prob'.format(part_name): Bprob / (1. - Bprob),
                                       'Bsign': Bsign})
    return Bdata_prepared


def compute_mistag(Bprobs, Bsign, Bweight, chosen, uniform=True, bins=None, label=""):
    """
    Check mistag calibration (plot mistag vs true mistag in bins)
    
    :param Bprobs: p(B+) probabilities, numpy.array of shape [n_samples]
    :param Bsign: numpy.array of shape [n_samples] with labels {-1, 1}
    :param Bweights: numpy.array of shape [n_samples]
    :param chosen: condition to select B events (B+ or B- only)
    :param uniform: bool, uniform bins or percentile in the other case
    :params bins: bins
    :param label: label on the plot
    
    """
    if uniform:
        bins = bins
    else:
        bins = numpy.percentile(numpy.minimum(Bprobs, 1 - Bprobs), bins)

    prob = Bprobs[chosen]
    sign = Bsign[chosen]
    weight = Bweight[chosen]
    p_mistag = numpy.minimum(prob, 1 - prob)
    tag = numpy.where(prob >= 0.5, 1, -1)
    is_correct = numpy.where(sign * tag > 0, 1, 0)
    
    bins_index = numpy.searchsorted(bins, p_mistag)
    right_tagged = numpy.bincount(bins_index, weights=is_correct * weight)
    wrong_tagged = numpy.bincount(bins_index, weights=(1 - is_correct) * weight)
    p_mistag_true = wrong_tagged / (right_tagged + wrong_tagged)
    
    bins = [0.] + list(bins) + [0.5]
    bins = numpy.array(bins)
    bins_centers = (bins[1:] + bins[:-1]) / 2
    bins_error = (bins[1:] - bins[:-1]) / 2
    p_mistag_true_error = numpy.sqrt(wrong_tagged * right_tagged) / (wrong_tagged + right_tagged)**1.5
    plt.errorbar(bins_centers, p_mistag_true, xerr=bins_error, yerr=p_mistag_true_error, fmt='.', label=label, linewidth=2)
    plt.plot([0, 1], [0, 1], 'k--')
    plt.xlim(-0.05, 0.55), plt.ylim(-0.05, 0.55)
    plt.grid()

    
def compute_sum_of_charges(data, name, event_id_column='event_id', bins=60, sign_part_column='signTrack', show_with_signal=True):
    result_event_id, event_positions, data_ids = numpy.unique(data[event_id_column].values, 
                                                              return_index=True, return_inverse=True)
    used_weights = data[sign_part_column].values
    result_probs = -numpy.bincount(data_ids, weights=used_weights)
    result_label = numpy.bincount(data_ids, weights=data.signB.values) / numpy.bincount(data_ids)
    result_weight = numpy.bincount(data_ids, weights=data.N_sig_sw.values) / numpy.bincount(data_ids)
    
    min_max = 10
    result = {} 
    result['ROC $-\sum_i charge_i$'] = [roc_auc_score(result_label, result_probs, sample_weight=result_weight)]

    plt.figure(figsize=(16, 7))
    plt.subplot(1, 2, 1)
    fpr, tpr, _ = roc_curve(result_label, result_probs, sample_weight=result_weight)
    plt.plot(fpr, tpr)
    plt.plot([0, 1], [0, 1], 'k--')
    plt.grid(True), plt.xlim(0, 1), plt.ylim(0, 1), plt.title('ROC $-\sum_i charge_i$')

    plt.subplot(1, 2, 2)
    plt.hist(result_probs * (result_label == 1), bins=bins, weights=result_weight * (result_label == 1), 
             range=(-min_max, min_max), alpha=0.2, normed=True, label='$B^+$')
    plt.hist(result_probs * (result_label == -1), bins=bins, weights=result_weight * (result_label == -1), 
             range=(-min_max, min_max), alpha=0.2, normed=True, label='$B^-$')
    plt.legend(), plt.title(name + ', $-\sum_i charge_i$'), plt.xlim(-min_max, min_max)
    plt.show()
    
    if show_with_signal:
        plt.figure(figsize=(16, 7))
        plt.subplot(1, 2, 1)
        fpr, tpr, _ = roc_curve(result_label, result_probs - result_label, sample_weight=result_weight)
        plt.plot(fpr, tpr)
        plt.plot([0, 1], [0, 1], 'k--')
        plt.grid(True), plt.xlim(0, 1), plt.ylim(0, 1), plt.title('ROC $-\sum_i charge_i$ - signal track sign')
    

        plt.subplot(1, 2, 2)
        plt.hist((result_probs - result_label) * (result_label == 1), bins=bins, weights=result_weight * (result_label == 1), 
                 range=(-min_max, min_max), alpha=0.2, normed=True, label='$B^+$')
        plt.hist((result_probs - result_label) * (result_label == -1), bins=bins, weights=result_weight * (result_label == -1), 
                 range=(-min_max, min_max), alpha=0.2, normed=True, label='$B^-$')
        plt.legend(), plt.title(name + ', $-\sum_i charge_i$ - signal track sign'), plt.xlim(-min_max, min_max)    
        plt.show()
    
    result = {}
    for mask, bname in zip([result_label == 1, result_label == -1], ['$B^+$', '$B^-$']):
        result[bname] = [numpy.sum(result_probs * result_weight * mask) / sum(result_weight * mask)]
        if show_with_signal:
            result[bname + ', with signal part'] = [numpy.sum((result_probs - result_label) * \
                                                             result_weight * mask) / sum(result_weight * mask)]
    result['ROC AUC'] = roc_auc_score(result_label, result_probs, sample_weight=result_weight)
    if show_with_signal:
        result['ROC AUC, with signal part'] = 1 - roc_auc_score(result_label, result_probs - result_label, 
                                                                sample_weight=result_weight)
    result['name'] = [name]
    return pandas.DataFrame(result)


def plot_calibration(p, labels, bins=[10, 20, 30, 40, 50, 60, 70, 80, 90], weight=None):
    """
    Plot calibration plot: probability vs true probability by percentile bins.
    
    :param array p: probability
    :param array labels: labels
    :param array bins: percentile values for numpy.percentile to compute bins ranges
    
    """
    if weight is None:
        weight = numpy.ones(len(p))
    bins = numpy.percentile(p, bins)
    bins_index = numpy.searchsorted(bins, p)
    pos_tagged = numpy.bincount(bins_index, weights=labels * weight)
    neg_tagged = numpy.bincount(bins_index, weights=(1 - labels) * weight)
    p_ = pos_tagged / (pos_tagged + neg_tagged)

    bins = [0.] + list(bins) + [1.]
    bins = numpy.array(bins)
    bins_centers = (bins[1:] + bins[:-1]) / 2
    bins_error = (bins[1:] - bins[:-1]) / 2
    err = numpy.sqrt(neg_tagged * pos_tagged) / (pos_tagged + neg_tagged)**1.5
    plt.errorbar(bins_centers, p_, xerr=bins_error, yerr=err, fmt='.', linewidth=2)
    plt.plot([0, 1], [0, 1], 'k--')
    plt.ylim(-0.1, 1.1)
    plt.xlim(-0.1, 1.1)
    plt.xlabel('probability')
    plt.ylabel('true probability')
    
    
def estimate_channel(part_prob, data, N_B_events, name="", calibrator_tracks=None, calibrator_B=None, 
                     logistic=False, prior=None, mask_to_invert=None):       
    print "Calibrate tracks"
    if calibrator_tracks is not None:
        # calibrate parts predictions
        part_probs_calib = calibrator_tracks.predict_proba(part_prob)
    else:
        part_probs_calib, _ = calibrate_probs(data.label.values, data.N_sig_sw.values, part_prob,
                                              logistic=True, random_state=13)
    if prior is not None:
        part_probs_calib = prior*(1 - part_probs_calib) + (1-prior)*part_probs_calib
    if mask_to_invert is not None:
        part_probs_calib[mask_to_invert] = 1 - part_probs_calib[mask_to_invert]
        
    print 'tracks AUC', roc_auc_score(data.signB.values * data.signTrack.values > 0, part_prob),
    print 'calibrated tracks AUC', roc_auc_score(data.signB.values * data.signTrack.values > 0, part_probs_calib)
    
    plt.hist(part_probs_calib[data.label.values == 0], bins=60, alpha=0.5, normed=True)
    plt.hist(part_probs_calib[data.label.values == 1], bins=60, alpha=0.5, normed=True)
    plt.show()
    plot_calibration(part_probs_calib, data.label)

    # Compute p(B+)
    Bsign, Bweight, Bprobs, Bevent = compute_B_prob_using_part_prob(data, part_probs_calib, 
                                                                    sign_part_column='signTrack')
    print "Calibrate B"
    if calibrator_B is not None:        
        Bprobs_calib = calibrator_B.predict_proba(Bprobs)
    else:
        Bprobs_calib, _ = calibrate_probs(Bsign, Bweight, Bprobs, symmetrize=True, logistic=logistic)

    alpha = (1 - 2 * Bprobs) ** 2
    print 'dilution, without B calibration', numpy.average(alpha, weights=Bweight)
    
    alpha = (1 - 2 * Bprobs_calib) ** 2
    D2 = [numpy.average(alpha, weights=Bweight)]
    
    auc, auc_full = calculate_auc_with_and_without_untag_events(Bsign, Bprobs, Bweight, N_B_events)
    print 'B AUC, without calibration', auc, auc_full
    auc, auc_full = calculate_auc_with_and_without_untag_events(Bsign, Bprobs_calib, Bweight, N_B_events)
    print 'B AUC, with calibration', auc, auc_full
    
    plt.figure(figsize=(18, 6))
    plt.subplot(1, 2, 1)
    plt.hist(Bprobs[Bsign == 1], weights=Bweight[Bsign == 1], bins=80, alpha=0.2, 
         normed=True, range=(0, 1), label='$B^+$')
    plt.hist(Bprobs[Bsign == -1], weights=Bweight[Bsign == -1], bins=80, alpha=0.2,
         normed=True, range=(0, 1), label='$B^-$')
    plt.legend()
    plt.subplot(1, 2, 2)    
    plt.hist(Bprobs_calib[Bsign == 1], weights=Bweight[Bsign == 1], bins=80, alpha=0.2, 
         normed=True, range=(0, 1), label='$B^+$')
    plt.hist(Bprobs_calib[Bsign == -1], weights=Bweight[Bsign == -1], bins=80, alpha=0.2,
         normed=True, range=(0, 1), label='$B^-$')
    plt.legend()

    plt.figure(figsize=(18, 6))
    bins = [10, 20, 30, 40, 50, 60, 70, 80, 90]
    plt.subplot(1, 2, 1)
    compute_mistag(Bprobs, Bsign, Bweight, Bsign > -100, label="$B$", bins=bins, uniform=False)
    compute_mistag(Bprobs, Bsign, Bweight, Bsign == 1, label="$B^+$", bins=bins, uniform=False)
    compute_mistag(Bprobs, Bsign, Bweight, Bsign == -1, label="$B^-$", bins=bins, uniform=False)
    plt.legend(loc='best')
    plt.xlabel('mistag probability'), plt.ylabel('true mistag probability')
    plt.subplot(1, 2, 2)
    compute_mistag(Bprobs_calib, Bsign, Bweight, Bsign > -100, label="$B$", bins=bins, uniform=False)
    compute_mistag(Bprobs_calib, Bsign, Bweight, Bsign == 1, label="$B^+$", bins=bins, uniform=False)
    compute_mistag(Bprobs_calib, Bsign, Bweight, Bsign == -1, label="$B^-$", bins=bins, uniform=False)
    plt.legend(loc='best')
    plt.xlabel('mistag probability'), plt.ylabel('true mistag probability')
    
    tagging_efficiency = sum(Bweight) / N_B_events
    tagging_efficiency_delta = numpy.sqrt(sum(Bweight)) / N_B_events
    
    return result_table(tagging_efficiency, tagging_efficiency_delta, D2, [auc_full], name)