#define selection_cxx
#include "selection.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <iostream>
#include <fstream>
#include <TLorentzVector.h>
#include <iomanip>  
#include <TMath.h>

using namespace std;

void selection::Loop(TString decay)
{

//   cleanup cuts
   double m_IPPU_cut = 1.0;
   double m_distphi_cut = 0.000;
   double m_thetaMin = 0.012;
   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();

   TString outFile_name1 = "datasets/MC/csv/"+decay+"/";
//   TString outFile_name1 = "./";
   TString outFile_name2 = outFile_name1;
   TString outFile_name3 = outFile_name2;
   TString outFile_name4 = outFile_name3;
   outFile_name1 = outFile_name1 + "Tracks.csv";
   outFile_name2 = outFile_name2 + "Vertices.csv";
   outFile_name3 = outFile_name3 + "Vertices_Tracks.csv";
   outFile_name4 = outFile_name4 + "Vertices_Mike.csv";
   ofstream outFile1; outFile1.open(outFile_name1);
   ofstream outFile2; outFile2.open(outFile_name2);
   ofstream outFile3; outFile3.open(outFile_name3);
   ofstream outFile4; outFile4.open(outFile_name4);

   outFile1<<"run\tevent\tBmass\ti\tmult\tpartP\tpartPt\tptB\tIPs\tIP\tIPerr\tpartlcs\tEOverP\tghostProb\tIPPU\tnnkrec\tPIDNNk\tPIDNNpi\tPIDNNp\tPIDNNm\tPIDNNe\tdiff_eta\tdiff_phi\tphi\teta\tproj\tID\tveloch\tsignB\tsignTrack\tDist_phi\tN_sig_sw\tmu_cut\te_cut\tK_cut\tMCID\tOS_SS\txFlag\tK_MCID\tBOosc"<<endl;
   outFile2<<"run\tevent\tNo\tmult\tnnkrec\tBmass\tptB\tvflag\tptmean\tipsmean\tvcharge\tsvm\tsvp\tBDphiDir\tsvtau\tdocamax\tsignB\tsignVtx\tN_sig_sw\tmassSeed\tpt1\tpt2\tips1\tips2\tphi1\tphi2\tghost1\tghost2\tpointtheta\tseedchi2\trdist\tprobf\tv_cut\tBOosc"<<endl;
   outFile3<<"run\tevent\tBmass\tvertex\ti\tmult\tpartP\tpartPt\tptB\tIPs\tIP\tIPerr\tpartlcs\tEOverP\tghostProb\tIPPU\tnnkrec\tPIDNNk\tPIDNNpi\tPIDNNp\tPIDNNm\tPIDNNe\tdiff_eta\tdiff_phi\tphi\teta\tproj\tID\tveloch\tsignB\tsignTrack\tN_sig_sw\tmu_cut\te_cut\tK_cut\tseed\tBOosc"<<endl;

   outFile4<<"run\tevent\tNo\tmult\tnnkrec\tBmass\tptB\tvflag\tptmean\tipsmean\tvcharge\tsvm\tsvp\tM_BDphiDir\tW_M_BDphiDir\tM_svtau\tW_M_svtau\tM_pointtheta\tW_M_pointtheta\tdocamax\tsignB\tsignVtx\tN_sig_sw\tBOosc"<<endl;

   Long64_t nb = 0;
   int muon_counter = 0;
   int muon_counter_pt1 = 0;
   int muon_counter_pt2 = 0;
   int muon_counter_pt3 = 0;
   int muon_counter_pt4 = 0;
   int muon_counter_pt5 = 0;
   int ele_counter = 0;
   int kaon_counter = 0;
   int vtx_counter = 0;
   int kaon_counter_pt1 = 0;
   int kaon_counter_pt2 = 0;
   int kaon_counter_pt3 = 0;
   int kaon_counter_pt4 = 0;
   int kaon_counter_pt5 = 0;
   int no_muon = 0;
   int no_kaon = 0;

   for (Long64_t jentry=0; jentry<nentries;jentry++) {
//     if(jentry%10000==0) cout<<jentry<<" entries analysed out of "<<nentries<<" events"<<endl;
     Long64_t ientry = LoadTree(jentry);
     if (ientry < 0) break;
     nb = fChain->GetEntry(jentry);
     if(bkgCat!=0) continue;
//      cout<<"=================================="<<endl;
//      cout<<"event "<<jentry<<endl;
//      cout<<fixed<<setprecision(0)<<"run = "<<run<<" event = "<<event<<setprecision(2)<<" multiplicity : "<<N<<endl;
     double B_eta = 0.;
     double B_phi = 0.;
     double ptB = 0.;
     int signB = 0;
     double eta, phi_p, diff_eta, diff_phi;
     TLorentzVector p;
     TLorentzVector part_p;
  

//kaon selection
     double pt_kaon_max = 0.;
     double pt_kaon_max2 = 0.;
     double pt_kaon_max3 = 0.;
     double pt_kaon_max4 = 0.;
     double pt_kaon_max5 = 0.;

     int i_kaon_max = -1;
     int i_kaon_max2 = -1;
     int i_kaon_max3 = -1;
     int i_kaon_max4 = -1;
     int i_kaon_max5 = -1;
     bool has_os_kaon = false;
     bool kaon_selected = false;
     for (int i = 0; i<N; i++){
          if (abs(MCID[i])==321&&xFlag[i]==-1) has_os_kaon = true;
          bool select_kaon = false; 
          if( 1&&
              Pt[i]>700*0.001&&
              P[i]>2000*0.001&&
              tsal[i]<0.35&&
              PIDNNk[i]>0.25&&
              PIDNNm[i]<0.8&&
              PIDNNe[i]<0.8&&
              PIDNNpi[i]<0.8&&
              PIDNNp[i]<0.8&&
              PIDNNk[i]-PIDNNp[i]>0.&&
              PIDNNk[i]-PIDNNpi[i]>-0.6&&
              lcs[i]<3&&
              ip[i]/iperr[i]>4&&
              ipsign[i]/iperr[i]>-9999&&
              TMath::Abs(ip[i])<1.6&&
              ipPU[i]>6&&
              distPhi[i]>0.005&&
              1){
                 select_kaon = true;
                 kaon_selected = true;
              }
          if (select_kaon == true){
              if (Pt[i]>pt_kaon_max){
                  pt_kaon_max5 = pt_kaon_max4;
                  pt_kaon_max4 = pt_kaon_max3;
                  pt_kaon_max3 = pt_kaon_max2;
                  pt_kaon_max2 = pt_kaon_max;

                  i_kaon_max5 = i_kaon_max4;
                  i_kaon_max4 = i_kaon_max3;
                  i_kaon_max3 = i_kaon_max2;
                  i_kaon_max2 = i_kaon_max;

		  pt_kaon_max = Pt[i];
                  i_kaon_max = i;
              }
	  } 
        }
        if (kaon_selected) kaon_counter++;
        if (has_os_kaon) no_kaon++;
        if (abs(MCID[i_kaon_max5])==321&&xFlag[i_kaon_max5]==-1) kaon_counter_pt5++;
        if (abs(MCID[i_kaon_max4])==321&&xFlag[i_kaon_max4]==-1) kaon_counter_pt4++;
        if (abs(MCID[i_kaon_max3])==321&&xFlag[i_kaon_max3]==-1) kaon_counter_pt3++;
        if (abs(MCID[i_kaon_max2])==321&&xFlag[i_kaon_max2]==-1) kaon_counter_pt2++;
        if (abs(MCID[i_kaon_max])==321&&xFlag[i_kaon_max]==-1) kaon_counter_pt1++;
//muon selection 
     double pt_muon_max = 0.;
     double pt_muon_max2 = 0.;
     double pt_muon_max3 = 0.;
     double pt_muon_max4 = 0.;
     double pt_muon_max5 = 0.;
     int i_muon_max = -1;
     int i_muon_max2 = -1;
     int i_muon_max3 = -1;
     int i_muon_max4 = -1;
     int i_muon_max5 = -1;
     bool muon_selected = false;

     bool has_os_muon = false;
 
     for (int i = 0; i<N; i++){
          if (abs(MCID[i])==13&&xFlag[i]==-1) has_os_muon = true;
          bool select_muon = false;
          if(1&&
                gprob[i]<0.4&&
                NNgprob[i]<1&&
                PIDNNm[i]>0.35&&
                PIDNNpi[i]<0.8&&
                PIDNNp[i]<0.8&&
                PIDNNe[i]<0.8&&
                PIDNNk[i]<0.8&&
                Pt[i]>1100*0.001&&
                P[i]>0*0.001&&
                lcs[i]<3&&
                ip[i]/iperr[i]>0&&
                ipsign[i]/iperr[i]>-9999&&
                ipPU[i]>3&&
                distPhi[i]>0.005&&
         1){
                 select_muon = true;
                 muon_selected = true;
              }
          if (select_muon == true){
              if (Pt[i]>pt_muon_max){
                  pt_muon_max5 = pt_muon_max4;
                  pt_muon_max4 = pt_muon_max3;
                  pt_muon_max3 = pt_muon_max2;
                  pt_muon_max2 = pt_muon_max;

                  i_muon_max5 = i_muon_max4;
                  i_muon_max4 = i_muon_max3;
                  i_muon_max3 = i_muon_max2;
                  i_muon_max2 = i_muon_max;

                  pt_muon_max = Pt[i];
                  i_muon_max = i;
              }
          }
        }

        if (has_os_muon) no_muon++;
        if (muon_selected) muon_counter++;

        if (abs(MCID[i_muon_max5])==13&&xFlag[i_muon_max5]==-1) muon_counter_pt5++;
        if (abs(MCID[i_muon_max4])==13&&xFlag[i_muon_max4]==-1) muon_counter_pt4++;
        if (abs(MCID[i_muon_max3])==13&&xFlag[i_muon_max3]==-1) muon_counter_pt3++;  
        if (abs(MCID[i_muon_max2])==13&&xFlag[i_muon_max2]==-1) muon_counter_pt2++;
        if (abs(MCID[i_muon_max])==13&&xFlag[i_muon_max]==-1) muon_counter_pt1++;

//ele selection 
     double pt_ele_max = 0.;
     int i_ele_max = -1;
     bool ele_selected = false;
     for (int i = 0; i<N; i++){
/*          cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
          cout<<"Track "<<i<<": "<<endl;
          cout<<"gprob[i] = "<<gprob[i]<<endl;
          cout<<"NNgprob[i] = "<<NNgprob[i]<<endl;
	  cout<<"PIDNNpi[i] = "<<PIDNNpi[i]<<endl;
          cout<<"PIDNNp[i] = "<<PIDNNp[i]<<endl;
          cout<<"PIDNNe[i] = "<<PIDNNe[i]<<endl; 
          cout<<"PIDNNk[i] = "<<PIDNNk[i]<<endl;
	  cout<<"PIDNNe[i]-PIDNNpi[i]"<<PIDNNe[i]-PIDNNpi[i]<<endl;
	  cout<<"Pt[i] = "<<Pt[i]<<endl;
          cout<<"P[i] = "<<P[i]<<endl;
          cout<<"lcs[i] = "<<lcs[i]<<endl;
          cout<<"ip[i]/iperr[i] = "<<ip[i]/iperr[i]<<endl;
	  cout<<"ipsign[i]/iperr[i] = "<<ipsign[i]/iperr[i]<<endl;
          cout<<"ipPU[i] = "<<ipPU[i]<<endl;
          cout<<"distPhi[i] = "<<distPhi[i]<<endl;
          cout<<"veloch[i] = "<<veloch[i]<<endl;
          cout<<"EOverP[i] = "<<EOverP[i]<<endl;
*/          bool select_ele = false;
          if(1&&
                gprob[i]<0.4&&
                NNgprob[i]<1&&
                PIDNNpi[i]<0.8&&
                PIDNNp[i]<0.8&&
                PIDNNe[i]>0.1&&
                PIDNNk[i]<0.8&&
                PIDNNe[i]-PIDNNpi[i]>-0.8&&
                Pt[i]>1100*0.001&&
                P[i]>0*0.001&&
                lcs[i]<3&&
                ip[i]/iperr[i]>3.5&&
                ipsign[i]/iperr[i]>3.5&&
                ipPU[i]>4&&
                distPhi[i]>0.005&&
                veloch[i]>0&&
                veloch[i]<1.4&&
                EOverP[i]>0.8&&
                EOverP[i]<2.0&&
         1){     
                 select_ele = true;
                 ele_selected = true;
              }
          if (select_ele == true){
              if (Pt[i]>pt_ele_max){
                  pt_ele_max = Pt[i];
                  i_ele_max = i;
              }
          }
        }
/*        cout<<"=========================="<<endl;
        cout<<"=========================="<<endl;
        cout<<"==========Track "<<i_muon_max<<" is mu========="<<endl;
        cout<<"==========Track "<<i_kaon_max<<" is kaon========="<<endl;
        cout<<"==========Track "<<i_ele_max<<" is ele========="<<endl;
        cout<<"==========PT muon "<<pt_muon_max<<" ============="<<endl;
        cout<<"==========PT kaon "<<pt_kaon_max<<" ============="<<endl;
        cout<<"==========PT ele "<<pt_ele_max<<" ============="<<endl;
        cout<<"=========================="<<endl;
        cout<<"=========================="<<endl;
*/        if (ele_selected) ele_counter++;



//vtx selection 
     double q_vtx_max = -100.;
     int v_vtx_max = -1;
     bool vtx_selected = false;
//     if (V!=0) cout<<"==============================================="<<endl;
//     if (V!=0) cout<<"starting on "<<V<<" vertices "<<endl;
     vector< vector<int> > seed_collector;
     vector< vector<int> > seed_number_collector;
     for (int j = 0; j<V; j++){
           int vflagged = 0;
	   TLorentzVector SVmomentum = TLorentzVector(0.,0.,0.,0.);
	   double Vch = 0, norm = 0;
	   double Vptmean = 0, Vipsmean = 0, Vflaglong = 0, Vdocamax = 0;
           bool select_vtx = false;
           int iSeed1 = -1, iSeed2 = -1;
           double seedchi2 =-1, ptmin=-1, ipmax = -999, ipsmin = -999, rdist = -99;
           double prob_ptmin = -1, prob_ipmax = -1, prob_ipsmin = -1, prob_deltaphi=-1, prob_rdist=-1, prob_pointtheta =-1, prob_chi2=-1;
	   for ( int i=0; i< N; i++ ) {
			if(SecVtx_pt1[j]==Pt[i]) {iSeed1=i; }
			if(SecVtx_pt2[j]==Pt[i]) {iSeed2=i; }
           }
           if(iSeed1==-1 || iSeed2 == -1) continue;
//           cout<<"~~~~~~~~~~~~~~~~~~"<<endl;
//           cout<<"old seed = "<<j<<endl; 
//           cout<<"iSeed1 = "<<iSeed1<<" iSeed2 = "<<iSeed2<<endl;

        //check sanity of vertex

	if(gprob[iSeed1]>0.37) continue;
	if(lcs[iSeed1]>3) continue;
	if(ip[iSeed1]<0.1) continue;
	if(ip[iSeed1]/iperr[iSeed1] < 3.5) continue;
	if(iperr[iSeed1]==0) continue;
	if(IPSV[iSeed1] > 0.9) continue;
	if(DOCA[iSeed1] > 0.2) continue;
	if(cloneDist[iSeed1]!=-1) continue;

	if(gprob[iSeed2]>0.37) continue;
	if(lcs[iSeed2]>3) continue;
	if(ip[iSeed2]<0.1) continue;
	if(ip[iSeed2]/iperr[iSeed2] < 3.5) continue;
	if(iperr[iSeed2]==0) continue;
	if(IPSV[iSeed2] > 0.9) continue;
	if(DOCA[iSeed2] > 0.2) continue;
	if(cloneDist[iSeed2]!=-1) continue;



           bool seed_assigned=false;
           int size1 = seed_collector.size();
           for(int seed_candidate = 0; seed_candidate < size1; seed_candidate++){
                int size2 = (seed_collector.at(seed_candidate)).size();
	        for (int in_seeds = 0; in_seeds < size2;in_seeds++){
                     if( (seed_collector.at(seed_candidate)).at(in_seeds) == iSeed1){
//                                cout<<"Added Seed2 "<<iSeed2<<" to "<<seed_candidate<<" old seed "<<j<<endl;
				seed_assigned=true;
                                if(std::find((seed_collector.at(seed_candidate)).begin(),(seed_collector.at(seed_candidate)).end(), iSeed2)==(seed_collector.at(seed_candidate)).end()) (seed_collector.at(seed_candidate)).push_back(iSeed2);
				if(std::find((seed_number_collector.at(seed_candidate)).begin(),(seed_number_collector.at(seed_candidate)).end(), j )==(seed_number_collector.at(seed_candidate)).end()) (seed_number_collector.at(seed_candidate)).push_back(j);
		     }
                     if( (seed_collector.at(seed_candidate)).at(in_seeds) == iSeed2) {
//                                cout<<"Added Seed1 "<<iSeed1<<" to "<<seed_candidate<<" old seed "<<j<<endl;
				seed_assigned=true;
                                if(std::find((seed_collector.at(seed_candidate)).begin(),(seed_collector.at(seed_candidate)).end(), iSeed1)==(seed_collector.at(seed_candidate)).end()) (seed_collector.at(seed_candidate)).push_back(iSeed1);
                                if(std::find((seed_number_collector.at(seed_candidate)).begin(),(seed_number_collector.at(seed_candidate)).end(), j )==(seed_number_collector.at(seed_candidate)).end()) (seed_number_collector.at(seed_candidate)).push_back(j);
                     }
                }
           } 
           if(!seed_assigned) {
                vector<int> tmp;
                tmp.push_back(iSeed1);
                tmp.push_back(iSeed2);
                vector<int> tmp_V;
                tmp_V.push_back(j);
                seed_collector.push_back(tmp);
                seed_number_collector.push_back(tmp_V);
            }


           TVector3 SVpoint(SecVtx_x[j]-RVx, SecVtx_y[j]-RVy, SecVtx_z[j]-RVz);
           double sv_chi2 = SecVtx_chi2[j];

           double BDphiDir = SVpoint.DeltaPhi(SVmomentum.Vect()); // [-pi,+pi]
           double pointtheta = SVpoint.Theta();

	   seedchi2 = SecVtx_chi2[j];
	   ptmin = std::min(Pt[iSeed1],Pt[iSeed2]);
           ipmax = std::max(ip[iSeed1],ip[iSeed2]);
           ipsmin  = std::min(ip[iSeed1]/iperr[iSeed1],ip[iSeed2]/iperr[iSeed2]);
           double dphi=  fabs(phi[iSeed1]-phi[iSeed2]);
           if(dphi>TMath::Pi()) dphi= 2.*TMath::Pi()-dphi;
  	   rdist = sqrt( SVpoint.x()*SVpoint.x()
                       +SVpoint.y()*SVpoint.y()
                       +SVpoint.z()*SVpoint.z()*.074*.074 );
           TLorentzVector p_1 =  build4V( P[iSeed1], Pt[iSeed1], phi[iSeed1], ID[iSeed1] );
           TLorentzVector p_2 =  build4V( P[iSeed2], Pt[iSeed2], phi[iSeed2], ID[iSeed2] );

           if((p_1+p_2).M()<0.2) continue;
           if( (p_1+p_2).M() > 0.490 && (p_1+p_2).M() < 0.505  && ID[iSeed1]*ID[iSeed2]<0) continue;
           if(ptmin < 0.1) continue;
           if(ipsmin < 2.5) continue;
           if(dphi < 0) continue;
           if(dphi > 5) continue;
           if(SVpoint.Theta()>.350 || SVpoint.Theta()<.010) continue;
           if(gprob[iSeed2]>0.37 || gprob[iSeed2]>0.37) continue;


  	   prob_chi2 = pol(seedchi2, 0.632154, -0.0421607, 0.00181837);
           if (ptmin<1) prob_ptmin = pol(ptmin, 0.0144075, 1.28718, -0.477544);
           else prob_ptmin = pol(ptmin, 0.536686, 0.382045, -0.0945185);
  	   if (ipmax<0.4) prob_ipmax = pol(ipmax, 0.490689, 1.21535, -1.87733);
           else prob_ipmax = pol(ipmax, 0.790337, -0.229543, 0.00438416);
           if (ipsmin<6) prob_ipsmin = pol(ipsmin, -0.442382, 0.326852, -0.0258772);
           else prob_ipsmin = pol(ipsmin, 0.540565, 0.0130981, -0.000204322);
           prob_deltaphi = pol(dphi, 0.611887, 0.0165528, -0.0398336);
           prob_rdist = pol(rdist, 0.673403, -0.0743514, 0.00646535);
           if (pointtheta <0.05) prob_pointtheta = pol(pointtheta, 0.466409, 7.29019, -94.1293);
           else prob_pointtheta = pol(pointtheta, 0.555528, 0.98924, -5.43018);

           double probf = combine(prob_chi2,   prob_ptmin,    prob_ipmax,
                         prob_ipsmin, prob_deltaphi, prob_rdist, prob_pointtheta);

           if( probf < 0.42 ) {continue; }

   for ( int i=0; i< N; i++ ) {
                        int pass = 0;
                        if (i==iSeed1 || i == iSeed2) pass = 1;
			if(gprob[i]>0.37) continue;
			if(lcs[i]>3&&!pass) continue;
			if(ip[i]<0.1&&!pass) continue;
			if(ip[i]/iperr[i] < 3.5&&!pass) continue;
    			if(iperr[i]==0&&!pass) continue;
			if(IPSV[i] > 0.9&&!pass) continue;
			if(DOCA[i] > 0.2&&!pass) continue;
    			if(cloneDist[i]!=-1&&!pass) continue;
			vflagged++;
			part_p = build4V( P[i], Pt[i], phi[i], ID[i] );
			SVmomentum += part_p;
			double a = pow(part_p.Vect().Perp(), 0.55);
			Vch += ch[i] * a;
			norm+= a;
			Vptmean  += part_p.Vect().Perp();
			Vipsmean +=  ip[i]/iperr[i];
			if( int(trtyp[i])== 3 ) Vflaglong++;
			Vdocamax += DOCA[i];
                        
          }
          if(norm) {
                      Vch /= norm;
//                      if(fabs(Vch) < 0.2 ) Vch = 0;
                      Vptmean  /= vflagged;
                      Vipsmean /= vflagged;
                      Vdocamax/= vflagged;
           }


           double SVP = SVmomentum.P();
           double SVM = SVmomentum.M();
           double SVMag = SVmomentum.Mag();
           double SVGP = SVP/(0.16*SVM+0.12);
           double SVtau = SVpoint.Mag()*5.28/SVGP/0.299792458;

          if(1&&
              Vptmean>0&&
              Vptmean*vflagged>2.2&&
              Vipsmean*vflagged>0&&
              Vdocamax*vflagged<0.5&&
              SVP>8&&
              SVM>0.6&&
              SVMag>0&& 
           1){
                 select_vtx = true;
                 vtx_selected = true;
/*              cout<<"vertex selection<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
                              cout<<setprecision(2)<<"vflagged " << vflagged<<endl;
                              cout<<N<<endl;
                              cout<<krec<<endl;
                              cout<<ptB<<endl;
                              cout<<"Vptmean = "<<Vptmean<<endl;
                              cout<<"Vipsmean = "<<Vipsmean<<endl;
                              cout<<"Vch = "<<Vch<<endl;
                              cout<<"SVM = "<<SVM<<endl;
                              cout<<"SVP = "<<SVP<<endl;
                              cout<<"Vdocamax = "<<Vdocamax<<endl;
              cout<<"vertex selection<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
*/              }
          if (select_vtx == true){
                  if (Vch>q_vtx_max){
                  	q_vtx_max = Vch;
                  	v_vtx_max = j;
                  }
          }
        }
        if (vtx_selected) vtx_counter++;
        
        vector< vector<int> > final_seed_collector;
        vector< vector<int> > final_seed_number_collector;

        if(seed_collector.size()!=0){
        final_seed_collector.push_back(seed_collector.at(0));
        final_seed_number_collector.push_back(seed_number_collector.at(0));
        vector <int> list_to_erase;
	for(int seed_c = 1; seed_c != (int) seed_collector.size(); seed_c++){
		for(int seed_d = 0; seed_d != (int) (seed_collector.at(seed_c)).size(); seed_d++){
			for(int seed_e = 0; seed_e != seed_c; seed_e++){
				if(std::find((seed_collector.at(seed_e)).begin(),(seed_collector.at(seed_e)).end(),(seed_collector.at(seed_c)).at(seed_d))!=(seed_collector.at(seed_e).end()))
					{
						  for(int seed_f = 0; seed_f != (int) (seed_collector.at(seed_c)).size(); seed_f++){
							if(std::find((seed_collector.at(seed_e)).begin(),(seed_collector.at(seed_e)).end(),(seed_collector.at(seed_c)).at(seed_f))==(seed_collector.at(seed_e).end()))
							seed_collector.at(seed_e).push_back((seed_collector.at(seed_c)).at(seed_f));
						  }
                                                  for(int seed_g = 0; seed_g != (int) (seed_number_collector.at(seed_c)).size(); seed_g++){
                                                        if(std::find((seed_number_collector.at(seed_e)).begin(),(seed_number_collector.at(seed_e)).end(),(seed_number_collector.at(seed_c)).at(seed_g))==(seed_number_collector.at(seed_e).end()))
                                                        seed_number_collector.at(seed_e).push_back((seed_number_collector.at(seed_c)).at(seed_g));
                                                  }
						  if(std::find(list_to_erase.begin(), list_to_erase.end(), seed_c)==list_to_erase.end())
						  				list_to_erase.push_back(seed_c);
					}

			}

		}
        }
         
        for(int list1 = 0; list1!=(int) list_to_erase.size(); list1++){
		    int seed_to_erase = list_to_erase.at(list1);
//                    cout<<"seed_to_erase = "<<seed_to_erase<<endl;
                    seed_collector.erase(seed_collector.begin()+seed_to_erase);
                    seed_number_collector.erase(seed_number_collector.begin()+seed_to_erase);
        }

        }

//        if (V!=0) cout<<"Found "<<seed_collector.size()<<" seeds"<<endl;
        for(int seed_c = 0; seed_c != (int) seed_collector.size(); seed_c++){
//                cout<<"Seed "<<seed_c<<" with "<<(seed_collector.at(seed_c)).size()<<" tracks and "<<(seed_number_collector.at(seed_c)).size()<<" seed"<<endl;
//                cout<<"Tracks : "<<endl;
		for(int seed_d = 0; seed_d != (int) (seed_collector.at(seed_c)).size(); seed_d++){
//			cout<<(seed_collector.at(seed_c)).at(seed_d)<<"\t";
		}
//		cout<<"\n";
//                cout<<"Seeds : "<<endl;
                for(int seed_v = 0; seed_v != (int) (seed_number_collector.at(seed_c)).size(); seed_v++){
//                        cout<<(seed_number_collector.at(seed_c)).at(seed_v)<<"\t";
                }
//                cout<<"\n";
        }
//        cout<<seed_collector.size()<<endl;


        for (int i = 0; i<N;i++){
//                          cout<<"track"<<endl;
                          B_eta = 0.;
                          B_phi = 0.;
                          ptB = 0.;
                          signB = 0;
//                          if(ipPU[i]    < m_IPPU_cut)    continue;//all taggers far from PU vertices
//                          if(distPhi[i] < m_distphi_cut) continue;
//                          if(acos(Pt[i]/P[i])<m_thetaMin)continue;
                          int iSignal =0;
                          int K_MC_ID = 0;
                          for (int ii = 0; ii<M; ii++){
                               int bid = abs(int(sID[ii]));
                               if(bid==531 || bid==511 || bid==521) {
                                  p = build4V( sP[ii], sPt[ii], sPhi[ii], sMass[ii] );
				  ptB = p.Vect().Perp();
                                  signB = sID[ii]/bid;
				  B_eta =  p.Eta();
                                  B_phi =  p.Phi();
                               }
			       int MCbid = abs(int(sMCID[ii]));
                               if(MCbid==531 || MCbid==511 || MCbid==521) {
                                  signB = sMCID[ii]/MCbid;
                                  iSignal = ii; 
                               }
                               int K_MCbid = abs(int(sMCID[ii]));
                               if(K_MCbid==321) {
                                  K_MC_ID = sMCID[ii]/K_MCbid*BOosc;
                               }
                               if(sP[ii] == P[i] && sPt[ii]==Pt[i]){
					cout<<"wrong"<<endl;
			       }
                          }//signal ii
                          
                          part_p   = build4V( P[i], Pt[i], phi[i], ID[i] );
                          eta = part_p.Eta();
                          phi_p = part_p.Phi(); 
                          diff_eta = B_eta - eta;
                          diff_phi = B_phi - phi_p;
                          double proj = p.Dot(part_p);

                          int k = 0, m = 0, e = 0;
                          if (i == i_kaon_max) k = 1; 
                          if (i == i_muon_max) m = 1; 
                          if (i == i_ele_max) e = 1; 
                          
                        double type = 0;
                        if(abs(ancID[i])==5){
				if(ancID[i]*sMCID[iSignal]>0) type = -11;
                                if(ancID[i]*sMCID[iSignal]<0) type = +1;
                        }

                        if(type==0&&abs(GmothID[i])==5){
                                if(GmothID[i]*sMCID[iSignal]>0) type = -11;
                                if(GmothID[i]*sMCID[iSignal]<0) type = +1;
                        }

                        if(type==0&&abs(mothID[i])==5){
                                if(mothID[i]*sMCID[iSignal]>0) type = -11;
                                if(mothID[i]*sMCID[iSignal]<0) type = +1;
                        }
 
                          if(type==0&&(abs(abs(mothID[i])-550)<50||
                             abs(abs(mothID[i])-5500)<500||
                             abs(abs(mothID[i])-10550)<50||
                             abs(abs(mothID[i])-20550)<50)){
                                if(mothID[i]*sMCID[iSignal]<0) type = -12;
                                if(mothID[i]*sMCID[iSignal]>0) type = +1;
		
                          }



                          if(type==0&&(abs(abs(GmothID[i])-550)<50||
                             abs(abs(GmothID[i])-5500)<500||
                             abs(abs(GmothID[i])-10550)<50||
                             abs(abs(GmothID[i])-20550)<50)){
                                if(GmothID[i]*sMCID[iSignal]<0) type = -13;
                                if(GmothID[i]*sMCID[iSignal]>0) type = +1;

                          }


                          if(type==0&&(abs(abs(ancID[i])-550)<50||
                             abs(abs(ancID[i])-5500)<500||
                             abs(abs(ancID[i])-10550)<50||
                             abs(abs(ancID[i])-20550)<50)){
                                if(ancID[i]*sMCID[iSignal]<0) type = -14;
                                if(ancID[i]*sMCID[iSignal]>0) type = +1;
                          }

                        if(type==0&&mothID[i]==sMCMothID[iSignal]&&sMCMothID[iSignal]!=0){
                                        type = 11;
                                }
                        if(type==0&&mothID[i]==sMCGMothID[iSignal]&&sMCGMothID[iSignal]!=0){
                                        type = 12;
                        }
                        if(type==0&&GmothID[i]==sMCGMothID[iSignal]&&sMCGMothID[iSignal]!=0){
                                        type = 13;
                        }
                        if(type==0&&GmothID[i]==sMCMothID[iSignal]&&sMCMothID[iSignal]!=0){
                                        type = 14;
                        }

                       


                         if (xFlag[i]<-1) xFlag[i] = 0;
                         if (xFlag[i]>=1) xFlag[i] = 1;
                         if (type<0) type = -1;
                         if (type>0) type = 1;
                         
/*			 if(type*xFlag[i]<0||(type*xFlag[i]==0&&type+xFlag[i]!=0)){                         
				 cout<<"==============================="<<endl;
				 cout<<"sMCID[iSignal] = "<<sMCID[iSignal]<<endl;
				 cout<<"MCID[i] = "<<MCID[i]<<"mothID[i] = "<<mothID[i]<<" GmothID[i] = "<<GmothID[i]<<" ancID[i] = "<<ancID[i]<<endl;
				 cout<<"sMCMothID[i] = "<<sMCMothID[iSignal]<<" sMCGMothID[iSignal] = "<<sMCGMothID[iSignal]<<endl;
				 cout<<"type = "<<type<<" xFlag[i] = " << xFlag[i]<<endl;
				 cout<<"MC_OS_muon_type[i] = "<<MC_OS_muon_type[i]<<" bFlag[i] = "<<bFlag[i]<<endl;
				 cout<<"==============================="<<endl;
			 }
 */
                          outFile1<<setprecision(8)<<fixed<<
                                                            run<<"\t"<<
                                                            (Long64_t) event<<"\t"<<
                                                            Bmass<<"\t"<<
                                                            i<<"\t"<<
                                                            (int) N<<"\t"<<
                                                            P[i]<<"\t"<<
                                                            Pt[i]<<"\t"<<
                                                            ptB<<"\t"<<
                                                            ip[i]/iperr[i]<<"\t"<<
                                                            ip[i]<<"\t"<<
                                                            iperr[i]<<"\t"<<
                                                            lcs[i]<<"\t"<<
                                                            EOverP[i]<<"\t"<<
                                                            gprob[i]<<"\t"<<
                                                            ipPU[i]<<"\t"<<
                                                            krec<<"\t"<<
                                                            PIDNNk[i]<<"\t"<<
                                                            PIDNNpi[i]<<"\t"<<
                                                            PIDNNp[i]<<"\t"<<
                                                            PIDNNm[i]<<"\t"<<
                                                            PIDNNe[i]<<"\t"<<
                                                            diff_eta<<"\t"<<
                                                            diff_phi<<"\t"<<
                                                            phi_p<<"\t"<<
                                                            eta<<"\t"<<
                                                            proj<<"\t"<<
                                                            (int) ID[i]<<"\t"<<
                                                            veloch[i]<<"\t"<<
                                                            signB<<"\t"<<
                                                            ch[i]<<"\t"<<
                  					    distPhi[i]<<"\t"<<
                                                            N_sig_sw<<"\t"<<
                                                            m<<"\t"<<
                                                            e<<"\t"<<
                                                            k<<"\t"<<
							    MCID[i]<<"\t"<<
                                                            type<<"\t"<<
							    xFlag[i]<<"\t"<<
                                                            K_MC_ID<<"\t"<<
							    BOosc<<
                                                            endl;
        }//track i 

//       }

        for (int j = 0; j<V; j++){
                          for (int ii = 0; ii<M; ii++){
                               int bid = abs(int(sID[ii]));
                               if(bid==531 || bid==511 || bid==521) {
                                  p = build4V( sP[ii], sPt[ii], sPhi[ii], sMass[ii] );
                                  ptB = p.Vect().Perp();
                                  signB = sID[ii]/bid;
                               }
                               int MCbid = abs(int(sMCID[ii]));
                               if(MCbid==531 || MCbid==511 || MCbid==521) {
                                  signB = sMCID[ii]/MCbid;
                               }
                          }//signal ii


           		int vflagged = 0;
           		TLorentzVector SVmomentum = TLorentzVector(0.,0.,0.,0.);
           		double Vch = 0, norm = 0;
           		double Vptmean = 0, Vipsmean = 0, Vflaglong = 0, Vdocamax = 0;
           		bool select_vtx = false;
           		int iSeed1 = -1, iSeed2 = -1;
           		double seedchi2 =-1, ptmin=-1, ipmax = -999, ipsmin = -999, rdist = -99;
           		double prob_ptmin = -1, prob_ipmax = -1, prob_ipsmin = -1, prob_deltaphi=-1, prob_rdist=-1, prob_pointtheta =-1, prob_chi2=-1;
           		for ( int i=0; i< N; i++ ) {
                		if(!vFlag[i]){
                        		continue;
                		}else{
                        		if(SecVtx_pt1[j]==Pt[i]) {iSeed1=i; }
                        		if(SecVtx_pt2[j]==Pt[i]) {iSeed2=i; }
                		}

           		}
           		if(iSeed1==-1 || iSeed2 == -1) continue;
              		
//			cout<<"iSeed1 = "<<iSeed1<<" iSeed2 = "<<iSeed2<<endl;

           		TVector3 SVpoint(SecVtx_x[j]-RVx, SecVtx_y[j]-RVy, SecVtx_z[j]-RVz);
           		double sv_chi2 = SecVtx_chi2[j];

           		double BDphiDir = SVpoint.DeltaPhi(SVmomentum.Vect()); // [-pi,+pi]
           		double pointtheta = SVpoint.Theta();

           		seedchi2 = SecVtx_chi2[j];
           		ptmin = std::min(Pt[iSeed1],Pt[iSeed2]);
           		ipmax = std::max(ip[iSeed1],ip[iSeed2]);
           		ipsmin  = std::min(ip[iSeed1]/iperr[iSeed1],ip[iSeed2]/iperr[iSeed2]);
           		double dphi=  fabs(phi[iSeed1]-phi[iSeed2]);
           		if(dphi>TMath::Pi()) dphi= 2.*TMath::Pi()-dphi;
           		rdist = sqrt( SVpoint.x()*SVpoint.x()
                       		+SVpoint.y()*SVpoint.y()
                       		+SVpoint.z()*SVpoint.z()*.074*.074 );
           		TLorentzVector p_1 =  build4V( P[iSeed1], Pt[iSeed1], phi[iSeed1], ID[iSeed1] );
           		TLorentzVector p_2 =  build4V( P[iSeed2], Pt[iSeed2], phi[iSeed2], ID[iSeed2] );

			double pt1 = Pt[iSeed1];
                        double pt2 = Pt[iSeed2];
			double ips1 = ip[iSeed1];
                        double ips2 = ip[iSeed2];
			double phi1 = phi[iSeed1];
			double phi2 = phi[iSeed2];
                 	double ghost1 = gprob[iSeed1];	
                        double ghost2 = gprob[iSeed2];
                        double massSeed = (p_1+p_2).M();

           		prob_chi2 = pol(seedchi2, 0.632154, -0.0421607, 0.00181837);
           		if (ptmin<1) prob_ptmin = pol(ptmin, 0.0144075, 1.28718, -0.477544);
           			else prob_ptmin = pol(ptmin, 0.536686, 0.382045, -0.0945185);
           		if (ipmax<0.4) prob_ipmax = pol(ipmax, 0.490689, 1.21535, -1.87733);
           			else prob_ipmax = pol(ipmax, 0.790337, -0.229543, 0.00438416);
           		if (ipsmin<6) prob_ipsmin = pol(ipsmin, -0.442382, 0.326852, -0.0258772);
           			else prob_ipsmin = pol(ipsmin, 0.540565, 0.0130981, -0.000204322);
           		prob_deltaphi = pol(dphi, 0.611887, 0.0165528, -0.0398336);
           		prob_rdist = pol(rdist, 0.673403, -0.0743514, 0.00646535);
           		if (pointtheta <0.05) prob_pointtheta = pol(pointtheta, 0.466409, 7.29019, -94.1293);
           			else prob_pointtheta = pol(pointtheta, 0.555528, 0.98924, -5.43018);

           		double probf = combine(prob_chi2,   prob_ptmin,    prob_ipmax,
                         		prob_ipsmin, prob_deltaphi, prob_rdist, prob_pointtheta);


   			for ( int i=0; i< N; i++ ) {
                        		int pass = 0;
                        		if (i==iSeed1 || i == iSeed2) pass = 1;
                        		if(gprob[i]>0.37) continue;
                        		if(lcs[i]>3&&!pass) continue;
                        		if(ip[i]<0.1&&!pass) continue;
                        		if(ip[i]/iperr[i] < 3.5&&!pass) continue;
                        		if(iperr[i]==0&&!pass) continue;
                        		if(IPSV[i] > 0.9&&!pass) continue;
                        		if(DOCA[i] > 0.2&&!pass) continue;
                        		if(cloneDist[i]!=-1&&!pass) continue;
                        		vflagged++;
                        		part_p = build4V( P[i], Pt[i], phi[i], ID[i] );
                        		SVmomentum += part_p;
                        		double a = pow(part_p.Vect().Perp(), 0.55);
                        		Vch += ch[i] * a;
                        		norm+= a;
                        		Vptmean  += part_p.Vect().Perp();
                        		Vipsmean +=  ip[i]/iperr[i];
                        		if( int(trtyp[i])== 3 ) Vflaglong++;
                        		Vdocamax += DOCA[i];
                                       	double proj = p.Dot(part_p);

                                       	int k = 0, m = 0, e = 0;
                                       	if (i == i_kaon_max) k = 1;
                                       	if (i == i_muon_max) m = 1;
                                       	if (i == i_ele_max) e = 1;


                                       outFile3<<setprecision(8)<<fixed<<run<<"\t"<<
                                                            (Long64_t)  event<<"\t"<<
                                                            Bmass<<"\t"<<
                                                            j<<"\t"<<i<<"\t"<<
                                                            N<<"\t"<<
                                                            P[i]<<"\t"<<
                                                            Pt[i]<<"\t"<<
                                                            ptB<<"\t"<<
                                                            ip[i]/iperr[i]<<"\t"<<
                                                            ip[i]<<"\t"<<
                                                            iperr[i]<<"\t"<<
                                                            lcs[i]<<"\t"<<
                                                            EOverP[i]<<"\t"<<
                                                            gprob[i]<<"\t"<<
                                                            ipPU[i]<<"\t"<<
                                                            krec<<"\t"<<
                                                            PIDNNk[i]<<"\t"<<
                                                            PIDNNpi[i]<<"\t"<<
                                                            PIDNNp[i]<<"\t"<<
                                                            PIDNNm[i]<<"\t"<<
                                                            PIDNNe[i]<<"\t"<<
                                                            diff_eta<<"\t"<<
                                                            diff_phi<<"\t"<<
                                                            phi_p<<"\t"<<
                                                            eta<<"\t"<<
                                                            proj<<"\t"<<
                                                            ID[i]<<"\t"<<
                                                            veloch[i]<<"\t"<<
                                                            signB<<"\t"<<
                                                            ch[i]<<"\t"<<
                                                            N_sig_sw<<"\t"<<
                                                            m<<"\t"<<
                                                            e<<"\t"<<
                                                            k<<"\t"<<
							    pass<<"\t"<<
							    BOosc<<
                                                            endl;

          	 }
          	 if(norm) {
                 	Vch /= norm;
//                     	if(fabs(Vch) < 0.2 ) Vch = 0;
                      	Vptmean  /= vflagged;
                      	Vipsmean /= vflagged;
                      	Vdocamax/= vflagged;
           	}
                if (Vch==0) continue;

           	double SVP = SVmomentum.P();
           	double SVM = SVmomentum.M();
           	double SVMag = SVmomentum.Mag();
           	double SVGP = SVP/(0.16*SVM+0.12);
           	double SVtau = SVpoint.Mag()*5.28/SVGP/0.299792458;
                int vv = j == v_vtx_max?1:0;


                           outFile2<<run<<"\t"<<
                                    (Long64_t) event<<"\t"<<
                                    j<<"\t"<<
                                    N<<"\t"<<
                                    krec<<"\t"<<
                                    Bmass<<"\t"<<
                                    ptB<<"\t"<<
                                    vflagged<<"\t"<<
                                    Vptmean<<"\t"<<
                                    Vipsmean<<"\t"<<
                                    abs(Vch)<<"\t"<<
                                    SVM<<"\t"<<
                                    SVP<<"\t"<<
                                    BDphiDir<<"\t"<<
                                    SVtau<<"\t"<<
                                    Vdocamax<<"\t"<<
                                    signB<<"\t"<<
                                    abs(Vch)/Vch<<"\t"<<
                                    N_sig_sw<<"\t"<<
				    massSeed<<"\t"<<
				    pt1<<"\t"<<
				    pt2<<"\t"<<
				    ips1<<"\t"<<
				    ips2<<"\t"<<
				    phi1<<"\t"<<
				    phi2<<"\t"<<
				    ghost1<<"\t"<<
                                    ghost2<<"\t"<<
				    SVpoint.Theta()<<"\t"<<
				    seedchi2<<"\t"<<
				    rdist<<"\t"<<
                                    probf<<"\t"<<
                                    vv<<"\t"<<
				    BOosc<<endl;

        }//SV

//Mike's Vertices
       int size1 = (int) seed_collector.size();
       for(int seed_c = 0; seed_c != size1; seed_c++){
		for (int ii = 0; ii<M; ii++){
		       int bid = abs(int(sID[ii]));
		       if(bid==531 || bid==511 || bid==521) {
			  p = build4V( sP[ii], sPt[ii], sPhi[ii], sMass[ii] );
			  ptB = p.Vect().Perp();
			  signB = sID[ii]/bid;
		       }
		       int MCbid = abs(int(sMCID[ii]));
		       if(MCbid==531 || MCbid==511 || MCbid==521) {
			  signB = sMCID[ii]/MCbid;
		       }
	  	}//signal ii
	        int size2 = (int) (seed_collector.at(seed_c)).size();
                int size3 = (int) (seed_number_collector.at(seed_c)).size();
	        int vflagged = 0;
	        TLorentzVector SVmomentum = TLorentzVector(0.,0.,0.,0.);
	        double Vch = 0, norm = 0;
	        double Vptmean = 0, Vipsmean = 0, Vflaglong = 0, Vdocamax = 0;
	        bool select_vtx = false;
	        int iSeed1 = -1, iSeed2 = -1;
	        double seedchi2 =-1, ptmin=-1, ipmax = -999, ipsmin = -999, rdist = -99;
	        double prob_ptmin = -1, prob_ipmax = -1, prob_ipsmin = -1, prob_deltaphi=-1, prob_rdist=-1, prob_pointtheta =-1, prob_chi2=-1;

                //loop over all initial seeds:
		double M_SecVtx_x = 0, M_SecVtx_y = 0, M_SecVtx_z = 0;
                double W_M_SecVtx_x = 0, W_M_SecVtx_y = 0, W_M_SecVtx_z = 0;
                double D_M_SecVtx_x = 0, D_M_SecVtx_y = 0, D_M_SecVtx_z = 0;
                double D_W_M_SecVtx_x = 0, D_W_M_SecVtx_y = 0, D_W_M_SecVtx_z = 0;
                double M_SecVtx_chi2;
		for(int seed_v = 0; seed_v != size3; seed_v++){
			int v = (seed_number_collector.at(seed_c)).at(seed_v);	
			M_SecVtx_x+= SecVtx_x[v];
                        M_SecVtx_y+= SecVtx_y[v];
                        M_SecVtx_z+= SecVtx_z[v];
			M_SecVtx_chi2+= SecVtx_chi2[v];
                        W_M_SecVtx_x+= SecVtx_x[v]/SecVtx_chi2[v];
                        W_M_SecVtx_y+= SecVtx_y[v]/SecVtx_chi2[v];
                        W_M_SecVtx_z+= SecVtx_z[v]/SecVtx_chi2[v];
		}//loop over all initial seeds:

	        M_SecVtx_x = M_SecVtx_x/size3;
                M_SecVtx_y = M_SecVtx_y/size3;
                M_SecVtx_z = M_SecVtx_z/size3;

                M_SecVtx_chi2 = M_SecVtx_chi2/size3;

                W_M_SecVtx_x = W_M_SecVtx_x/size3;
                W_M_SecVtx_y = W_M_SecVtx_y/size3;
                W_M_SecVtx_z = W_M_SecVtx_z/size3;

                TVector3 M_SVpoint(M_SecVtx_x-RVx, M_SecVtx_y-RVy, M_SecVtx_z-RVz);
                TVector3 W_M_SVpoint(W_M_SecVtx_x-RVx, W_M_SecVtx_y-RVy, W_M_SecVtx_z-RVz);

                double sv_chi2 = M_SecVtx_chi2;

                double M_pointtheta = M_SVpoint.Theta();
                double W_M_pointtheta = W_M_SVpoint.Theta();



      		for(int seed_d = 0; seed_d != (int) (seed_collector.at(seed_c)).size(); seed_d++){
			int i = (seed_collector.at(seed_c)).at(seed_d);
			if(gprob[i]>0.37) continue;
			if(lcs[i]>3) continue;
			if(ip[i]<0.1) continue;
			if(ip[i]/iperr[i] < 3.5) continue;
			if(iperr[i]==0) continue;
			if(IPSV[i] > 0.9) continue;
			if(DOCA[i] > 0.2) continue;
			if(cloneDist[i]!=-1) continue;
			part_p = build4V( P[i], Pt[i], phi[i], ID[i] );
                        SVmomentum += part_p;
                        double a = pow(part_p.Vect().Perp(), 0.55);
                        Vch += ch[i] * a;
                        norm+= a;
                        Vptmean  += part_p.Vect().Perp();
                        Vipsmean +=  ip[i]/iperr[i];
			vflagged++;
                        Vdocamax += DOCA[i];
                }

          if(norm) {
                      Vch /= norm;
                      Vptmean  /= vflagged;
                      Vipsmean /= vflagged;
                      Vdocamax/= vflagged;
           }



           double M_BDphiDir = M_SVpoint.DeltaPhi(SVmomentum.Vect()); 
           double W_M_BDphiDir = W_M_SVpoint.DeltaPhi(SVmomentum.Vect());


           double SVP = SVmomentum.P();
           double SVM = SVmomentum.M();
           double SVMag = SVmomentum.Mag();
           double SVGP = SVP/(0.16*SVM+0.12);
           double W_M_SVtau = W_M_SVpoint.Mag()*5.28/SVGP/0.299792458;
           double M_SVtau = M_SVpoint.Mag()*5.28/SVGP/0.299792458;





                           outFile4<<run<<"\t"<<
                                    (Long64_t) event<<"\t"<<
                                    seed_c<<"\t"<<
                                    seed_collector.size()<<"\t"<<
                                    krec<<"\t"<<
                                    Bmass<<"\t"<<
                                    ptB<<"\t"<<
                                    vflagged<<"\t"<<
                                    Vptmean<<"\t"<<
                                    Vipsmean<<"\t"<<
                                    abs(Vch)<<"\t"<<
                                    SVM<<"\t"<<
                                    SVP<<"\t"<<
                                    M_BDphiDir<<"\t"<<
                                    W_M_BDphiDir<<"\t"<<
                                    M_SVtau<<"\t"<<
                                    W_M_SVtau<<"\t"<<
                                    M_SVpoint.Theta()<<"\t"<<
                                    W_M_SVpoint.Theta()<<"\t"<<
                                    Vdocamax<<"\t"<<
                                    signB<<"\t"<<
                                    abs(Vch)/Vch<<"\t"<<
                                    N_sig_sw<<"\t"<<
				    BOosc<<
                                    endl;

        }







 

   }//jentry
   cout << decay<<" STATISTICS:"<<endl;
   cout << "muon efficiency = "<<(double) muon_counter<<"/"<<nentries <<"="<< (double) muon_counter/nentries<<endl;
   cout << "ele efficiency = "<<(double) ele_counter<<"/"<<nentries <<"="<< (double) ele_counter/nentries<<endl;
   cout << "kaon efficiency = "<<(double) kaon_counter<<"/"<<nentries<<"="<<(double) kaon_counter/nentries<<endl;
   cout << "vtx efficiency = "<<(double) vtx_counter<<"/"<<nentries<<"="<<(double) vtx_counter/nentries<<endl;;
   cout<< "Total muons = "<<no_muon<<endl;
   cout << "muon pt 1st max number = "<< muon_counter_pt1<<endl;
   cout << "muon pt 2nd max number = "<< muon_counter_pt2<<endl;
   cout << "muon pt 3rd max number = "<< muon_counter_pt3<<endl;
   cout << "muon pt 4th max number = "<< muon_counter_pt4<<endl;
   cout << "muon pt 5th max number = "<< muon_counter_pt5<<endl;
   cout<< "Total kaons = "<<no_kaon<<endl;
   cout << "kaon pt 1st max number = "<< kaon_counter_pt1<<endl;
   cout << "kaon pt 2nd max number = "<< kaon_counter_pt2<<endl;
   cout << "kaon pt 3rd max number = "<< kaon_counter_pt3<<endl;
   cout << "kaon pt 4th max number = "<< kaon_counter_pt4<<endl;
   cout << "kaon pt 5th max number = "<< kaon_counter_pt5<<endl;

}




TLorentzVector selection::build4V(double p, double pt, double phi, double ID) {
  //if ID is a fractionary nr <9 it will be assumed as a mass in GeV
  if(!p) return  TLorentzVector(0., 0., 0., 0.);
  double a = p*p - pt*pt;
  if(a<0) {
    return TLorentzVector(0., 0., 0., 0.) ;
  }
  double pid = abs((int)ID);

  double m=0;
  if( ID>0 && ID<9 ) m = ID;//take it as a mass 
  else if(pid==211)  m = 0.13957;
  else if(pid==321)  m = 0.493677;
  else if(pid==2212) m = 0.938272;
  else if(pid==11)   m = 0.000511;
  else if(pid==13)   m = 0.105658;
  else if(pid>3000)  return  TLorentzVector(0., 0., 0., 0.);
  else {
    cout<<"in build4V: unknown particle ID="<<ID <<"  (Pt="<<pt<<")"<<endl;
    return TLorentzVector(0., 0., 0., 0.) ;
  }

  TLorentzVector v( pt*cos(phi), pt*sin(phi), sqrt(a), sqrt(p*p+m*m) );
  return v;
}


double selection::combine(double p1, double p2, double p3,
                                   double p4, double p5, double p6, double p7){
  double probs = p1*p2*p3*p4*p5*p6*p7;
  double probb = (1-p1)*(1-p2)*(1-p3)*(1-p4)*(1-p5)*(1-p6)*(1-p7);
  double probf = probs / ( probs + probb );
//  if(probf>1) probf=1;
  return probf;
}


double selection::pol(double x, double a0,
             double a1, double a2,
             double a3, double a4) {
    double res = a0;
    if(a1) res += a1*x;
    if(a2) res += a2*x*x;
    if(a3) res += a3*x*x*x;
    if(a4) res += a4*x*x*x*x;
    return res;
  }///< return n-th degree polynomial by coefficients

  double func(double x, double a0,
              double a1, double a2,
              double a3){
   // TF1* arcTAN=new TF1("arcTAN","(atan((x-[3])*[0])+1.5)*[1]*0.17+[2]",0,1); 
  double arg = ((x-a3)*a0);
  double res = ((atan(arg))+1.5)*a1*0.17+a2;
  return res;
  }
