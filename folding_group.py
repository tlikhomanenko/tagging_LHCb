from rep.estimators import Classifier
import numpy
from sklearn.base import clone
from rep.estimators.utils import check_inputs, _get_features
from six.moves import zip
from sklearn.cross_validation import KFold
from sklearn.utils.validation import check_random_state
from rep.metaml.factory import train_estimator
import pandas
from rep.metaml.utils import map_on_cluster
from rep.metaml.utils import get_classifier_probabilities, get_classifier_staged_proba, get_regressor_prediction, \
    get_regressor_staged_predict


__author__ = 'Tatiana Likhomanenko'

class FoldingGroupClassifier(Classifier):
    def __init__(self,
                 base_estimator,
                 n_folds=2,
                 random_state=None,
                 train_features=None,
                 parallel_profile=None, group_feature=None):
        self.group_feature = group_feature
        self.train_features = train_features
        self.estimators = []
        self.parallel_profile = parallel_profile
        self.n_folds = n_folds
        self.base_estimator = base_estimator
        self._folds_indices = None
        self.random_state = random_state
        self._random_number = None
        # setting features directly
        Classifier.__init__(self, features=self._features())

    def _features(self):
        if self.train_features is None:
            return None
        else:
            if self.group_feature is None:
                return list(self.train_features)
            else:
                return list(self.train_features) + [self.group_feature]

    def _get_features(self, X, allow_nans=False):
        """
        :param pandas.DataFrame X: train dataset

        :return: pandas.DataFrame with used features
        """
        group_column_values = None
        if self.group_feature is not None:
            group_column_values, _ = _get_features([self.group_feature], X, allow_nans=allow_nans)
            group_column_values = numpy.ravel(numpy.array(group_column_values))
        if self.train_features is None:
            train_features = list(set(X.columns) - {self.group_feature})
        else:
            train_features = self.train_features
        X_prepared, self.train_features = _get_features(train_features, X, allow_nans=allow_nans)
        self.features = self._features()
        return group_column_values, X_prepared

    def _get_folds_column(self, length, group_column=None):
        """
        Return special column with indices of folds for all events.
        """
        if self._random_number is None:
            self._random_number = check_random_state(self.random_state).randint(0, 100000)
        folds_column = numpy.zeros(length)
        if group_column is not None:
            assert len(group_column) == length, 'id column should have the same lenght as train'
            ids = numpy.unique(group_column)
            for fold_number, (_, folds_indices) in enumerate(
                    KFold(len(ids), self.n_folds, shuffle=True, random_state=self._random_number)):
                folds_column[numpy.in1d(group_column, ids[folds_indices])] = fold_number
        else:
            for fold_number, (_, folds_indices) in enumerate(
                    KFold(length, self.n_folds, shuffle=True, random_state=self._random_number)):
                folds_column[folds_indices] = fold_number
        return folds_column

    def fit(self, X, y, sample_weight=None):
        """
        Train the classifier, will train several base classifiers on overlapping
        subsets of training dataset.

        :param X: pandas.DataFrame of shape [n_samples, n_features]
        :param y: labels of events - array-like of shape [n_samples]
        :param sample_weight: weight of events,
               array-like of shape [n_samples] or None if all weights are equal
        """
        if hasattr(self.base_estimator, 'features'):
            assert self.base_estimator.features is None, \
                'Base estimator must have None features! Use features parameter in Folding instead'
        self.train_length = len(X)
        group_column, (X, y, sample_weight) = self._prepare_data(X, y, sample_weight)
        folds_column = self._get_folds_column(len(X), group_column)

        for _ in range(self.n_folds):
            self.estimators.append(clone(self.base_estimator))

        if sample_weight is None:
            weights_iterator = [None] * self.n_folds
        else:
            weights_iterator = (sample_weight[folds_column != index] for index in range(self.n_folds))

        result = map_on_cluster(self.parallel_profile, train_estimator,
                                range(len(self.estimators)),
                                self.estimators,
                                (X.iloc[folds_column != index, :].copy() for index in range(self.n_folds)),
                                (y[folds_column != index] for index in range(self.n_folds)),
                                weights_iterator)
        for status, data in result:
            if status == 'success':
                name, classifier, spent_time = data
                self.estimators[name] = classifier
            else:
                print('Problem while training on the node, report:\n', data)
        return self

    def _folding_prediction(self, X, prediction_function, vote_function=None):
        """
        Supplementary function to predict (labels, probabilities, values)
        :param X: dataset to predict
        :param prediction_function: function(classifier, X) -> prediction
        :param vote_function: if using averaging over predictions of folds, this function shall be passed.
            For instance: lambda x: numpy.mean(x, axis=0), which means averaging result over all folds.
            Another useful option is lambda x: numpy.median(x, axis=0)
        """
        group_column, X = self._get_features(X)
        if vote_function is not None:
            print('KFold prediction with voting function')
            results = []
            for estimator in self.estimators:
                results.append(prediction_function(estimator, X))
            # results: [n_classifiers, n_samples, n_dimensions], reduction over 0th axis
            results = numpy.array(results)
            return vote_function(results)
        else:
            if len(X) != self.train_length:
                print('KFold prediction using random classifier (length of data passed not equal to length of train)')
            else:
                print('KFold prediction using folds column')
            folds_column = self._get_folds_column(len(X), group_column)
            parts = []
            for fold in range(self.n_folds):
                parts.append(prediction_function(self.estimators[fold], X.iloc[folds_column == fold, :]))

            result_shape = [len(X)] + list(numpy.shape(parts[0])[1:])
            results = numpy.zeros(shape=result_shape)
            folds_indices = [numpy.where(folds_column == fold)[0] for fold in range(self.n_folds)]
            for fold, part in enumerate(parts):
                results[folds_indices[fold]] = part
            return results

    def _staged_folding_prediction(self, X, prediction_function, vote_function=None):
        group_column, X = self._get_features(X)
        if vote_function is not None:
            print('Using voting KFold prediction')
            iterators = [prediction_function(estimator, X) for estimator in self.estimators]
            for fold_prob in zip(*iterators):
                result = numpy.array(fold_prob)
                yield vote_function(result)
        else:
            if len(X) != self.train_length:
                print('KFold prediction using random classifier (length of data passed not equal to length of train)')
            else:
                print('KFold prediction using folds column')
            folds_column = self._get_folds_column(len(X), group_column)
            iterators = [prediction_function(self.estimators[fold], X.iloc[folds_column == fold, :])
                         for fold in range(self.n_folds)]
            folds_indices = [numpy.where(folds_column == fold)[0] for fold in range(self.n_folds)]
            for stage_results in zip(*iterators):
                result_shape = [len(X)] + list(numpy.shape(stage_results[0])[1:])
                result = numpy.zeros(result_shape)
                for fold in range(self.n_folds):
                    result[folds_indices[fold]] = stage_results[fold]
                yield result

    def _get_feature_importances(self):
        """
        Get features importance

        :return: pandas.DataFrame with column effect and `index=features`
        """
        importances = numpy.sum([est.feature_importances_ for est in self.estimators], axis=0)
        # to get train_features, not features
        one_importances = self.estimators[0].get_feature_importances()
        return pandas.DataFrame({'effect': importances / numpy.max(importances)}, index=one_importances.index)

    def _prepare_data(self, X, y, sample_weight):
        group_column, X = self._get_features(X)
        self._set_classes(y)
        return group_column, check_inputs(X, y, sample_weight=sample_weight, allow_multiple_targets=True)

    def predict(self, X, vote_function=None):
        """
        Predict labels. To get unbiased predictions on training dataset, pass training data
        (with same order of events) and vote_function=None.

        :param X: pandas.DataFrame of shape [n_samples, n_features]
        :param vote_function: function to combine prediction of folds' estimators.
            If None then folding scheme is used.
        :type vote_function: None or function
        :rtype: numpy.array of shape [n_samples]
        """
        return numpy.argmax(self.predict_proba(X, vote_function=vote_function), axis=1)

    def predict_proba(self, X, vote_function=None):
        """
        Predict probabilities. To get unbiased predictions on training dataset, pass training data
        (with same order of events) and vote_function=None.

        :param X: pandas.DataFrame of shape [n_samples, n_features]
        :param vote_function: function to combine prediction of folds' estimators.
            If None then folding scheme is used.
        :type vote_function: None or function
        :rtype: numpy.array of shape [n_samples, n_classes]
        """
        result = self._folding_prediction(X, prediction_function=get_classifier_probabilities,
                                          vote_function=vote_function)
        return result / numpy.sum(result, axis=1, keepdims=True)

    def staged_predict_proba(self, X, vote_function=None):
        """
        Predict probabilities after each stage of base_estimator.
        To get unbiased predictions on training dataset, pass training data
        (with same order of events) and vote_function=None.

        :param X: pandas.DataFrame of shape [n_samples, n_features]
        :param vote_function: function to combine prediction of folds' estimators.
            If None then folding scheme is used.
        :type vote_function: None or function
        :rtype: sequence of numpy.arrays of shape [n_samples, n_classes]
        """
        for proba in self._staged_folding_prediction(X, prediction_function=get_classifier_staged_proba,
                                                     vote_function=vote_function):
            yield proba / numpy.sum(proba, axis=1, keepdims=True)

    def get_feature_importances(self):
        """
        Get features importance

        :rtype: pandas.DataFrame with column effect and `index=features`
        """
        return self._get_feature_importances()

    @property
    def feature_importances_(self):
        """Sklearn-way of returning feature importance.
        This returned as numpy.array, assuming that initially passed train_features=None """
        return self.get_feature_importances().ix[self.features, 'effect'].values