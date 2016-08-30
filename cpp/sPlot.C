void sPlot(TString decay=""){
  if (decay=="") {
	cout<<"decay not set"<<endl;
	return;
  }
  using namespace RooFit;

  gSystem->Load("libRooFit.so");
  gROOT->SetStyle("Plain");


  RooRealVar * Ru = new RooRealVar("Ru", "Ru", -1e20, 1e20);
  RooRealVar * evTop = new RooRealVar("evTop", "evTop", -1e20, 1e20);
  RooRealVar * evBottom = new RooRealVar("evBottom", "evBottom", -1e20, 1e20);
  RooRealVar * mass = new RooRealVar("mass", "B mass", 5.16, 5.4, "MeV/c^{2}");
  RooArgSet *obs = new RooArgSet(*Ru, *evTop, *evBottom, *mass);
  RooDataSet * data = new RooDataSet("data","data",*obs);
//  RooDataSet * data = RooDataSet::read("datasets/data/csv/WG/"+decay+"/Mass.csv",*obs,"Q");
  double v_run, v_event, v_mass;
  TString name_file = "datasets/data/csv/WG/"+decay+"/2012/Mass.csv";
  ifstream in;
  in.open(name_file);
  if (!in.good()){cout<<"bad file"<<endl;return;};
  double c = 0; 
  while(1){
                c++;
                if (!in.good()) {cout<<"BROKE"<<endl;break;}
	        in>>v_run>>v_event>>v_mass;
                Bool_t limits = false;
                if(v_mass<mass->getMax()&&v_mass>mass->getMin()) limits = true;
                if(!limits) continue;
		mass->setVal(v_mass);
                Ru->setVal(v_run);
                int top = floor(v_event/1e6); 
                int bottom = v_event - 1e6*top;
                evTop->setVal(top);
                evBottom->setVal(bottom);
                data->add(*obs); 
  }
  data->Print("v");
  RooRealVar * mean1 = new RooRealVar("mean1","#mu",5.28,4.,8.,"MeV/c^{2}");
  RooRealVar * sigma1 = new RooRealVar("sigma1","sigma1",0.1, 0., 2., "MeV/c^{2}");
  RooRealVar * n1 = new RooRealVar("n1","n1",0.1, -10., 10000.);
  RooRealVar * alpha1 = new RooRealVar("alpha1","alpha",0.1, -10., 10.);


  RooRealVar * mean2 = new RooRealVar("mean2","#mu",5.28,4.,8.,"MeV/c^{2}");
  RooRealVar * sigma2 = new RooRealVar("sigma2","sigma2",0.1, 0., 2., "MeV/c^{2}");
  RooRealVar * n2 = new RooRealVar("n2","n2",0.1, -10., 10.);
  RooRealVar * alpha2 = new RooRealVar("alpha2","alpha2",0.1, -10., 10.);


  RooGaussian * mass_sig2 = new RooGaussian("gauss", "gauss", *mass, *mean2, *sigma2);
  RooCBShape * mass_sig1 = new RooCBShape("RooCBShape1", "RooCBShape1", *mass, *mean1, *sigma1, *alpha1, *n1);
//  RooCBShape * mass_sig2 = new RooCBShape("RooCBShape2", "RooCBShape2", *mass, *mean2, *sigma2, *alpha2, *n2);
  
  RooRealVar *f_sig = new RooRealVar("f_sig", "f_sig", 0.1, 0., 1);
  RooAddPdf *mass_sig = new RooAddPdf("mass_sig", "mass_sig", RooArgList(*mass_sig1, *mass_sig2), RooArgList(*f_sig));



  RooRealVar *cc = new RooRealVar("cc","cc",0.2,-10,10,"c^{2}/MeV");
  RooExponential *mass_bkg = new RooExponential("bkg","bkg",*mass,*cc);

  RooRealVar *Nsig_tot = new RooRealVar("Nsig_tot","Nsig_tot",790000,0.,1e10.);
  RooRealVar *Nbkg_tot = new RooRealVar("Nbkg_tot","Nbkg_tot",800000, 0, 1e10.);

  RooExtendPdf * pdf_sig_ext = new RooExtendPdf("pdf_sig_ext","pdf_sig_ext",*mass_sig,*Nsig_tot);
  RooExtendPdf * pdf_bkg_ext = new RooExtendPdf("pdf_bkg_ext","pdf_bkg_ext",*mass_bkg,*Nbkg_tot);

  RooArgSet * pdf2fit = new RooArgSet(*pdf_sig_ext,*pdf_bkg_ext);
  RooAddPdf * tot = new RooAddPdf("tot", "tot", *pdf2fit);

  RooDataHist * hist_data = new RooDataHist("hist_data","hist_data",*mass,*data);
  RooNLLVar *nll = new RooNLLVar("nll","-log(L)",*tot,*hist_data,Extended(kTRUE),Verbose(kTRUE),NumCPU(12));
  RooRealVar * offset = new RooRealVar("offset","offset",0);
  *offset = nll->getVal();
  RooAbsReal *L= new RooFormulaVar("L","@0-@1",RooArgList(*nll,*offset));

  RooArgSet* params = tot->getParameters(*obs);
  params->readFromFile("params_"+decay+".txt");
  params->Print("v");


  RooMinuit m1(*L);
  m1.setVerbose(kTRUE);
  m1.setPrintLevel(3);
  m1.save()->Print("v");
  m1.setStrategy(1);
  m1.migrad();
  m1.setStrategy(2);
  m1.migrad();
  m1.migrad();
  m1.hesse();

  params = tot->getParameters(*obs);
  params->writeToFile("params_"+decay+".txt");

  cout<<fixed;
  params->selectByName("*")->setAttribAll("Constant",kTRUE);

  params->selectByName("N*tot")->setAttribAll("Constant",kFALSE);
  RooArgList * yield = (RooArgList *) params->selectByName("N*tot");
  myPlot = new RooStats::SPlot("myPlot","myPlot",*data,tot,*yield);
  RooDataSet *splotted_data = myPlot->GetSDataSet();
  splotted_data->write("datasets/data/csv/WG/"+decay+"/2012/sPlot_"+decay+".csv");
  splotted_data->Print("v");

  RooFitResult * fitres = (RooFitResult*) m1.save();
  fitres->Print();

  RooPlot * plot_mass = mass->frame(Bins(100));
  data->plotOn(plot_mass);
  tot->plotOn(plot_mass,Components(*mass_sig),LineColor(kRed),LineStyle(kDashed));
  tot->plotOn(plot_mass,Components(*mass_bkg),LineColor(kGreen),LineStyle(kDashed));
  tot->plotOn(plot_mass,LineColor(kBlue));



  RooHist * hpull_mass = plot_mass->pullHist();
  hpull_mass->SetFillColor(kBlue);
  RooPlot* pulls = mass->frame(Bins(100));
  pulls->addPlotable(hpull_mass,"BX") ;
  TCanvas * ckpi = new TCanvas("ckpi","ckpi");
  ckpi->cd();
  TPad* upperPad_kpi = new TPad("upperPad_kpi","upperPad_kpi",.005,.2525,.995,.995);
  TPad* lowerPad_kpi = new TPad("lowerPad_kpi","lowerPad_kpi",.005,.005,.995,.2475);
  lowerPad_kpi->Draw();
  upperPad_kpi->Draw();
  upperPad_kpi->cd();
  plot_mass->Draw();
  lowerPad_kpi->cd();
 pulls->SetTitle("");
 pulls->GetXaxis()->SetLabelSize(0);
 pulls->GetXaxis()->SetTitle("");
 pulls->GetYaxis()->SetTitle("");
 pulls->GetYaxis()->SetLabelSize(0.1);
 pulls->GetYaxis()->SetRangeUser(-5,5);
 pulls->Draw("B");


}
