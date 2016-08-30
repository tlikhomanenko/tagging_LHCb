#define selection_time_cxx
#include "selection_time.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

#include <iostream>
#include <fstream>
#include <TLorentzVector.h>
#include <iomanip>
#include <TMath.h>


void selection_time::Loop(TString decay)
{
   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();

   TString outFile_name1 = "datasets/data/csv/WG/"+decay+"/";

   TString outFile_name2 = outFile_name1;
   outFile_name1 = outFile_name1 + "Time.csv";
   ofstream outFile1; outFile1.open(outFile_name1);

   outFile1<<"run\tevent\ttime\n";


   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      outFile1<<runNumber<<"\t"<<eventNumber<<"\t"<<B_TAU<<"\n";	
   }
}
