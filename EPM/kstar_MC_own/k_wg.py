datafile = "../kstar_mc_kstar.root" # same directory
TupleName = "tree"
Nmax = -1
Selection = "flavour != 0"
UseWeight = 1
BranchWeight = "weight"
CalibrationMode = "Bd"

DoCalibrations = 1
BranchID = "flavour"
UseTau = 1
BranchTau = "decay_time"
TauUnits = "ps"
#UseTauErr = 1
#BranchTauErr = "resolution"

OS_Combination_Use = 1
OS_Combination_BranchDec = "tag"
OS_Combination_BranchProb = "mistag"
