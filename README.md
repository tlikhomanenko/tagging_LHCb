# tagging_LHCb
LHCb opposite side (OS) B-tagging algorithms upgrading

## LHCb previous B OS-tagging

* separate training:
  * electron tracks
  * muon tracks
  * kaon tracks
  * vertex
* decision rule to union them
* bins calibration for estimator output to get probabilities
* for track taggers one track for each event is selected to establish sign for B

## LHCb new B OS-tagging

* tracking inclusive tagger
* vertex tagger
* union of tracking and vertex tagger
* isotonic calibration

## Results

All analysis scheme is presented [here](https://github.com/tata-antares/tagging_LHCb/blob/master/Analysis-scheme.ipynb)

## Requirements
* [rep](https://github.com/yandex/rep) 0.6.3
* [rep_ef](https://github.com/anaderi/REP_EF) 0.6.2
* [hep_ml](https://github.com/arogozhnikov/hep_ml) 0.3.0
