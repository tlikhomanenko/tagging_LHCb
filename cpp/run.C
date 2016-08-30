#include <stdlib.h>

void run(TString decay, TString year="2012", TString datamc = "MC"){
  gROOT->SetStyle("Plain");
  gStyle->SetOptStat(0000000000);

  TString filename1 = "";//"datasets/MC/root/"+decay +"/";
  TString filename2 = "";//"datasets/MC/root/"+decay +"/";
  TString file1 = "";
  TString file2 = "";
  TString tree_location="";


//MC Config
  if(datamc =="MC"){
  if(decay == "Bd_JPsiKstar"){
	file1 = "2012_11144001.root";
        tree_location = "TagAnaBd/mytagging";
  }else if(decay == "Bd_JPsiKs"){
        file1 = "2012_11144103.root";
        tree_location = "TagAnaBd/mytagging";
  }else if(decay == "Bu_JPsiK"){
        file1 = "2012_12143001.root";
        tree_location = "TagAnaBu/mytagging";
  }else{
	cout<<"Wrong decay"<<endl;
  }

  filename1 = "/home/dd31/csv_forTanya/datasets/MC/root/" + decay + "/" +file1;
  }

  if(datamc =="data"){
  if(decay == "Bd_JPsiKstar"){
        file1 = "DTT_"+year+"_Reco14Strip21_Down_DIMUON.root";
        file2 = "DTT_"+year+"_Reco14Strip21_Up_DIMUON.root";
        tree_location = "Bd2JpsiKstar_TBA/mytagging";
  }else if(decay == "Bu_JPsiK"){
        file1 = "DTT_"+year+"_Reco14Strip21_Down_DIMUON.root";
        file2 = "DTT_"+year+"_Reco14Strip21_Up_DIMUON.root";
        tree_location = "Bu2JpsiK_TBA/mytagging";
  }else{
        cout<<"Wrong decay"<<endl;
  }

  filename1 = "/home/dd31/csv_forTanya/datasets/data/root/WG/"+file1;
  filename2 = "/home/dd31/csv_forTanya/datasets/data/root/WG/"+file2;
  }


  TChain * chain = new TChain(tree_location);
  cout<<"attaching file "<<filename1<<endl;
  chain->AddFile(filename1);
  cout<<"attaching file "<<filename2<<endl;
  chain->AddFile(filename2);


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


  gROOT->ProcessLine(".L selection.C+");
  cout<<"entries in chain = "<<chain->GetEntries()<<endl;
  selection * read = new selection(chain);
  read->Loop(decay, year, datamc);

}
