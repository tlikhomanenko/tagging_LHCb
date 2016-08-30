//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu May  5 17:37:28 2016 by ROOT version 5.34/25
// from TTree mytagging/mytagging
// found on file: ../datasets/MC/root/Bu_JPsiK/2012_12143001.root
//////////////////////////////////////////////////////////

#ifndef selection_h
#define selection_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TLorentzVector.h>

// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.

class selection {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   UInt_t          run;
   Double_t        event;
   Double_t        gpsTime;
   UInt_t          bunchID;
   Int_t           evType;
   Long64_t        kType;
   Double_t        minBChi2;
   Double_t        Bmass;
   Int_t           Bid;
   Double_t        Bip;
   Double_t        Biperr;
   ULong64_t       krec;
   Int_t           PVndof;
   Double_t        RVx;
   Double_t        RVy;
   Double_t        RVz;
   Double_t        tau;
   Double_t        tauErr;
   Double_t        ctChi2;
   Short_t         Tag;
   Float_t         Omega;
   Short_t         TagOS;
   Float_t         OmegaOS;
   Int_t           T;
   Float_t         TaggerType[10];   //[T]
   Float_t         TaggerDecision[10];   //[T]
   Float_t         TaggerOmega[10];   //[T]
   Long64_t        L0byName;
   Long64_t        trig;
   Long64_t        L0TisTos;
   Long64_t        HltTisTos;
   Int_t           M;
   Float_t         sID[10];   //[M]
   Float_t         sKEY[10];   //[M]
   Float_t         sMothID[10];   //[M]
   Float_t         sMothKEY[10];   //[M]
   Float_t         sP[10];   //[M]
   Float_t         sPt[10];   //[M]
   Float_t         sPhi[10];   //[M]
   Float_t         sMass[10];   //[M]
   Float_t         sVx[10];   //[M]
   Float_t         sVy[10];   //[M]
   Float_t         sVz[10];   //[M]
   Float_t         sMCID[10];   //[M]
   Float_t         sMCKEY[10];   //[M]
   Float_t         sMCMothID[10];   //[M]
   Float_t         sMCMothKEY[10];   //[M]
   Float_t         sMCGMothID[10];   //[M]
   Float_t         sMCGMothKEY[10];   //[M]
   Float_t         sMCancID[10];   //[M]
   Float_t         sMCancKEY[10];   //[M]
   Float_t         sMCP[10];   //[M]
   Float_t         sMCPt[10];   //[M]
   Float_t         sMCPhi[10];   //[M]
   Long64_t        TrueTag;
   Int_t           BSosc;
   Float_t         BSx;
   Float_t         BSy;
   Float_t         BSz;
   Double_t        kx;
   Double_t        ky;
   Double_t        kz;
   Long64_t        BOID;
   Float_t         BOP;
   Float_t         BOthe;
   Float_t         BOphi;
   Float_t         BOx;
   Float_t         BOy;
   Float_t         BOz;
   Int_t           BOosc;
   Int_t           nBODau;
   Float_t         BODau_ID[500];   //[nBODau]
   Float_t         BODau_mothIdx[500];   //[nBODau]
   Float_t         BODau_firstDauIdx[500];   //[nBODau]
   Float_t         BODau_nDau[500];   //[nBODau]
   Float_t         BODau_p[500];   //[nBODau]
   Float_t         BODau_the[500];   //[nBODau]
   Float_t         BODau_phi[500];   //[nBODau]
   Int_t           bkgCat;
   Int_t           V;
   Float_t         SecVtx_pt1[100];   //[V]
   Float_t         SecVtx_pt2[100];   //[V]
   Float_t         SecVtx_x[100];   //[V]
   Float_t         SecVtx_y[100];   //[V]
   Float_t         SecVtx_z[100];   //[V]
   Float_t         SecVtx_zerr[100];   //[V]
   Float_t         SecVtx_chi2[100];   //[V]
   Float_t         BOVtx_x[100];   //[V]
   Float_t         BOVtx_y[100];   //[V]
   Float_t         BOVtx_z[100];   //[V]
   Float_t         BOVtx_zerr[100];   //[V]
   Float_t         BOVtx_chi2[100];   //[V]
   Int_t           C;
   Float_t         Charm_mode[200];   //[C]
   Float_t         Charm_id[200];   //[C]
   Float_t         Charm_MCid[200];   //[C]
   Float_t         Charm_ancID[200];   //[C]
   Float_t         Charm_bcat[200];   //[C]
   Float_t         Charm_m[200];   //[C]
   Float_t         Charm_p[200];   //[C]
   Float_t         Charm_pt[200];   //[C]
   Float_t         Charm_vchi2[200];   //[C]
   Float_t         Charm_vndof[200];   //[C]
   Float_t         Charm_fd[200];   //[C]
   Float_t         Charm_fdchi2[200];   //[C]
   Float_t         Charm_tau[200];   //[C]
   Float_t         Charm_bpvdira[200];   //[C]
   Float_t         Charm_maxProbGhostDaus[200];   //[C]
   Float_t         Charm_sumPT[200];   //[C]
   Float_t         Charm_proDLLp[200];   //[C]
   Float_t         Charm_proDLLk[200];   //[C]
   Float_t         Charm_proNNp[200];   //[C]
   Float_t         Charm_proNNk[200];   //[C]
   Float_t         Charm_proIppvchi2[200];   //[C]
   Float_t         Charm_proIpMinchi2[200];   //[C]
   Float_t         Charm_proPT[200];   //[C]
   Float_t         Charm_proId[200];   //[C]
   Float_t         Charm_kaonDLLp[200];   //[C]
   Float_t         Charm_kaonDLLk[200];   //[C]
   Float_t         Charm_kaonNNp[200];   //[C]
   Float_t         Charm_kaonNNk[200];   //[C]
   Float_t         Charm_kaonIppvchi2[200];   //[C]
   Float_t         Charm_kaonIpMinchi2[200];   //[C]
   Float_t         Charm_kaonPT[200];   //[C]
   Float_t         Charm_kaonId[200];   //[C]
   Float_t         Charm_pionDLLp[200];   //[C]
   Float_t         Charm_pionDLLk[200];   //[C]
   Float_t         Charm_pionNNp[200];   //[C]
   Float_t         Charm_pionNNk[200];   //[C]
   Float_t         Charm_pionIppvchi2[200];   //[C]
   Float_t         Charm_pionIpMinchi2[200];   //[C]
   Float_t         Charm_pionPT[200];   //[C]
   Float_t         Charm_pionId[200];   //[C]
   Float_t         Charm_elecNNe[200];   //[C]
   Float_t         Charm_elecPT[200];   //[C]
   Float_t         Charm_muonNNmu[200];   //[C]
   Float_t         Charm_muonPT[200];   //[C]
   Float_t         Charm_ksMass[200];   //[C]
   Float_t         Charm_ksCtau[200];   //[C]
   Float_t         Charm_lambdaMass[200];   //[C]
   Float_t         Charm_lambdaCtau[200];   //[C]
   Float_t         Charm_dauID_0[200];   //[C]
   Float_t         Charm_dauID_1[200];   //[C]
   Float_t         Charm_dauID_2[200];   //[C]
   Float_t         Charm_dauID_3[200];   //[C]
   Float_t         Charm_dauID_4[200];   //[C]
   Float_t         Charm_dauID_5[200];   //[C]
   Int_t           N;
   Float_t         ID[200];   //[N]
   Float_t         P[200];   //[N]
   Float_t         Pt[200];   //[N]
   Float_t         Pl[200];   //[N]
   Float_t         phi[200];   //[N]
   Float_t         theta[200];   //[N]
   Float_t         ch[200];   //[N]
   Float_t         ip[200];   //[N]
   Float_t         ipsign[200];   //[N]
   Float_t         iperr[200];   //[N]
   Float_t         iperr_Bs[200];   //[N]
   Float_t         ipsign_Bs[200];   //[N]
   Float_t         chi2_pBs[200];   //[N]
   Float_t         ipPU[200];   //[N]
   Float_t         ipmean[200];   //[N]
   Float_t         nippu[200];   //[N]
   Float_t         nippuerr[200];   //[N]
   Float_t         tracks[200];   //[N]
   Float_t         ippubs[200];   //[N]
   Float_t         ippuchi2bs[200];   //[N]
   Float_t         xpos[200];   //[N]
   Float_t         ypos[200];   //[N]
   Float_t         zpos[200];   //[N]
   Float_t         xerrpos[200];   //[N]
   Float_t         yerrpos[200];   //[N]
   Float_t         zerrpos[200];   //[N]
   Float_t         nippu2[200];   //[N]
   Float_t         nippuerr2[200];   //[N]
   Float_t         tracks2[200];   //[N]
   Float_t         ippubs2[200];   //[N]
   Float_t         ippuchi2bs2[200];   //[N]
   Float_t         xpos2[200];   //[N]
   Float_t         ypos2[200];   //[N]
   Float_t         zpos2[200];   //[N]
   Float_t         xerrpos2[200];   //[N]
   Float_t         yerrpos2[200];   //[N]
   Float_t         zerrpos2[200];   //[N]
   Float_t         nippu3[200];   //[N]
   Float_t         nippuerr3[200];   //[N]
   Float_t         tracks3[200];   //[N]
   Float_t         ippubs3[200];   //[N]
   Float_t         ippuchi2bs3[200];   //[N]
   Float_t         xpos3[200];   //[N]
   Float_t         ypos3[200];   //[N]
   Float_t         zpos3[200];   //[N]
   Float_t         xerrpos3[200];   //[N]
   Float_t         yerrpos3[200];   //[N]
   Float_t         zerrpos3[200];   //[N]
   Float_t         trtyp[200];   //[N]
   Float_t         lcs[200];   //[N]
   Float_t         cloneDist[200];   //[N]
   Float_t         trackxfirst[200];   //[N]
   Float_t         trackyfirst[200];   //[N]
   Float_t         trackzfirst[200];   //[N]
   Float_t         trackp[200];   //[N]
   Float_t         tsal[200];   //[N]
   Float_t         gprob[200];   //[N]
   Float_t         NNgprob[200];   //[N]
   Float_t         distPhi[200];   //[N]
   Float_t         veloch[200];   //[N]
   Float_t         EOverP[200];   //[N]
   Float_t         PIDe[200];   //[N]
   Float_t         PIDm[200];   //[N]
   Float_t         PIDk[200];   //[N]
   Float_t         PIDp[200];   //[N]
   Float_t         PIDfl[200];   //[N]
   Float_t         PIDNNe[200];   //[N]
   Float_t         PIDNNm[200];   //[N]
   Float_t         PIDNNk[200];   //[N]
   Float_t         PIDNNp[200];   //[N]
   Float_t         PIDNNpi[200];   //[N]
   Float_t         MCID[200];   //[N]
   Float_t         MCKEY[200];   //[N]
   Float_t         MCP[200];   //[N]
   Float_t         MCPt[200];   //[N]
   Float_t         MCPl[200];   //[N]
   Float_t         MCphi[200];   //[N]
   Float_t         MCx[200];   //[N]
   Float_t         MCy[200];   //[N]
   Float_t         MCz[200];   //[N]
   Float_t         mothID[200];   //[N]
   Float_t         mothKEY[200];   //[N]
   Float_t         GmothID[200];   //[N]
   Float_t         GmothKEY[200];   //[N]
   Float_t         ancID[200];   //[N]
   Float_t         ancKEY[200];   //[N]
   Float_t         bFlag[200];   //[N]
   Float_t         xFlag[200];   //[N]
   Float_t         MC_OS_muon_type[200];   //[N]
   Float_t         vFlag[200];   //[N]
   Float_t         IPSV[200];   //[N]
   Float_t         IPSVerr[200];   //[N]
   Float_t         DOCA[200];   //[N]
   Float_t         DOCAerr[200];   //[N]
   Float_t         dphi[200];   //[N]
   Float_t         deta[200];   //[N]
   Float_t         dQ[200];   //[N]
   Float_t         pionCombinedMass[200];   //[N]
   Double_t        N_sig_sw;
   Double_t        L_N_sig;
   Double_t        N_bkg_sw;
   Double_t        L_N_bkg;

   // List of branches
   TBranch        *b_run;   //!
   TBranch        *b_event;   //!
   TBranch        *b_gpsTime;   //!
   TBranch        *b_bunchID;   //!
   TBranch        *b_evType;   //!
   TBranch        *b_kType;   //!
   TBranch        *b_minBChi2;   //!
   TBranch        *b_Bmass;   //!
   TBranch        *b_Bid;   //!
   TBranch        *b_Bip;   //!
   TBranch        *b_Biperr;   //!
   TBranch        *b_krec;   //!
   TBranch        *b_PVndof;   //!
   TBranch        *b_RVx;   //!
   TBranch        *b_RVy;   //!
   TBranch        *b_RVz;   //!
   TBranch        *b_tau;   //!
   TBranch        *b_tauErr;   //!
   TBranch        *b_ctChi2;   //!
   TBranch        *b_Tag;   //!
   TBranch        *b_Omega;   //!
   TBranch        *b_TagOS;   //!
   TBranch        *b_OmegaOS;   //!
   TBranch        *b_T;   //!
   TBranch        *b_TaggerType;   //!
   TBranch        *b_TaggerDecision;   //!
   TBranch        *b_TaggerOmega;   //!
   TBranch        *b_L0byName;   //!
   TBranch        *b_trig;   //!
   TBranch        *b_L0TisTos;   //!
   TBranch        *b_HltTisTos;   //!
   TBranch        *b_M;   //!
   TBranch        *b_sID;   //!
   TBranch        *b_sKEY;   //!
   TBranch        *b_sMothID;   //!
   TBranch        *b_sMothKEY;   //!
   TBranch        *b_sP;   //!
   TBranch        *b_sPt;   //!
   TBranch        *b_sPhi;   //!
   TBranch        *b_sMass;   //!
   TBranch        *b_sVx;   //!
   TBranch        *b_sVy;   //!
   TBranch        *b_sVz;   //!
   TBranch        *b_sMCID;   //!
   TBranch        *b_sMCKEY;   //!
   TBranch        *b_sMCMothID;   //!
   TBranch        *b_sMCMothKEY;   //!
   TBranch        *b_sMCGMothID;   //!
   TBranch        *b_sMCGMothKEY;   //!
   TBranch        *b_sMCancID;   //!
   TBranch        *b_sMCancKEY;   //!
   TBranch        *b_sMCP;   //!
   TBranch        *b_sMCPt;   //!
   TBranch        *b_sMCPhi;   //!
   TBranch        *b_TrueTag;   //!
   TBranch        *b_BSosc;   //!
   TBranch        *b_BSx;   //!
   TBranch        *b_BSy;   //!
   TBranch        *b_BSz;   //!
   TBranch        *b_kx;   //!
   TBranch        *b_ky;   //!
   TBranch        *b_kz;   //!
   TBranch        *b_BOID;   //!
   TBranch        *b_BOP;   //!
   TBranch        *b_BOthe;   //!
   TBranch        *b_BOphi;   //!
   TBranch        *b_BOx;   //!
   TBranch        *b_BOy;   //!
   TBranch        *b_BOz;   //!
   TBranch        *b_BOosc;   //!
   TBranch        *b_nBODau;   //!
   TBranch        *b_BODau_ID;   //!
   TBranch        *b_BODau_mothIdx;   //!
   TBranch        *b_BODau_firstDauIdx;   //!
   TBranch        *b_BODau_nDau;   //!
   TBranch        *b_BODau_p;   //!
   TBranch        *b_BODau_the;   //!
   TBranch        *b_BODau_phi;   //!
   TBranch        *b_bkgCat;   //!
   TBranch        *b_V;   //!
   TBranch        *b_SecVtx_pt1;   //!
   TBranch        *b_SecVtx_pt2;   //!
   TBranch        *b_SecVtx_x;   //!
   TBranch        *b_SecVtx_y;   //!
   TBranch        *b_SecVtx_z;   //!
   TBranch        *b_SecVtx_zerr;   //!
   TBranch        *b_SecVtx_chi2;   //!
   TBranch        *b_BOVtx_x;   //!
   TBranch        *b_BOVtx_y;   //!
   TBranch        *b_BOVtx_z;   //!
   TBranch        *b_BOVtx_zerr;   //!
   TBranch        *b_BOVtx_chi2;   //!
   TBranch        *b_C;   //!
   TBranch        *b_Charm_mode;   //!
   TBranch        *b_Charm_id;   //!
   TBranch        *b_Charm_MCid;   //!
   TBranch        *b_Charm_ancID;   //!
   TBranch        *b_Charm_bcat;   //!
   TBranch        *b_Charm_m;   //!
   TBranch        *b_Charm_p;   //!
   TBranch        *b_Charm_pt;   //!
   TBranch        *b_Charm_vchi2;   //!
   TBranch        *b_Charm_vndof;   //!
   TBranch        *b_Charm_fd;   //!
   TBranch        *b_Charm_fdchi2;   //!
   TBranch        *b_Charm_tau;   //!
   TBranch        *b_Charm_bpvdira;   //!
   TBranch        *b_Charm_maxProbGhostDaus;   //!
   TBranch        *b_Charm_sumPT;   //!
   TBranch        *b_Charm_proDLLp;   //!
   TBranch        *b_Charm_proDLLk;   //!
   TBranch        *b_Charm_proNNp;   //!
   TBranch        *b_Charm_proNNk;   //!
   TBranch        *b_Charm_proIppvchi2;   //!
   TBranch        *b_Charm_proIpMinchi2;   //!
   TBranch        *b_Charm_proPT;   //!
   TBranch        *b_Charm_proId;   //!
   TBranch        *b_Charm_kaonDLLp;   //!
   TBranch        *b_Charm_kaonDLLk;   //!
   TBranch        *b_Charm_kaonNNp;   //!
   TBranch        *b_Charm_kaonNNk;   //!
   TBranch        *b_Charm_kaonIppvchi2;   //!
   TBranch        *b_Charm_kaonIpMinchi2;   //!
   TBranch        *b_Charm_kaonPT;   //!
   TBranch        *b_Charm_kaonId;   //!
   TBranch        *b_Charm_pionDLLp;   //!
   TBranch        *b_Charm_pionDLLk;   //!
   TBranch        *b_Charm_pionNNp;   //!
   TBranch        *b_Charm_pionNNk;   //!
   TBranch        *b_Charm_pionIppvchi2;   //!
   TBranch        *b_Charm_pionIpMinchi2;   //!
   TBranch        *b_Charm_pionPT;   //!
   TBranch        *b_Charm_pionId;   //!
   TBranch        *b_Charm_elecNNe;   //!
   TBranch        *b_Charm_elecPT;   //!
   TBranch        *b_Charm_muonNNmu;   //!
   TBranch        *b_Charm_muonPT;   //!
   TBranch        *b_Charm_ksMass;   //!
   TBranch        *b_Charm_ksCtau;   //!
   TBranch        *b_Charm_lambdaMass;   //!
   TBranch        *b_Charm_lambdaCtau;   //!
   TBranch        *b_Charm_dauID_0;   //!
   TBranch        *b_Charm_dauID_1;   //!
   TBranch        *b_Charm_dauID_2;   //!
   TBranch        *b_Charm_dauID_3;   //!
   TBranch        *b_Charm_dauID_4;   //!
   TBranch        *b_Charm_dauID_5;   //!
   TBranch        *b_N;   //!
   TBranch        *b_ID;   //!
   TBranch        *b_P;   //!
   TBranch        *b_Pt;   //!
   TBranch        *b_Pl;   //!
   TBranch        *b_phi;   //!
   TBranch        *b_theta;   //!
   TBranch        *b_ch;   //!
   TBranch        *b_ip;   //!
   TBranch        *b_ipsign;   //!
   TBranch        *b_iperr;   //!
   TBranch        *b_iperr_Bs;   //!
   TBranch        *b_ipsign_Bs;   //!
   TBranch        *b_chi2_pBs;   //!
   TBranch        *b_ipPU;   //!
   TBranch        *b_ipmean;   //!
   TBranch        *b_nippu;   //!
   TBranch        *b_nippuerr;   //!
   TBranch        *b_tracks;   //!
   TBranch        *b_ippubs;   //!
   TBranch        *b_ippuchi2bs;   //!
   TBranch        *b_xpos;   //!
   TBranch        *b_ypos;   //!
   TBranch        *b_zpos;   //!
   TBranch        *b_xerrpos;   //!
   TBranch        *b_yerrpos;   //!
   TBranch        *b_zerrpos;   //!
   TBranch        *b_nippu2;   //!
   TBranch        *b_nippuerr2;   //!
   TBranch        *b_tracks2;   //!
   TBranch        *b_ippubs2;   //!
   TBranch        *b_ippuchi2bs2;   //!
   TBranch        *b_xpos2;   //!
   TBranch        *b_ypos2;   //!
   TBranch        *b_zpos2;   //!
   TBranch        *b_xerrpos2;   //!
   TBranch        *b_yerrpos2;   //!
   TBranch        *b_zerrpos2;   //!
   TBranch        *b_nippu3;   //!
   TBranch        *b_nippuerr3;   //!
   TBranch        *b_tracks3;   //!
   TBranch        *b_ippubs3;   //!
   TBranch        *b_ippuchi2bs3;   //!
   TBranch        *b_xpos3;   //!
   TBranch        *b_ypos3;   //!
   TBranch        *b_zpos3;   //!
   TBranch        *b_xerrpos3;   //!
   TBranch        *b_yerrpos3;   //!
   TBranch        *b_zerrpos3;   //!
   TBranch        *b_trtyp;   //!
   TBranch        *b_lcs;   //!
   TBranch        *b_cloneDist;   //!
   TBranch        *b_trackxfirst;   //!
   TBranch        *b_trackyfirst;   //!
   TBranch        *b_trackzfirst;   //!
   TBranch        *b_trackp;   //!
   TBranch        *b_tsal;   //!
   TBranch        *b_gprob;   //!
   TBranch        *b_NNgprob;   //!
   TBranch        *b_distPhi;   //!
   TBranch        *b_veloch;   //!
   TBranch        *b_EOverP;   //!
   TBranch        *b_PIDe;   //!
   TBranch        *b_PIDm;   //!
   TBranch        *b_PIDk;   //!
   TBranch        *b_PIDp;   //!
   TBranch        *b_PIDfl;   //!
   TBranch        *b_PIDNNe;   //!
   TBranch        *b_PIDNNm;   //!
   TBranch        *b_PIDNNk;   //!
   TBranch        *b_PIDNNp;   //!
   TBranch        *b_PIDNNpi;   //!
   TBranch        *b_MCID;   //!
   TBranch        *b_MCKEY;   //!
   TBranch        *b_MCP;   //!
   TBranch        *b_MCPt;   //!
   TBranch        *b_MCPl;   //!
   TBranch        *b_MCphi;   //!
   TBranch        *b_MCx;   //!
   TBranch        *b_MCy;   //!
   TBranch        *b_MCz;   //!
   TBranch        *b_mothID;   //!
   TBranch        *b_mothKEY;   //!
   TBranch        *b_GmothID;   //!
   TBranch        *b_GmothKEY;   //!
   TBranch        *b_ancID;   //!
   TBranch        *b_ancKEY;   //!
   TBranch        *b_bFlag;   //!
   TBranch        *b_xFlag;   //!
   TBranch        *b_MC_OS_muon_type;   //!
   TBranch        *b_vFlag;   //!
   TBranch        *b_IPSV;   //!
   TBranch        *b_IPSVerr;   //!
   TBranch        *b_DOCA;   //!
   TBranch        *b_DOCAerr;   //!
   TBranch        *b_dphi;   //!
   TBranch        *b_deta;   //!
   TBranch        *b_dQ;   //!
   TBranch        *b_pionCombinedMass;   //!
   TBranch        *b_N_sig_sw;   //!
   TBranch        *b_L_N_sig;   //!
   TBranch        *b_N_bkg_sw;   //!
   TBranch        *b_L_N_bkg;   //!

   selection(TTree *tree=0);
   virtual ~selection();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop(TString decay, TString year, TString datamc);
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1); 
   TLorentzVector build4V(double p, double pt, double phi, double ID);
   double combine(double p1, double p2, double p3,
                                   double p4, double p5, double p6, double p7);
   double pol(double x, double a0, double a1=0, double a2=0, double a3=0, double a4=0);

};

#endif

#ifdef selection_cxx
selection::selection(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("../datasets/MC/root/Bu_JPsiK/2012_12143001.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("../datasets/MC/root/Bu_JPsiK/2012_12143001.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("../datasets/MC/root/Bu_JPsiK/2012_12143001.root:/TagAnaBu");
      dir->GetObject("mytagging",tree);

   }
   Init(tree);
}

selection::~selection()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t selection::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t selection::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void selection::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("run", &run, &b_run);
   fChain->SetBranchAddress("event", &event, &b_event);
   fChain->SetBranchAddress("gpsTime", &gpsTime, &b_gpsTime);
   fChain->SetBranchAddress("bunchID", &bunchID, &b_bunchID);
   fChain->SetBranchAddress("evType", &evType, &b_evType);
   fChain->SetBranchAddress("kType", &kType, &b_kType);
   fChain->SetBranchAddress("minBChi2", &minBChi2, &b_minBChi2);
   fChain->SetBranchAddress("Bmass", &Bmass, &b_Bmass);
   fChain->SetBranchAddress("Bid", &Bid, &b_Bid);
   fChain->SetBranchAddress("Bip", &Bip, &b_Bip);
   fChain->SetBranchAddress("Biperr", &Biperr, &b_Biperr);
   fChain->SetBranchAddress("krec", &krec, &b_krec);
   fChain->SetBranchAddress("PVndof", &PVndof, &b_PVndof);
   fChain->SetBranchAddress("RVx", &RVx, &b_RVx);
   fChain->SetBranchAddress("RVy", &RVy, &b_RVy);
   fChain->SetBranchAddress("RVz", &RVz, &b_RVz);
   fChain->SetBranchAddress("tau", &tau, &b_tau);
   fChain->SetBranchAddress("tauErr", &tauErr, &b_tauErr);
   fChain->SetBranchAddress("ctChi2", &ctChi2, &b_ctChi2);
   fChain->SetBranchAddress("Tag", &Tag, &b_Tag);
   fChain->SetBranchAddress("Omega", &Omega, &b_Omega);
   fChain->SetBranchAddress("TagOS", &TagOS, &b_TagOS);
   fChain->SetBranchAddress("OmegaOS", &OmegaOS, &b_OmegaOS);
   fChain->SetBranchAddress("T", &T, &b_T);
   fChain->SetBranchAddress("TaggerType", TaggerType, &b_TaggerType);
   fChain->SetBranchAddress("TaggerDecision", TaggerDecision, &b_TaggerDecision);
   fChain->SetBranchAddress("TaggerOmega", TaggerOmega, &b_TaggerOmega);
   fChain->SetBranchAddress("L0byName", &L0byName, &b_L0byName);
   fChain->SetBranchAddress("trig", &trig, &b_trig);
   fChain->SetBranchAddress("L0TisTos", &L0TisTos, &b_L0TisTos);
   fChain->SetBranchAddress("HltTisTos", &HltTisTos, &b_HltTisTos);
   fChain->SetBranchAddress("M", &M, &b_M);
   fChain->SetBranchAddress("sID", sID, &b_sID);
   fChain->SetBranchAddress("sKEY", sKEY, &b_sKEY);
   fChain->SetBranchAddress("sMothID", sMothID, &b_sMothID);
   fChain->SetBranchAddress("sMothKEY", sMothKEY, &b_sMothKEY);
   fChain->SetBranchAddress("sP", sP, &b_sP);
   fChain->SetBranchAddress("sPt", sPt, &b_sPt);
   fChain->SetBranchAddress("sPhi", sPhi, &b_sPhi);
   fChain->SetBranchAddress("sMass", sMass, &b_sMass);
   fChain->SetBranchAddress("sVx", sVx, &b_sVx);
   fChain->SetBranchAddress("sVy", sVy, &b_sVy);
   fChain->SetBranchAddress("sVz", sVz, &b_sVz);
   fChain->SetBranchAddress("sMCID", sMCID, &b_sMCID);
   fChain->SetBranchAddress("sMCKEY", sMCKEY, &b_sMCKEY);
   fChain->SetBranchAddress("sMCMothID", sMCMothID, &b_sMCMothID);
   fChain->SetBranchAddress("sMCMothKEY", sMCMothKEY, &b_sMCMothKEY);
   fChain->SetBranchAddress("sMCGMothID", sMCGMothID, &b_sMCGMothID);
   fChain->SetBranchAddress("sMCGMothKEY", sMCGMothKEY, &b_sMCGMothKEY);
   fChain->SetBranchAddress("sMCancID", sMCancID, &b_sMCancID);
   fChain->SetBranchAddress("sMCancKEY", sMCancKEY, &b_sMCancKEY);
   fChain->SetBranchAddress("sMCP", sMCP, &b_sMCP);
   fChain->SetBranchAddress("sMCPt", sMCPt, &b_sMCPt);
   fChain->SetBranchAddress("sMCPhi", sMCPhi, &b_sMCPhi);
   fChain->SetBranchAddress("TrueTag", &TrueTag, &b_TrueTag);
   fChain->SetBranchAddress("BSosc", &BSosc, &b_BSosc);
   fChain->SetBranchAddress("BSx", &BSx, &b_BSx);
   fChain->SetBranchAddress("BSy", &BSy, &b_BSy);
   fChain->SetBranchAddress("BSz", &BSz, &b_BSz);
   fChain->SetBranchAddress("kx", &kx, &b_kx);
   fChain->SetBranchAddress("ky", &ky, &b_ky);
   fChain->SetBranchAddress("kz", &kz, &b_kz);
   fChain->SetBranchAddress("BOID", &BOID, &b_BOID);
   fChain->SetBranchAddress("BOP", &BOP, &b_BOP);
   fChain->SetBranchAddress("BOthe", &BOthe, &b_BOthe);
   fChain->SetBranchAddress("BOphi", &BOphi, &b_BOphi);
   fChain->SetBranchAddress("BOx", &BOx, &b_BOx);
   fChain->SetBranchAddress("BOy", &BOy, &b_BOy);
   fChain->SetBranchAddress("BOz", &BOz, &b_BOz);
   fChain->SetBranchAddress("BOosc", &BOosc, &b_BOosc);
   fChain->SetBranchAddress("nBODau", &nBODau, &b_nBODau);
   fChain->SetBranchAddress("BODau_ID", BODau_ID, &b_BODau_ID);
   fChain->SetBranchAddress("BODau_mothIdx", BODau_mothIdx, &b_BODau_mothIdx);
   fChain->SetBranchAddress("BODau_firstDauIdx", BODau_firstDauIdx, &b_BODau_firstDauIdx);
   fChain->SetBranchAddress("BODau_nDau", BODau_nDau, &b_BODau_nDau);
   fChain->SetBranchAddress("BODau_p", BODau_p, &b_BODau_p);
   fChain->SetBranchAddress("BODau_the", BODau_the, &b_BODau_the);
   fChain->SetBranchAddress("BODau_phi", BODau_phi, &b_BODau_phi);
   fChain->SetBranchAddress("bkgCat", &bkgCat, &b_bkgCat);
   fChain->SetBranchAddress("V", &V, &b_V);
   fChain->SetBranchAddress("SecVtx_pt1", SecVtx_pt1, &b_SecVtx_pt1);
   fChain->SetBranchAddress("SecVtx_pt2", SecVtx_pt2, &b_SecVtx_pt2);
   fChain->SetBranchAddress("SecVtx_x", SecVtx_x, &b_SecVtx_x);
   fChain->SetBranchAddress("SecVtx_y", SecVtx_y, &b_SecVtx_y);
   fChain->SetBranchAddress("SecVtx_z", SecVtx_z, &b_SecVtx_z);
   fChain->SetBranchAddress("SecVtx_zerr", SecVtx_zerr, &b_SecVtx_zerr);
   fChain->SetBranchAddress("SecVtx_chi2", SecVtx_chi2, &b_SecVtx_chi2);
   fChain->SetBranchAddress("BOVtx_x", BOVtx_x, &b_BOVtx_x);
   fChain->SetBranchAddress("BOVtx_y", BOVtx_y, &b_BOVtx_y);
   fChain->SetBranchAddress("BOVtx_z", BOVtx_z, &b_BOVtx_z);
   fChain->SetBranchAddress("BOVtx_zerr", BOVtx_zerr, &b_BOVtx_zerr);
   fChain->SetBranchAddress("BOVtx_chi2", BOVtx_chi2, &b_BOVtx_chi2);
   fChain->SetBranchAddress("C", &C, &b_C);
   fChain->SetBranchAddress("Charm_mode", Charm_mode, &b_Charm_mode);
   fChain->SetBranchAddress("Charm_id", Charm_id, &b_Charm_id);
   fChain->SetBranchAddress("Charm_MCid", Charm_MCid, &b_Charm_MCid);
   fChain->SetBranchAddress("Charm_ancID", Charm_ancID, &b_Charm_ancID);
   fChain->SetBranchAddress("Charm_bcat", Charm_bcat, &b_Charm_bcat);
   fChain->SetBranchAddress("Charm_m", Charm_m, &b_Charm_m);
   fChain->SetBranchAddress("Charm_p", Charm_p, &b_Charm_p);
   fChain->SetBranchAddress("Charm_pt", Charm_pt, &b_Charm_pt);
   fChain->SetBranchAddress("Charm_vchi2", Charm_vchi2, &b_Charm_vchi2);
   fChain->SetBranchAddress("Charm_vndof", Charm_vndof, &b_Charm_vndof);
   fChain->SetBranchAddress("Charm_fd", Charm_fd, &b_Charm_fd);
   fChain->SetBranchAddress("Charm_fdchi2", Charm_fdchi2, &b_Charm_fdchi2);
   fChain->SetBranchAddress("Charm_tau", Charm_tau, &b_Charm_tau);
   fChain->SetBranchAddress("Charm_bpvdira", Charm_bpvdira, &b_Charm_bpvdira);
   fChain->SetBranchAddress("Charm_maxProbGhostDaus", Charm_maxProbGhostDaus, &b_Charm_maxProbGhostDaus);
   fChain->SetBranchAddress("Charm_sumPT", Charm_sumPT, &b_Charm_sumPT);
   fChain->SetBranchAddress("Charm_proDLLp", Charm_proDLLp, &b_Charm_proDLLp);
   fChain->SetBranchAddress("Charm_proDLLk", Charm_proDLLk, &b_Charm_proDLLk);
   fChain->SetBranchAddress("Charm_proNNp", Charm_proNNp, &b_Charm_proNNp);
   fChain->SetBranchAddress("Charm_proNNk", Charm_proNNk, &b_Charm_proNNk);
   fChain->SetBranchAddress("Charm_proIppvchi2", Charm_proIppvchi2, &b_Charm_proIppvchi2);
   fChain->SetBranchAddress("Charm_proIpMinchi2", Charm_proIpMinchi2, &b_Charm_proIpMinchi2);
   fChain->SetBranchAddress("Charm_proPT", Charm_proPT, &b_Charm_proPT);
   fChain->SetBranchAddress("Charm_proId", Charm_proId, &b_Charm_proId);
   fChain->SetBranchAddress("Charm_kaonDLLp", Charm_kaonDLLp, &b_Charm_kaonDLLp);
   fChain->SetBranchAddress("Charm_kaonDLLk", Charm_kaonDLLk, &b_Charm_kaonDLLk);
   fChain->SetBranchAddress("Charm_kaonNNp", Charm_kaonNNp, &b_Charm_kaonNNp);
   fChain->SetBranchAddress("Charm_kaonNNk", Charm_kaonNNk, &b_Charm_kaonNNk);
   fChain->SetBranchAddress("Charm_kaonIppvchi2", Charm_kaonIppvchi2, &b_Charm_kaonIppvchi2);
   fChain->SetBranchAddress("Charm_kaonIpMinchi2", Charm_kaonIpMinchi2, &b_Charm_kaonIpMinchi2);
   fChain->SetBranchAddress("Charm_kaonPT", Charm_kaonPT, &b_Charm_kaonPT);
   fChain->SetBranchAddress("Charm_kaonId", Charm_kaonId, &b_Charm_kaonId);
   fChain->SetBranchAddress("Charm_pionDLLp", Charm_pionDLLp, &b_Charm_pionDLLp);
   fChain->SetBranchAddress("Charm_pionDLLk", Charm_pionDLLk, &b_Charm_pionDLLk);
   fChain->SetBranchAddress("Charm_pionNNp", Charm_pionNNp, &b_Charm_pionNNp);
   fChain->SetBranchAddress("Charm_pionNNk", Charm_pionNNk, &b_Charm_pionNNk);
   fChain->SetBranchAddress("Charm_pionIppvchi2", Charm_pionIppvchi2, &b_Charm_pionIppvchi2);
   fChain->SetBranchAddress("Charm_pionIpMinchi2", Charm_pionIpMinchi2, &b_Charm_pionIpMinchi2);
   fChain->SetBranchAddress("Charm_pionPT", Charm_pionPT, &b_Charm_pionPT);
   fChain->SetBranchAddress("Charm_pionId", Charm_pionId, &b_Charm_pionId);
   fChain->SetBranchAddress("Charm_elecNNe", Charm_elecNNe, &b_Charm_elecNNe);
   fChain->SetBranchAddress("Charm_elecPT", Charm_elecPT, &b_Charm_elecPT);
   fChain->SetBranchAddress("Charm_muonNNmu", Charm_muonNNmu, &b_Charm_muonNNmu);
   fChain->SetBranchAddress("Charm_muonPT", Charm_muonPT, &b_Charm_muonPT);
   fChain->SetBranchAddress("Charm_ksMass", Charm_ksMass, &b_Charm_ksMass);
   fChain->SetBranchAddress("Charm_ksCtau", Charm_ksCtau, &b_Charm_ksCtau);
   fChain->SetBranchAddress("Charm_lambdaMass", Charm_lambdaMass, &b_Charm_lambdaMass);
   fChain->SetBranchAddress("Charm_lambdaCtau", Charm_lambdaCtau, &b_Charm_lambdaCtau);
   fChain->SetBranchAddress("Charm_dauID_0", Charm_dauID_0, &b_Charm_dauID_0);
   fChain->SetBranchAddress("Charm_dauID_1", Charm_dauID_1, &b_Charm_dauID_1);
   fChain->SetBranchAddress("Charm_dauID_2", Charm_dauID_2, &b_Charm_dauID_2);
   fChain->SetBranchAddress("Charm_dauID_3", Charm_dauID_3, &b_Charm_dauID_3);
   fChain->SetBranchAddress("Charm_dauID_4", Charm_dauID_4, &b_Charm_dauID_4);
   fChain->SetBranchAddress("Charm_dauID_5", Charm_dauID_5, &b_Charm_dauID_5);
   fChain->SetBranchAddress("N", &N, &b_N);
   fChain->SetBranchAddress("ID", ID, &b_ID);
   fChain->SetBranchAddress("P", P, &b_P);
   fChain->SetBranchAddress("Pt", Pt, &b_Pt);
   fChain->SetBranchAddress("Pl", Pl, &b_Pl);
   fChain->SetBranchAddress("phi", phi, &b_phi);
   fChain->SetBranchAddress("theta", theta, &b_theta);
   fChain->SetBranchAddress("ch", ch, &b_ch);
   fChain->SetBranchAddress("ip", ip, &b_ip);
   fChain->SetBranchAddress("ipsign", ipsign, &b_ipsign);
   fChain->SetBranchAddress("iperr", iperr, &b_iperr);
   fChain->SetBranchAddress("iperr_Bs", iperr_Bs, &b_iperr_Bs);
   fChain->SetBranchAddress("ipsign_Bs", ipsign_Bs, &b_ipsign_Bs);
   fChain->SetBranchAddress("chi2_pBs", chi2_pBs, &b_chi2_pBs);
   fChain->SetBranchAddress("ipPU", ipPU, &b_ipPU);
   fChain->SetBranchAddress("ipmean", ipmean, &b_ipmean);
   fChain->SetBranchAddress("nippu", nippu, &b_nippu);
   fChain->SetBranchAddress("nippuerr", nippuerr, &b_nippuerr);
   fChain->SetBranchAddress("tracks", tracks, &b_tracks);
   fChain->SetBranchAddress("ippubs", ippubs, &b_ippubs);
   fChain->SetBranchAddress("ippuchi2bs", ippuchi2bs, &b_ippuchi2bs);
   fChain->SetBranchAddress("xpos", xpos, &b_xpos);
   fChain->SetBranchAddress("ypos", ypos, &b_ypos);
   fChain->SetBranchAddress("zpos", zpos, &b_zpos);
   fChain->SetBranchAddress("xerrpos", xerrpos, &b_xerrpos);
   fChain->SetBranchAddress("yerrpos", yerrpos, &b_yerrpos);
   fChain->SetBranchAddress("zerrpos", zerrpos, &b_zerrpos);
   fChain->SetBranchAddress("nippu2", nippu2, &b_nippu2);
   fChain->SetBranchAddress("nippuerr2", nippuerr2, &b_nippuerr2);
   fChain->SetBranchAddress("tracks2", tracks2, &b_tracks2);
   fChain->SetBranchAddress("ippubs2", ippubs2, &b_ippubs2);
   fChain->SetBranchAddress("ippuchi2bs2", ippuchi2bs2, &b_ippuchi2bs2);
   fChain->SetBranchAddress("xpos2", xpos2, &b_xpos2);
   fChain->SetBranchAddress("ypos2", ypos2, &b_ypos2);
   fChain->SetBranchAddress("zpos2", zpos2, &b_zpos2);
   fChain->SetBranchAddress("xerrpos2", xerrpos2, &b_xerrpos2);
   fChain->SetBranchAddress("yerrpos2", yerrpos2, &b_yerrpos2);
   fChain->SetBranchAddress("zerrpos2", zerrpos2, &b_zerrpos2);
   fChain->SetBranchAddress("nippu3", nippu3, &b_nippu3);
   fChain->SetBranchAddress("nippuerr3", nippuerr3, &b_nippuerr3);
   fChain->SetBranchAddress("tracks3", tracks3, &b_tracks3);
   fChain->SetBranchAddress("ippubs3", ippubs3, &b_ippubs3);
   fChain->SetBranchAddress("ippuchi2bs3", ippuchi2bs3, &b_ippuchi2bs3);
   fChain->SetBranchAddress("xpos3", xpos3, &b_xpos3);
   fChain->SetBranchAddress("ypos3", ypos3, &b_ypos3);
   fChain->SetBranchAddress("zpos3", zpos3, &b_zpos3);
   fChain->SetBranchAddress("xerrpos3", xerrpos3, &b_xerrpos3);
   fChain->SetBranchAddress("yerrpos3", yerrpos3, &b_yerrpos3);
   fChain->SetBranchAddress("zerrpos3", zerrpos3, &b_zerrpos3);
   fChain->SetBranchAddress("trtyp", trtyp, &b_trtyp);
   fChain->SetBranchAddress("lcs", lcs, &b_lcs);
   fChain->SetBranchAddress("cloneDist", cloneDist, &b_cloneDist);
   fChain->SetBranchAddress("trackxfirst", trackxfirst, &b_trackxfirst);
   fChain->SetBranchAddress("trackyfirst", trackyfirst, &b_trackyfirst);
   fChain->SetBranchAddress("trackzfirst", trackzfirst, &b_trackzfirst);
   fChain->SetBranchAddress("trackp", trackp, &b_trackp);
   fChain->SetBranchAddress("tsal", tsal, &b_tsal);
   fChain->SetBranchAddress("gprob", gprob, &b_gprob);
   fChain->SetBranchAddress("NNgprob", NNgprob, &b_NNgprob);
   fChain->SetBranchAddress("distPhi", distPhi, &b_distPhi);
   fChain->SetBranchAddress("veloch", veloch, &b_veloch);
   fChain->SetBranchAddress("EOverP", EOverP, &b_EOverP);
   fChain->SetBranchAddress("PIDe", PIDe, &b_PIDe);
   fChain->SetBranchAddress("PIDm", PIDm, &b_PIDm);
   fChain->SetBranchAddress("PIDk", PIDk, &b_PIDk);
   fChain->SetBranchAddress("PIDp", PIDp, &b_PIDp);
   fChain->SetBranchAddress("PIDfl", PIDfl, &b_PIDfl);
   fChain->SetBranchAddress("PIDNNe", PIDNNe, &b_PIDNNe);
   fChain->SetBranchAddress("PIDNNm", PIDNNm, &b_PIDNNm);
   fChain->SetBranchAddress("PIDNNk", PIDNNk, &b_PIDNNk);
   fChain->SetBranchAddress("PIDNNp", PIDNNp, &b_PIDNNp);
   fChain->SetBranchAddress("PIDNNpi", PIDNNpi, &b_PIDNNpi);
   fChain->SetBranchAddress("MCID", MCID, &b_MCID);
   fChain->SetBranchAddress("MCKEY", MCKEY, &b_MCKEY);
   fChain->SetBranchAddress("MCP", MCP, &b_MCP);
   fChain->SetBranchAddress("MCPt", MCPt, &b_MCPt);
   fChain->SetBranchAddress("MCPl", MCPl, &b_MCPl);
   fChain->SetBranchAddress("MCphi", MCphi, &b_MCphi);
   fChain->SetBranchAddress("MCx", MCx, &b_MCx);
   fChain->SetBranchAddress("MCy", MCy, &b_MCy);
   fChain->SetBranchAddress("MCz", MCz, &b_MCz);
   fChain->SetBranchAddress("mothID", mothID, &b_mothID);
   fChain->SetBranchAddress("mothKEY", mothKEY, &b_mothKEY);
   fChain->SetBranchAddress("GmothID", GmothID, &b_GmothID);
   fChain->SetBranchAddress("GmothKEY", GmothKEY, &b_GmothKEY);
   fChain->SetBranchAddress("ancID", ancID, &b_ancID);
   fChain->SetBranchAddress("ancKEY", ancKEY, &b_ancKEY);
   fChain->SetBranchAddress("bFlag", bFlag, &b_bFlag);
   fChain->SetBranchAddress("xFlag", xFlag, &b_xFlag);
   fChain->SetBranchAddress("MC_OS_muon_type", MC_OS_muon_type, &b_MC_OS_muon_type);
   fChain->SetBranchAddress("vFlag", vFlag, &b_vFlag);
   fChain->SetBranchAddress("IPSV", IPSV, &b_IPSV);
   fChain->SetBranchAddress("IPSVerr", IPSVerr, &b_IPSVerr);
   fChain->SetBranchAddress("DOCA", DOCA, &b_DOCA);
   fChain->SetBranchAddress("DOCAerr", DOCAerr, &b_DOCAerr);
   fChain->SetBranchAddress("dphi", dphi, &b_dphi);
   fChain->SetBranchAddress("deta", deta, &b_deta);
   fChain->SetBranchAddress("dQ", dQ, &b_dQ);
   fChain->SetBranchAddress("pionCombinedMass", pionCombinedMass, &b_pionCombinedMass);
   fChain->SetBranchAddress("N_sig_sw", &N_sig_sw, &b_N_sig_sw);
   fChain->SetBranchAddress("L_N_sig", &L_N_sig, &b_L_N_sig);
   fChain->SetBranchAddress("N_bkg_sw", &N_bkg_sw, &b_N_bkg_sw);
   fChain->SetBranchAddress("L_N_bkg", &L_N_bkg, &b_L_N_bkg);
   Notify();
}

Bool_t selection::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void selection::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t selection::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef selection_cxx
