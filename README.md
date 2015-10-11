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

* tracking tagger
* vertex tagger
* union of traking and vertex tagger


### Tracking tagger 
* define `label` = `signB` * `signTrack`


## Data

## Features:

## Results

## Reproducibility

## Requirements
* [rep](http://github.com/yandex/rep) 0.6.3
* [rep_ef](https://github.com/anaderi/REP_EF) 0.6.2
* [hep_ml](https://github.com/arogozhnikov/hep_ml) 0.3.0
