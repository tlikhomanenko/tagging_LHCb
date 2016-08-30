#include <stdlib.h>

void run_time(TString decay) {
  gROOT->SetStyle("Plain");
  gStyle->SetOptStat(0000000000);

  TString filename = "";//"datasets/MC/root/"+decay +"/";
  TString file = "";
  TString tree_location="";
/*

//MC Config
  if(decay == "Bd_JPsiKstar"){
	file = "2012_11144001.root";
        tree_location = "TagAnaBd/mytagging";
  }else if(decay == "Bd_JPsiKs"){
        file = "2012_11144103.root";
        tree_location = "TagAnaBd/mytagging";
  }else if(decay == "Bu_JPsiK"){
        file = "2012_12143001.root";
        tree_location = "TagAnaBu/mytagging";
  }else{
	cout<<"Wrong decay"<<endl;
  }

  filename = "/home/dd31/csv_forTanya/datasets/MC/root/" + decay + "/" +file;
*/


  if(decay == "Bd_JPsiKstar"){
        file = "DTT_2012_Reco14Strip21_Down_DIMUON.root";
        tree_location = "Bd2JpsiKstarDetached/DecayTree";
  }else if(decay == "Bu_JPsiK"){
        file = "DTT_2012_Reco14Strip21_Down_DIMUON.root";
        tree_location = "Bu2JpsiKDetached/DecayTree";
  }else{
        cout<<"Wrong decay"<<endl;
  }

  filename = "/home/dd31/csv_forTanya/datasets/data/root/WG/"+file;

  TChain * chain = new TChain(tree_location);

   chain->AddFile(filename);


/*
  file = filename+"Pythia6_Strip20_Bdown.root";
  cout<<"Filename = "<<file<<endl;
  chain->AddFile(file); 

  file = filename+"Pythia6_Strip20_Bup.root";
  cout<<"Filename = "<<file<<endl;
  chain->AddFile(file);

  file = filename+"Pythia8_Strip20_Bdown.root";
  cout<<"Filename = "<<file<<endl;
  chain->AddFile(file);


  file = filename+"Pythia8_Strip20_Bup.root";
  cout<<"Filename = "<<file<<endl;
  chain->AddFile(file);
*/


//  chain->AddFile("datasets/MC/root/Bd_JPsiKstar/2012_11144001.root");
//  chain->AddFile("datasets/MC/root/Bd_JPsiKs/2012_11144103.root");
//   chain->AddFile("datasets/MC/root/Bu_JPsiK/2012_12143001.root");

//  chain->AddFile("datasets/data/root/JPsiK/Bu2JpsiK_Reco14_All_CloneKO_newFT_newPIDNN_cuts_cutsANDweights_BTA.root");
  gROOT->ProcessLine(".L selection_time.C+");
  cout<<"entries in chain = "<<chain->GetEntries()<<endl;
  selection_time * read = new selection_time(chain);
  read->Loop(decay);

}
