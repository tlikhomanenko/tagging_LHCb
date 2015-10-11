from rep.utils import train_test_split_group
from sklearn.isotonic import IsotonicRegression
import numpy
from rep.utils import Flattener
from matplotlib import pyplot as plt
import pandas
from sklearn.metrics import roc_auc_score

def union(*arrays):
    return numpy.concatenate(arrays)


def statistics(data):
    return {'Events': len(numpy.unique(data.event)), 'tracks': len(data)}

    
def run_flat_probs(probs, labels, weights, label=1):
    flat = Flattener(probs[:, 1][labels == label], weights[labels == label])
    flat_probs = flat(probs[:, 1])
    plt.hist(flat_probs[labels == 1], bins=100, normed=True, histtype='step', 
         weights=weights[labels == 1], label='same sign')
    plt.hist(flat_probs[labels == 0], bins=100, normed=True, histtype='step', 
         weights=weights[labels == 0], label='opposite sign')
    plt.xlabel('predictions')
    plt.legend(loc='upper center')
    plt.show()
    return flat


def calibration(estimator, datasets, steps=100):
    iso_calibs = []
    aucs = []
    D2 = []
    data = pandas.concat(datasets)
    probs = union(*[estimator.predict_proba(dataset)[:, 1] for dataset in datasets])
    if 'tag' in set(data.columns):
        probs = probs[data.tag.values]
        data = data[data.tag]
    weights = data.N_sig_sw.values
    labels = data.label.values
    for step in range(steps):
        train_probs, test_probs, train_labels, test_labels, train_weights, test_weights = train_test_split_group(
            data['event'], probs, labels, weights, train_size=0.5)
        iso_est = IsotonicRegression(y_min=0, y_max=1, out_of_bounds='clip')
        iso_est.fit(train_probs, train_labels, train_weights)
        iso_calibs.append(iso_est)
        aucs.append(roc_auc_score(test_labels, test_probs, sample_weight=test_weights))
        probs_calib = iso_est.transform(test_probs)
        alpha = (1 - 2 * (1 - probs_calib))**2
        D2.append(sum(alpha * test_weights) / sum(test_weights))
    return D2, alpha, aucs, iso_calibs
    
    
def result_table(eff_tag, eff_delta, D2, name='model'):
    from collections import OrderedDict
    result = OrderedDict()
    result['name'] = name
    result['$\epsilon_{tag}, \%$'] = [eff_tag * 100]
    result['$\Delta \epsilon_{tag}, \%$'] = [eff_delta * 100]
    result['$D^2$'] = [numpy.mean(D2)]
    result['$\Delta D^2$'] = [numpy.var(D2)]
    result['$\epsilon, \%$'] = [numpy.mean(D2) * eff_tag * 100]
    result['$\Delta \epsilon, \%$'] = [numpy.sqrt((numpy.var(D2) / numpy.mean(D2))**2 + (eff_delta / eff_tag)**2) * numpy.mean(D2) * eff_tag * 100]
    return pandas.DataFrame(result)