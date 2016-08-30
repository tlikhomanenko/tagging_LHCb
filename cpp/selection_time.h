//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Aug 22 16:28:20 2016 by ROOT version 5.34/25
// from TTree DecayTree/DecayTree
// found on file: ../datasets/data/root/WG/DTT_2012_Reco14Strip21_Down_DIMUON.root
//////////////////////////////////////////////////////////

#ifndef selection_time_h
#define selection_time_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.
   const Int_t kMaxB_ENDVERTEX_COV = 1;
   const Int_t kMaxB_OWNPV_COV = 1;
   const Int_t kMaxB_TOPPV_COV = 1;
   const Int_t kMaxJ_psi_1S_ENDVERTEX_COV = 1;
   const Int_t kMaxJ_psi_1S_OWNPV_COV = 1;
   const Int_t kMaxJ_psi_1S_TOPPV_COV = 1;
   const Int_t kMaxJ_psi_1S_ORIVX_COV = 1;
   const Int_t kMaxmuplus_OWNPV_COV = 1;
   const Int_t kMaxmuplus_TOPPV_COV = 1;
   const Int_t kMaxmuplus_ORIVX_COV = 1;
   const Int_t kMaxmuminus_OWNPV_COV = 1;
   const Int_t kMaxmuminus_TOPPV_COV = 1;
   const Int_t kMaxmuminus_ORIVX_COV = 1;
   const Int_t kMaxKst_892_0_ENDVERTEX_COV = 1;
   const Int_t kMaxKst_892_0_OWNPV_COV = 1;
   const Int_t kMaxKst_892_0_TOPPV_COV = 1;
   const Int_t kMaxKst_892_0_ORIVX_COV = 1;
   const Int_t kMaxKplus_OWNPV_COV = 1;
   const Int_t kMaxKplus_TOPPV_COV = 1;
   const Int_t kMaxKplus_ORIVX_COV = 1;
   const Int_t kMaxpiminus_OWNPV_COV = 1;
   const Int_t kMaxpiminus_TOPPV_COV = 1;
   const Int_t kMaxpiminus_ORIVX_COV = 1;

class selection_time {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   Double_t        B_LOKI_ENERGY;
   Double_t        B_LOKI_ETA;
   Double_t        B_LOKI_PHI;
   Double_t        B_MINIP;
   Double_t        B_MINIPCHI2;
   Double_t        B_MINIPNEXTBEST;
   Double_t        B_MINIPCHI2NEXTBEST;
   Int_t           nPV;
   Float_t         B_AllIP[100];   //[nPV]
   Float_t         B_AllIPchi2[100];   //[nPV]
   Float_t         B_AllDIRA[100];   //[nPV]
   Double_t        B_ENDVERTEX_X;
   Double_t        B_ENDVERTEX_Y;
   Double_t        B_ENDVERTEX_Z;
   Double_t        B_ENDVERTEX_XERR;
   Double_t        B_ENDVERTEX_YERR;
   Double_t        B_ENDVERTEX_ZERR;
   Double_t        B_ENDVERTEX_CHI2;
   Int_t           B_ENDVERTEX_NDOF;
   Float_t         B_ENDVERTEX_COV_[3][3];
   Double_t        B_OWNPV_X;
   Double_t        B_OWNPV_Y;
   Double_t        B_OWNPV_Z;
   Double_t        B_OWNPV_XERR;
   Double_t        B_OWNPV_YERR;
   Double_t        B_OWNPV_ZERR;
   Double_t        B_OWNPV_CHI2;
   Int_t           B_OWNPV_NDOF;
   Float_t         B_OWNPV_COV_[3][3];
   Double_t        B_IP_OWNPV;
   Double_t        B_IPCHI2_OWNPV;
   Double_t        B_FD_OWNPV;
   Double_t        B_FDCHI2_OWNPV;
   Double_t        B_DIRA_OWNPV;
   Double_t        B_TOPPV_X;
   Double_t        B_TOPPV_Y;
   Double_t        B_TOPPV_Z;
   Double_t        B_TOPPV_XERR;
   Double_t        B_TOPPV_YERR;
   Double_t        B_TOPPV_ZERR;
   Double_t        B_TOPPV_CHI2;
   Int_t           B_TOPPV_NDOF;
   Float_t         B_TOPPV_COV_[3][3];
   Double_t        B_IP_TOPPV;
   Double_t        B_IPCHI2_TOPPV;
   Double_t        B_FD_TOPPV;
   Double_t        B_FDCHI2_TOPPV;
   Double_t        B_DIRA_TOPPV;
   Double_t        B_P;
   Double_t        B_PT;
   Double_t        B_PE;
   Double_t        B_PX;
   Double_t        B_PY;
   Double_t        B_PZ;
   Double_t        B_MM;
   Double_t        B_MMERR;
   Double_t        B_M;
   Int_t           B_ID;
   Double_t        B_TAU;
   Double_t        B_TAUERR;
   Double_t        B_TAUCHI2;
   Int_t           B_TAGDECISION;
   Double_t        B_TAGOMEGA;
   Int_t           B_TAGDECISION_OS;
   Double_t        B_TAGOMEGA_OS;
   Int_t           B_TAGGER;
   Short_t         B_OS_Muon_DEC;
   Float_t         B_OS_Muon_PROB;
   Int_t           B_OS_Muon_PARTICLES_NUM;
   Float_t         B_OS_Muon_PARTICLES_ID[20];   //[B_OS_Muon_PARTICLES_NUM]
   Float_t         B_OS_Muon_PARTICLES_P[20];   //[B_OS_Muon_PARTICLES_NUM]
   Float_t         B_OS_Muon_PARTICLES_PX[20];   //[B_OS_Muon_PARTICLES_NUM]
   Float_t         B_OS_Muon_PARTICLES_PY[20];   //[B_OS_Muon_PARTICLES_NUM]
   Float_t         B_OS_Muon_PARTICLES_PZ[20];   //[B_OS_Muon_PARTICLES_NUM]
   Float_t         B_OS_Muon_PARTICLES_PT[20];   //[B_OS_Muon_PARTICLES_NUM]
   Float_t         B_OS_Muon_PARTICLES_THETA[20];   //[B_OS_Muon_PARTICLES_NUM]
   Float_t         B_OS_Muon_PARTICLES_PHI[20];   //[B_OS_Muon_PARTICLES_NUM]
   Float_t         B_OS_Muon_PARTICLES_PIDe[20];   //[B_OS_Muon_PARTICLES_NUM]
   Float_t         B_OS_Muon_PARTICLES_PIDmu[20];   //[B_OS_Muon_PARTICLES_NUM]
   Float_t         B_OS_Muon_PARTICLES_PIDk[20];   //[B_OS_Muon_PARTICLES_NUM]
   Float_t         B_OS_Muon_PARTICLES_PIDp[20];   //[B_OS_Muon_PARTICLES_NUM]
   Float_t         B_OS_Muon_PARTICLES_IP_OWNPV[20];   //[B_OS_Muon_PARTICLES_NUM]
   Float_t         B_OS_Muon_PARTICLES_IPCHI2_OWNPV[20];   //[B_OS_Muon_PARTICLES_NUM]
   Float_t         B_OS_Muon_PARTICLES_IP_BVertex[20];   //[B_OS_Muon_PARTICLES_NUM]
   Float_t         B_OS_Muon_PARTICLES_IPCHI2_BVertex[20];   //[B_OS_Muon_PARTICLES_NUM]
   Float_t         B_OS_Muon_PARTICLES_CHI2_BpVertex[20];   //[B_OS_Muon_PARTICLES_NUM]
   Short_t         B_OS_Electron_DEC;
   Float_t         B_OS_Electron_PROB;
   Int_t           B_OS_Electron_PARTICLES_NUM;
   Float_t         B_OS_Electron_PARTICLES_ID[20];   //[B_OS_Electron_PARTICLES_NUM]
   Float_t         B_OS_Electron_PARTICLES_P[20];   //[B_OS_Electron_PARTICLES_NUM]
   Float_t         B_OS_Electron_PARTICLES_PX[20];   //[B_OS_Electron_PARTICLES_NUM]
   Float_t         B_OS_Electron_PARTICLES_PY[20];   //[B_OS_Electron_PARTICLES_NUM]
   Float_t         B_OS_Electron_PARTICLES_PZ[20];   //[B_OS_Electron_PARTICLES_NUM]
   Float_t         B_OS_Electron_PARTICLES_PT[20];   //[B_OS_Electron_PARTICLES_NUM]
   Float_t         B_OS_Electron_PARTICLES_THETA[20];   //[B_OS_Electron_PARTICLES_NUM]
   Float_t         B_OS_Electron_PARTICLES_PHI[20];   //[B_OS_Electron_PARTICLES_NUM]
   Float_t         B_OS_Electron_PARTICLES_PIDe[20];   //[B_OS_Electron_PARTICLES_NUM]
   Float_t         B_OS_Electron_PARTICLES_PIDmu[20];   //[B_OS_Electron_PARTICLES_NUM]
   Float_t         B_OS_Electron_PARTICLES_PIDk[20];   //[B_OS_Electron_PARTICLES_NUM]
   Float_t         B_OS_Electron_PARTICLES_PIDp[20];   //[B_OS_Electron_PARTICLES_NUM]
   Float_t         B_OS_Electron_PARTICLES_IP_OWNPV[20];   //[B_OS_Electron_PARTICLES_NUM]
   Float_t         B_OS_Electron_PARTICLES_IPCHI2_OWNPV[20];   //[B_OS_Electron_PARTICLES_NUM]
   Float_t         B_OS_Electron_PARTICLES_IP_BVertex[20];   //[B_OS_Electron_PARTICLES_NUM]
   Float_t         B_OS_Electron_PARTICLES_IPCHI2_BVertex[20];   //[B_OS_Electron_PARTICLES_NUM]
   Float_t         B_OS_Electron_PARTICLES_CHI2_BpVertex[20];   //[B_OS_Electron_PARTICLES_NUM]
   Short_t         B_OS_Kaon_DEC;
   Float_t         B_OS_Kaon_PROB;
   Int_t           B_OS_Kaon_PARTICLES_NUM;
   Float_t         B_OS_Kaon_PARTICLES_ID[20];   //[B_OS_Kaon_PARTICLES_NUM]
   Float_t         B_OS_Kaon_PARTICLES_P[20];   //[B_OS_Kaon_PARTICLES_NUM]
   Float_t         B_OS_Kaon_PARTICLES_PX[20];   //[B_OS_Kaon_PARTICLES_NUM]
   Float_t         B_OS_Kaon_PARTICLES_PY[20];   //[B_OS_Kaon_PARTICLES_NUM]
   Float_t         B_OS_Kaon_PARTICLES_PZ[20];   //[B_OS_Kaon_PARTICLES_NUM]
   Float_t         B_OS_Kaon_PARTICLES_PT[20];   //[B_OS_Kaon_PARTICLES_NUM]
   Float_t         B_OS_Kaon_PARTICLES_THETA[20];   //[B_OS_Kaon_PARTICLES_NUM]
   Float_t         B_OS_Kaon_PARTICLES_PHI[20];   //[B_OS_Kaon_PARTICLES_NUM]
   Float_t         B_OS_Kaon_PARTICLES_PIDe[20];   //[B_OS_Kaon_PARTICLES_NUM]
   Float_t         B_OS_Kaon_PARTICLES_PIDmu[20];   //[B_OS_Kaon_PARTICLES_NUM]
   Float_t         B_OS_Kaon_PARTICLES_PIDk[20];   //[B_OS_Kaon_PARTICLES_NUM]
   Float_t         B_OS_Kaon_PARTICLES_PIDp[20];   //[B_OS_Kaon_PARTICLES_NUM]
   Float_t         B_OS_Kaon_PARTICLES_IP_OWNPV[20];   //[B_OS_Kaon_PARTICLES_NUM]
   Float_t         B_OS_Kaon_PARTICLES_IPCHI2_OWNPV[20];   //[B_OS_Kaon_PARTICLES_NUM]
   Float_t         B_OS_Kaon_PARTICLES_IP_BVertex[20];   //[B_OS_Kaon_PARTICLES_NUM]
   Float_t         B_OS_Kaon_PARTICLES_IPCHI2_BVertex[20];   //[B_OS_Kaon_PARTICLES_NUM]
   Float_t         B_OS_Kaon_PARTICLES_CHI2_BpVertex[20];   //[B_OS_Kaon_PARTICLES_NUM]
   Short_t         B_SS_Kaon_DEC;
   Float_t         B_SS_Kaon_PROB;
   Int_t           B_SS_Kaon_PARTICLES_NUM;
   Float_t         B_SS_Kaon_PARTICLES_ID[20];   //[B_SS_Kaon_PARTICLES_NUM]
   Float_t         B_SS_Kaon_PARTICLES_P[20];   //[B_SS_Kaon_PARTICLES_NUM]
   Float_t         B_SS_Kaon_PARTICLES_PX[20];   //[B_SS_Kaon_PARTICLES_NUM]
   Float_t         B_SS_Kaon_PARTICLES_PY[20];   //[B_SS_Kaon_PARTICLES_NUM]
   Float_t         B_SS_Kaon_PARTICLES_PZ[20];   //[B_SS_Kaon_PARTICLES_NUM]
   Float_t         B_SS_Kaon_PARTICLES_PT[20];   //[B_SS_Kaon_PARTICLES_NUM]
   Float_t         B_SS_Kaon_PARTICLES_THETA[20];   //[B_SS_Kaon_PARTICLES_NUM]
   Float_t         B_SS_Kaon_PARTICLES_PHI[20];   //[B_SS_Kaon_PARTICLES_NUM]
   Float_t         B_SS_Kaon_PARTICLES_PIDe[20];   //[B_SS_Kaon_PARTICLES_NUM]
   Float_t         B_SS_Kaon_PARTICLES_PIDmu[20];   //[B_SS_Kaon_PARTICLES_NUM]
   Float_t         B_SS_Kaon_PARTICLES_PIDk[20];   //[B_SS_Kaon_PARTICLES_NUM]
   Float_t         B_SS_Kaon_PARTICLES_PIDp[20];   //[B_SS_Kaon_PARTICLES_NUM]
   Float_t         B_SS_Kaon_PARTICLES_IP_OWNPV[20];   //[B_SS_Kaon_PARTICLES_NUM]
   Float_t         B_SS_Kaon_PARTICLES_IPCHI2_OWNPV[20];   //[B_SS_Kaon_PARTICLES_NUM]
   Float_t         B_SS_Kaon_PARTICLES_IP_BVertex[20];   //[B_SS_Kaon_PARTICLES_NUM]
   Float_t         B_SS_Kaon_PARTICLES_IPCHI2_BVertex[20];   //[B_SS_Kaon_PARTICLES_NUM]
   Float_t         B_SS_Kaon_PARTICLES_CHI2_BpVertex[20];   //[B_SS_Kaon_PARTICLES_NUM]
   Short_t         B_SS_Pion_DEC;
   Float_t         B_SS_Pion_PROB;
   Int_t           B_SS_Pion_PARTICLES_NUM;
   Float_t         B_SS_Pion_PARTICLES_ID[20];   //[B_SS_Pion_PARTICLES_NUM]
   Float_t         B_SS_Pion_PARTICLES_P[20];   //[B_SS_Pion_PARTICLES_NUM]
   Float_t         B_SS_Pion_PARTICLES_PX[20];   //[B_SS_Pion_PARTICLES_NUM]
   Float_t         B_SS_Pion_PARTICLES_PY[20];   //[B_SS_Pion_PARTICLES_NUM]
   Float_t         B_SS_Pion_PARTICLES_PZ[20];   //[B_SS_Pion_PARTICLES_NUM]
   Float_t         B_SS_Pion_PARTICLES_PT[20];   //[B_SS_Pion_PARTICLES_NUM]
   Float_t         B_SS_Pion_PARTICLES_THETA[20];   //[B_SS_Pion_PARTICLES_NUM]
   Float_t         B_SS_Pion_PARTICLES_PHI[20];   //[B_SS_Pion_PARTICLES_NUM]
   Float_t         B_SS_Pion_PARTICLES_PIDe[20];   //[B_SS_Pion_PARTICLES_NUM]
   Float_t         B_SS_Pion_PARTICLES_PIDmu[20];   //[B_SS_Pion_PARTICLES_NUM]
   Float_t         B_SS_Pion_PARTICLES_PIDk[20];   //[B_SS_Pion_PARTICLES_NUM]
   Float_t         B_SS_Pion_PARTICLES_PIDp[20];   //[B_SS_Pion_PARTICLES_NUM]
   Float_t         B_SS_Pion_PARTICLES_IP_OWNPV[20];   //[B_SS_Pion_PARTICLES_NUM]
   Float_t         B_SS_Pion_PARTICLES_IPCHI2_OWNPV[20];   //[B_SS_Pion_PARTICLES_NUM]
   Float_t         B_SS_Pion_PARTICLES_IP_BVertex[20];   //[B_SS_Pion_PARTICLES_NUM]
   Float_t         B_SS_Pion_PARTICLES_IPCHI2_BVertex[20];   //[B_SS_Pion_PARTICLES_NUM]
   Float_t         B_SS_Pion_PARTICLES_CHI2_BpVertex[20];   //[B_SS_Pion_PARTICLES_NUM]
   Short_t         B_SS_PionBDT_DEC;
   Float_t         B_SS_PionBDT_PROB;
   Int_t           B_SS_PionBDT_PARTICLES_NUM;
   Float_t         B_SS_PionBDT_PARTICLES_ID[20];   //[B_SS_PionBDT_PARTICLES_NUM]
   Float_t         B_SS_PionBDT_PARTICLES_P[20];   //[B_SS_PionBDT_PARTICLES_NUM]
   Float_t         B_SS_PionBDT_PARTICLES_PX[20];   //[B_SS_PionBDT_PARTICLES_NUM]
   Float_t         B_SS_PionBDT_PARTICLES_PY[20];   //[B_SS_PionBDT_PARTICLES_NUM]
   Float_t         B_SS_PionBDT_PARTICLES_PZ[20];   //[B_SS_PionBDT_PARTICLES_NUM]
   Float_t         B_SS_PionBDT_PARTICLES_PT[20];   //[B_SS_PionBDT_PARTICLES_NUM]
   Float_t         B_SS_PionBDT_PARTICLES_THETA[20];   //[B_SS_PionBDT_PARTICLES_NUM]
   Float_t         B_SS_PionBDT_PARTICLES_PHI[20];   //[B_SS_PionBDT_PARTICLES_NUM]
   Float_t         B_SS_PionBDT_PARTICLES_PIDe[20];   //[B_SS_PionBDT_PARTICLES_NUM]
   Float_t         B_SS_PionBDT_PARTICLES_PIDmu[20];   //[B_SS_PionBDT_PARTICLES_NUM]
   Float_t         B_SS_PionBDT_PARTICLES_PIDk[20];   //[B_SS_PionBDT_PARTICLES_NUM]
   Float_t         B_SS_PionBDT_PARTICLES_PIDp[20];   //[B_SS_PionBDT_PARTICLES_NUM]
   Float_t         B_SS_PionBDT_PARTICLES_IP_OWNPV[20];   //[B_SS_PionBDT_PARTICLES_NUM]
   Float_t         B_SS_PionBDT_PARTICLES_IPCHI2_OWNPV[20];   //[B_SS_PionBDT_PARTICLES_NUM]
   Float_t         B_SS_PionBDT_PARTICLES_IP_BVertex[20];   //[B_SS_PionBDT_PARTICLES_NUM]
   Float_t         B_SS_PionBDT_PARTICLES_IPCHI2_BVertex[20];   //[B_SS_PionBDT_PARTICLES_NUM]
   Float_t         B_SS_PionBDT_PARTICLES_CHI2_BpVertex[20];   //[B_SS_PionBDT_PARTICLES_NUM]
   Short_t         B_VtxCharge_DEC;
   Float_t         B_VtxCharge_PROB;
   Int_t           B_VtxCharge_PARTICLES_NUM;
   Float_t         B_VtxCharge_PARTICLES_ID[20];   //[B_VtxCharge_PARTICLES_NUM]
   Float_t         B_VtxCharge_PARTICLES_P[20];   //[B_VtxCharge_PARTICLES_NUM]
   Float_t         B_VtxCharge_PARTICLES_PX[20];   //[B_VtxCharge_PARTICLES_NUM]
   Float_t         B_VtxCharge_PARTICLES_PY[20];   //[B_VtxCharge_PARTICLES_NUM]
   Float_t         B_VtxCharge_PARTICLES_PZ[20];   //[B_VtxCharge_PARTICLES_NUM]
   Float_t         B_VtxCharge_PARTICLES_PT[20];   //[B_VtxCharge_PARTICLES_NUM]
   Float_t         B_VtxCharge_PARTICLES_THETA[20];   //[B_VtxCharge_PARTICLES_NUM]
   Float_t         B_VtxCharge_PARTICLES_PHI[20];   //[B_VtxCharge_PARTICLES_NUM]
   Float_t         B_VtxCharge_PARTICLES_PIDe[20];   //[B_VtxCharge_PARTICLES_NUM]
   Float_t         B_VtxCharge_PARTICLES_PIDmu[20];   //[B_VtxCharge_PARTICLES_NUM]
   Float_t         B_VtxCharge_PARTICLES_PIDk[20];   //[B_VtxCharge_PARTICLES_NUM]
   Float_t         B_VtxCharge_PARTICLES_PIDp[20];   //[B_VtxCharge_PARTICLES_NUM]
   Float_t         B_VtxCharge_PARTICLES_IP_OWNPV[20];   //[B_VtxCharge_PARTICLES_NUM]
   Float_t         B_VtxCharge_PARTICLES_IPCHI2_OWNPV[20];   //[B_VtxCharge_PARTICLES_NUM]
   Float_t         B_VtxCharge_PARTICLES_IP_BVertex[20];   //[B_VtxCharge_PARTICLES_NUM]
   Float_t         B_VtxCharge_PARTICLES_IPCHI2_BVertex[20];   //[B_VtxCharge_PARTICLES_NUM]
   Float_t         B_VtxCharge_PARTICLES_CHI2_BpVertex[20];   //[B_VtxCharge_PARTICLES_NUM]
   Short_t         B_OS_nnetKaon_DEC;
   Float_t         B_OS_nnetKaon_PROB;
   Int_t           B_OS_nnetKaon_PARTICLES_NUM;
   Float_t         B_OS_nnetKaon_PARTICLES_ID[20];   //[B_OS_nnetKaon_PARTICLES_NUM]
   Float_t         B_OS_nnetKaon_PARTICLES_P[20];   //[B_OS_nnetKaon_PARTICLES_NUM]
   Float_t         B_OS_nnetKaon_PARTICLES_PX[20];   //[B_OS_nnetKaon_PARTICLES_NUM]
   Float_t         B_OS_nnetKaon_PARTICLES_PY[20];   //[B_OS_nnetKaon_PARTICLES_NUM]
   Float_t         B_OS_nnetKaon_PARTICLES_PZ[20];   //[B_OS_nnetKaon_PARTICLES_NUM]
   Float_t         B_OS_nnetKaon_PARTICLES_PT[20];   //[B_OS_nnetKaon_PARTICLES_NUM]
   Float_t         B_OS_nnetKaon_PARTICLES_THETA[20];   //[B_OS_nnetKaon_PARTICLES_NUM]
   Float_t         B_OS_nnetKaon_PARTICLES_PHI[20];   //[B_OS_nnetKaon_PARTICLES_NUM]
   Float_t         B_OS_nnetKaon_PARTICLES_PIDe[20];   //[B_OS_nnetKaon_PARTICLES_NUM]
   Float_t         B_OS_nnetKaon_PARTICLES_PIDmu[20];   //[B_OS_nnetKaon_PARTICLES_NUM]
   Float_t         B_OS_nnetKaon_PARTICLES_PIDk[20];   //[B_OS_nnetKaon_PARTICLES_NUM]
   Float_t         B_OS_nnetKaon_PARTICLES_PIDp[20];   //[B_OS_nnetKaon_PARTICLES_NUM]
   Float_t         B_OS_nnetKaon_PARTICLES_IP_OWNPV[20];   //[B_OS_nnetKaon_PARTICLES_NUM]
   Float_t         B_OS_nnetKaon_PARTICLES_IPCHI2_OWNPV[20];   //[B_OS_nnetKaon_PARTICLES_NUM]
   Float_t         B_OS_nnetKaon_PARTICLES_IP_BVertex[20];   //[B_OS_nnetKaon_PARTICLES_NUM]
   Float_t         B_OS_nnetKaon_PARTICLES_IPCHI2_BVertex[20];   //[B_OS_nnetKaon_PARTICLES_NUM]
   Float_t         B_OS_nnetKaon_PARTICLES_CHI2_BpVertex[20];   //[B_OS_nnetKaon_PARTICLES_NUM]
   Short_t         B_SS_nnetKaon_DEC;
   Float_t         B_SS_nnetKaon_PROB;
   Int_t           B_SS_nnetKaon_PARTICLES_NUM;
   Float_t         B_SS_nnetKaon_PARTICLES_ID[20];   //[B_SS_nnetKaon_PARTICLES_NUM]
   Float_t         B_SS_nnetKaon_PARTICLES_P[20];   //[B_SS_nnetKaon_PARTICLES_NUM]
   Float_t         B_SS_nnetKaon_PARTICLES_PX[20];   //[B_SS_nnetKaon_PARTICLES_NUM]
   Float_t         B_SS_nnetKaon_PARTICLES_PY[20];   //[B_SS_nnetKaon_PARTICLES_NUM]
   Float_t         B_SS_nnetKaon_PARTICLES_PZ[20];   //[B_SS_nnetKaon_PARTICLES_NUM]
   Float_t         B_SS_nnetKaon_PARTICLES_PT[20];   //[B_SS_nnetKaon_PARTICLES_NUM]
   Float_t         B_SS_nnetKaon_PARTICLES_THETA[20];   //[B_SS_nnetKaon_PARTICLES_NUM]
   Float_t         B_SS_nnetKaon_PARTICLES_PHI[20];   //[B_SS_nnetKaon_PARTICLES_NUM]
   Float_t         B_SS_nnetKaon_PARTICLES_PIDe[20];   //[B_SS_nnetKaon_PARTICLES_NUM]
   Float_t         B_SS_nnetKaon_PARTICLES_PIDmu[20];   //[B_SS_nnetKaon_PARTICLES_NUM]
   Float_t         B_SS_nnetKaon_PARTICLES_PIDk[20];   //[B_SS_nnetKaon_PARTICLES_NUM]
   Float_t         B_SS_nnetKaon_PARTICLES_PIDp[20];   //[B_SS_nnetKaon_PARTICLES_NUM]
   Float_t         B_SS_nnetKaon_PARTICLES_IP_OWNPV[20];   //[B_SS_nnetKaon_PARTICLES_NUM]
   Float_t         B_SS_nnetKaon_PARTICLES_IPCHI2_OWNPV[20];   //[B_SS_nnetKaon_PARTICLES_NUM]
   Float_t         B_SS_nnetKaon_PARTICLES_IP_BVertex[20];   //[B_SS_nnetKaon_PARTICLES_NUM]
   Float_t         B_SS_nnetKaon_PARTICLES_IPCHI2_BVertex[20];   //[B_SS_nnetKaon_PARTICLES_NUM]
   Float_t         B_SS_nnetKaon_PARTICLES_CHI2_BpVertex[20];   //[B_SS_nnetKaon_PARTICLES_NUM]
   Short_t         B_SS_Proton_DEC;
   Float_t         B_SS_Proton_PROB;
   Int_t           B_SS_Proton_PARTICLES_NUM;
   Float_t         B_SS_Proton_PARTICLES_ID[20];   //[B_SS_Proton_PARTICLES_NUM]
   Float_t         B_SS_Proton_PARTICLES_P[20];   //[B_SS_Proton_PARTICLES_NUM]
   Float_t         B_SS_Proton_PARTICLES_PX[20];   //[B_SS_Proton_PARTICLES_NUM]
   Float_t         B_SS_Proton_PARTICLES_PY[20];   //[B_SS_Proton_PARTICLES_NUM]
   Float_t         B_SS_Proton_PARTICLES_PZ[20];   //[B_SS_Proton_PARTICLES_NUM]
   Float_t         B_SS_Proton_PARTICLES_PT[20];   //[B_SS_Proton_PARTICLES_NUM]
   Float_t         B_SS_Proton_PARTICLES_THETA[20];   //[B_SS_Proton_PARTICLES_NUM]
   Float_t         B_SS_Proton_PARTICLES_PHI[20];   //[B_SS_Proton_PARTICLES_NUM]
   Float_t         B_SS_Proton_PARTICLES_PIDe[20];   //[B_SS_Proton_PARTICLES_NUM]
   Float_t         B_SS_Proton_PARTICLES_PIDmu[20];   //[B_SS_Proton_PARTICLES_NUM]
   Float_t         B_SS_Proton_PARTICLES_PIDk[20];   //[B_SS_Proton_PARTICLES_NUM]
   Float_t         B_SS_Proton_PARTICLES_PIDp[20];   //[B_SS_Proton_PARTICLES_NUM]
   Float_t         B_SS_Proton_PARTICLES_IP_OWNPV[20];   //[B_SS_Proton_PARTICLES_NUM]
   Float_t         B_SS_Proton_PARTICLES_IPCHI2_OWNPV[20];   //[B_SS_Proton_PARTICLES_NUM]
   Float_t         B_SS_Proton_PARTICLES_IP_BVertex[20];   //[B_SS_Proton_PARTICLES_NUM]
   Float_t         B_SS_Proton_PARTICLES_IPCHI2_BVertex[20];   //[B_SS_Proton_PARTICLES_NUM]
   Float_t         B_SS_Proton_PARTICLES_CHI2_BpVertex[20];   //[B_SS_Proton_PARTICLES_NUM]
   Short_t         B_OS_Charm_DEC;
   Float_t         B_OS_Charm_PROB;
   Int_t           B_OS_Charm_PARTICLES_NUM;
   Float_t         B_OS_Charm_PARTICLES_ID[20];   //[B_OS_Charm_PARTICLES_NUM]
   Float_t         B_OS_Charm_PARTICLES_P[20];   //[B_OS_Charm_PARTICLES_NUM]
   Float_t         B_OS_Charm_PARTICLES_PX[20];   //[B_OS_Charm_PARTICLES_NUM]
   Float_t         B_OS_Charm_PARTICLES_PY[20];   //[B_OS_Charm_PARTICLES_NUM]
   Float_t         B_OS_Charm_PARTICLES_PZ[20];   //[B_OS_Charm_PARTICLES_NUM]
   Float_t         B_OS_Charm_PARTICLES_PT[20];   //[B_OS_Charm_PARTICLES_NUM]
   Float_t         B_OS_Charm_PARTICLES_THETA[20];   //[B_OS_Charm_PARTICLES_NUM]
   Float_t         B_OS_Charm_PARTICLES_PHI[20];   //[B_OS_Charm_PARTICLES_NUM]
   Float_t         B_OS_Charm_PARTICLES_PIDe[20];   //[B_OS_Charm_PARTICLES_NUM]
   Float_t         B_OS_Charm_PARTICLES_PIDmu[20];   //[B_OS_Charm_PARTICLES_NUM]
   Float_t         B_OS_Charm_PARTICLES_PIDk[20];   //[B_OS_Charm_PARTICLES_NUM]
   Float_t         B_OS_Charm_PARTICLES_PIDp[20];   //[B_OS_Charm_PARTICLES_NUM]
   Float_t         B_OS_Charm_PARTICLES_IP_OWNPV[20];   //[B_OS_Charm_PARTICLES_NUM]
   Float_t         B_OS_Charm_PARTICLES_IPCHI2_OWNPV[20];   //[B_OS_Charm_PARTICLES_NUM]
   Float_t         B_OS_Charm_PARTICLES_IP_BVertex[20];   //[B_OS_Charm_PARTICLES_NUM]
   Float_t         B_OS_Charm_PARTICLES_IPCHI2_BVertex[20];   //[B_OS_Charm_PARTICLES_NUM]
   Float_t         B_OS_Charm_PARTICLES_CHI2_BpVertex[20];   //[B_OS_Charm_PARTICLES_NUM]
   Double_t        B_X;
   Double_t        B_Y;
   Double_t        B_LOKI_DIRA;
   Double_t        B_LOKI_DOCA_1_2;
   Double_t        B_LOKI_DTF_CHI2NDOF;
   Double_t        B_LOKI_DTF_CTAU;
   Double_t        B_LOKI_DTF_CTAUERR;
   Double_t        B_LOKI_DTF_CTAUERR_D1;
   Double_t        B_LOKI_DTF_CTAUERR_D2;
   Double_t        B_LOKI_DTF_CTAUERR_NOPV;
   Double_t        B_LOKI_DTF_CTAUS;
   Double_t        B_LOKI_DTF_CTAU_D1;
   Double_t        B_LOKI_DTF_CTAU_D2;
   Double_t        B_LOKI_DTF_CTAU_NOPV;
   Double_t        B_LOKI_DTF_VCHI2NDOF;
   Double_t        B_LOKI_FDCHI2;
   Double_t        B_LOKI_FDS;
   Double_t        B_LOKI_MASSERR_JpsiConstr;
   Double_t        B_LOKI_MASS_JpsiConstr;
   Double_t        B_LOKI_MASS_JpsiConstr_NoPVConstr;
   Int_t           B_FitDaughtersConst_nPV;
   Float_t         B_FitDaughtersConst_J_psi_1S_M[100];   //[B_FitDaughtersConst_nPV]
   Float_t         B_FitDaughtersConst_J_psi_1S_MERR[100];   //[B_FitDaughtersConst_nPV]
   Float_t         B_FitDaughtersConst_J_psi_1S_P[100];   //[B_FitDaughtersConst_nPV]
   Float_t         B_FitDaughtersConst_J_psi_1S_PERR[100];   //[B_FitDaughtersConst_nPV]
   Float_t         B_FitDaughtersConst_J_psi_1S_ctau[100];   //[B_FitDaughtersConst_nPV]
   Float_t         B_FitDaughtersConst_J_psi_1S_ctauErr[100];   //[B_FitDaughtersConst_nPV]
   Float_t         B_FitDaughtersConst_J_psi_1S_decayLength[100];   //[B_FitDaughtersConst_nPV]
   Float_t         B_FitDaughtersConst_J_psi_1S_decayLengthErr[100];   //[B_FitDaughtersConst_nPV]
   Float_t         B_FitDaughtersConst_J_psi_1S_muminus_0_ID[100];   //[B_FitDaughtersConst_nPV]
   Float_t         B_FitDaughtersConst_J_psi_1S_muminus_0_PE[100];   //[B_FitDaughtersConst_nPV]
   Float_t         B_FitDaughtersConst_J_psi_1S_muminus_0_PX[100];   //[B_FitDaughtersConst_nPV]
   Float_t         B_FitDaughtersConst_J_psi_1S_muminus_0_PY[100];   //[B_FitDaughtersConst_nPV]
   Float_t         B_FitDaughtersConst_J_psi_1S_muminus_0_PZ[100];   //[B_FitDaughtersConst_nPV]
   Float_t         B_FitDaughtersConst_J_psi_1S_muminus_ID[100];   //[B_FitDaughtersConst_nPV]
   Float_t         B_FitDaughtersConst_J_psi_1S_muminus_PE[100];   //[B_FitDaughtersConst_nPV]
   Float_t         B_FitDaughtersConst_J_psi_1S_muminus_PX[100];   //[B_FitDaughtersConst_nPV]
   Float_t         B_FitDaughtersConst_J_psi_1S_muminus_PY[100];   //[B_FitDaughtersConst_nPV]
   Float_t         B_FitDaughtersConst_J_psi_1S_muminus_PZ[100];   //[B_FitDaughtersConst_nPV]
   Float_t         B_FitDaughtersConst_Kst_892_0_Kplus_ID[100];   //[B_FitDaughtersConst_nPV]
   Float_t         B_FitDaughtersConst_Kst_892_0_Kplus_PE[100];   //[B_FitDaughtersConst_nPV]
   Float_t         B_FitDaughtersConst_Kst_892_0_Kplus_PX[100];   //[B_FitDaughtersConst_nPV]
   Float_t         B_FitDaughtersConst_Kst_892_0_Kplus_PY[100];   //[B_FitDaughtersConst_nPV]
   Float_t         B_FitDaughtersConst_Kst_892_0_Kplus_PZ[100];   //[B_FitDaughtersConst_nPV]
   Float_t         B_FitDaughtersConst_Kst_892_0_M[100];   //[B_FitDaughtersConst_nPV]
   Float_t         B_FitDaughtersConst_Kst_892_0_MERR[100];   //[B_FitDaughtersConst_nPV]
   Float_t         B_FitDaughtersConst_Kst_892_0_P[100];   //[B_FitDaughtersConst_nPV]
   Float_t         B_FitDaughtersConst_Kst_892_0_PERR[100];   //[B_FitDaughtersConst_nPV]
   Float_t         B_FitDaughtersConst_Kst_892_0_ctau[100];   //[B_FitDaughtersConst_nPV]
   Float_t         B_FitDaughtersConst_Kst_892_0_ctauErr[100];   //[B_FitDaughtersConst_nPV]
   Float_t         B_FitDaughtersConst_Kst_892_0_decayLength[100];   //[B_FitDaughtersConst_nPV]
   Float_t         B_FitDaughtersConst_Kst_892_0_decayLengthErr[100];   //[B_FitDaughtersConst_nPV]
   Float_t         B_FitDaughtersConst_Kst_892_0_piplus_ID[100];   //[B_FitDaughtersConst_nPV]
   Float_t         B_FitDaughtersConst_Kst_892_0_piplus_PE[100];   //[B_FitDaughtersConst_nPV]
   Float_t         B_FitDaughtersConst_Kst_892_0_piplus_PX[100];   //[B_FitDaughtersConst_nPV]
   Float_t         B_FitDaughtersConst_Kst_892_0_piplus_PY[100];   //[B_FitDaughtersConst_nPV]
   Float_t         B_FitDaughtersConst_Kst_892_0_piplus_PZ[100];   //[B_FitDaughtersConst_nPV]
   Float_t         B_FitDaughtersConst_M[100];   //[B_FitDaughtersConst_nPV]
   Float_t         B_FitDaughtersConst_MERR[100];   //[B_FitDaughtersConst_nPV]
   Float_t         B_FitDaughtersConst_P[100];   //[B_FitDaughtersConst_nPV]
   Float_t         B_FitDaughtersConst_PERR[100];   //[B_FitDaughtersConst_nPV]
   Float_t         B_FitDaughtersConst_chi2[100];   //[B_FitDaughtersConst_nPV]
   Float_t         B_FitDaughtersConst_nDOF[100];   //[B_FitDaughtersConst_nPV]
   Float_t         B_FitDaughtersConst_nIter[100];   //[B_FitDaughtersConst_nPV]
   Float_t         B_FitDaughtersConst_status[100];   //[B_FitDaughtersConst_nPV]
   Int_t           B_FitDaughtersPVConst_nPV;
   Float_t         B_FitDaughtersPVConst_J_psi_1S_M[100];   //[B_FitDaughtersPVConst_nPV]
   Float_t         B_FitDaughtersPVConst_J_psi_1S_MERR[100];   //[B_FitDaughtersPVConst_nPV]
   Float_t         B_FitDaughtersPVConst_J_psi_1S_P[100];   //[B_FitDaughtersPVConst_nPV]
   Float_t         B_FitDaughtersPVConst_J_psi_1S_PERR[100];   //[B_FitDaughtersPVConst_nPV]
   Float_t         B_FitDaughtersPVConst_J_psi_1S_ctau[100];   //[B_FitDaughtersPVConst_nPV]
   Float_t         B_FitDaughtersPVConst_J_psi_1S_ctauErr[100];   //[B_FitDaughtersPVConst_nPV]
   Float_t         B_FitDaughtersPVConst_J_psi_1S_decayLength[100];   //[B_FitDaughtersPVConst_nPV]
   Float_t         B_FitDaughtersPVConst_J_psi_1S_decayLengthErr[100];   //[B_FitDaughtersPVConst_nPV]
   Float_t         B_FitDaughtersPVConst_J_psi_1S_muminus_0_ID[100];   //[B_FitDaughtersPVConst_nPV]
   Float_t         B_FitDaughtersPVConst_J_psi_1S_muminus_0_PE[100];   //[B_FitDaughtersPVConst_nPV]
   Float_t         B_FitDaughtersPVConst_J_psi_1S_muminus_0_PX[100];   //[B_FitDaughtersPVConst_nPV]
   Float_t         B_FitDaughtersPVConst_J_psi_1S_muminus_0_PY[100];   //[B_FitDaughtersPVConst_nPV]
   Float_t         B_FitDaughtersPVConst_J_psi_1S_muminus_0_PZ[100];   //[B_FitDaughtersPVConst_nPV]
   Float_t         B_FitDaughtersPVConst_J_psi_1S_muminus_ID[100];   //[B_FitDaughtersPVConst_nPV]
   Float_t         B_FitDaughtersPVConst_J_psi_1S_muminus_PE[100];   //[B_FitDaughtersPVConst_nPV]
   Float_t         B_FitDaughtersPVConst_J_psi_1S_muminus_PX[100];   //[B_FitDaughtersPVConst_nPV]
   Float_t         B_FitDaughtersPVConst_J_psi_1S_muminus_PY[100];   //[B_FitDaughtersPVConst_nPV]
   Float_t         B_FitDaughtersPVConst_J_psi_1S_muminus_PZ[100];   //[B_FitDaughtersPVConst_nPV]
   Float_t         B_FitDaughtersPVConst_Kst_892_0_Kplus_ID[100];   //[B_FitDaughtersPVConst_nPV]
   Float_t         B_FitDaughtersPVConst_Kst_892_0_Kplus_PE[100];   //[B_FitDaughtersPVConst_nPV]
   Float_t         B_FitDaughtersPVConst_Kst_892_0_Kplus_PX[100];   //[B_FitDaughtersPVConst_nPV]
   Float_t         B_FitDaughtersPVConst_Kst_892_0_Kplus_PY[100];   //[B_FitDaughtersPVConst_nPV]
   Float_t         B_FitDaughtersPVConst_Kst_892_0_Kplus_PZ[100];   //[B_FitDaughtersPVConst_nPV]
   Float_t         B_FitDaughtersPVConst_Kst_892_0_M[100];   //[B_FitDaughtersPVConst_nPV]
   Float_t         B_FitDaughtersPVConst_Kst_892_0_MERR[100];   //[B_FitDaughtersPVConst_nPV]
   Float_t         B_FitDaughtersPVConst_Kst_892_0_P[100];   //[B_FitDaughtersPVConst_nPV]
   Float_t         B_FitDaughtersPVConst_Kst_892_0_PERR[100];   //[B_FitDaughtersPVConst_nPV]
   Float_t         B_FitDaughtersPVConst_Kst_892_0_ctau[100];   //[B_FitDaughtersPVConst_nPV]
   Float_t         B_FitDaughtersPVConst_Kst_892_0_ctauErr[100];   //[B_FitDaughtersPVConst_nPV]
   Float_t         B_FitDaughtersPVConst_Kst_892_0_decayLength[100];   //[B_FitDaughtersPVConst_nPV]
   Float_t         B_FitDaughtersPVConst_Kst_892_0_decayLengthErr[100];   //[B_FitDaughtersPVConst_nPV]
   Float_t         B_FitDaughtersPVConst_Kst_892_0_piplus_ID[100];   //[B_FitDaughtersPVConst_nPV]
   Float_t         B_FitDaughtersPVConst_Kst_892_0_piplus_PE[100];   //[B_FitDaughtersPVConst_nPV]
   Float_t         B_FitDaughtersPVConst_Kst_892_0_piplus_PX[100];   //[B_FitDaughtersPVConst_nPV]
   Float_t         B_FitDaughtersPVConst_Kst_892_0_piplus_PY[100];   //[B_FitDaughtersPVConst_nPV]
   Float_t         B_FitDaughtersPVConst_Kst_892_0_piplus_PZ[100];   //[B_FitDaughtersPVConst_nPV]
   Float_t         B_FitDaughtersPVConst_M[100];   //[B_FitDaughtersPVConst_nPV]
   Float_t         B_FitDaughtersPVConst_MERR[100];   //[B_FitDaughtersPVConst_nPV]
   Float_t         B_FitDaughtersPVConst_P[100];   //[B_FitDaughtersPVConst_nPV]
   Float_t         B_FitDaughtersPVConst_PERR[100];   //[B_FitDaughtersPVConst_nPV]
   Float_t         B_FitDaughtersPVConst_PV_X[100];   //[B_FitDaughtersPVConst_nPV]
   Float_t         B_FitDaughtersPVConst_PV_Y[100];   //[B_FitDaughtersPVConst_nPV]
   Float_t         B_FitDaughtersPVConst_PV_Z[100];   //[B_FitDaughtersPVConst_nPV]
   Float_t         B_FitDaughtersPVConst_PV_key[100];   //[B_FitDaughtersPVConst_nPV]
   Float_t         B_FitDaughtersPVConst_chi2[100];   //[B_FitDaughtersPVConst_nPV]
   Float_t         B_FitDaughtersPVConst_ctau[100];   //[B_FitDaughtersPVConst_nPV]
   Float_t         B_FitDaughtersPVConst_ctauErr[100];   //[B_FitDaughtersPVConst_nPV]
   Float_t         B_FitDaughtersPVConst_decayLength[100];   //[B_FitDaughtersPVConst_nPV]
   Float_t         B_FitDaughtersPVConst_decayLengthErr[100];   //[B_FitDaughtersPVConst_nPV]
   Float_t         B_FitDaughtersPVConst_nDOF[100];   //[B_FitDaughtersPVConst_nPV]
   Float_t         B_FitDaughtersPVConst_nIter[100];   //[B_FitDaughtersPVConst_nPV]
   Float_t         B_FitDaughtersPVConst_status[100];   //[B_FitDaughtersPVConst_nPV]
   Int_t           B_FitPVConst_nPV;
   Float_t         B_FitPVConst_J_psi_1S_M[100];   //[B_FitPVConst_nPV]
   Float_t         B_FitPVConst_J_psi_1S_MERR[100];   //[B_FitPVConst_nPV]
   Float_t         B_FitPVConst_J_psi_1S_P[100];   //[B_FitPVConst_nPV]
   Float_t         B_FitPVConst_J_psi_1S_PERR[100];   //[B_FitPVConst_nPV]
   Float_t         B_FitPVConst_J_psi_1S_ctau[100];   //[B_FitPVConst_nPV]
   Float_t         B_FitPVConst_J_psi_1S_ctauErr[100];   //[B_FitPVConst_nPV]
   Float_t         B_FitPVConst_J_psi_1S_decayLength[100];   //[B_FitPVConst_nPV]
   Float_t         B_FitPVConst_J_psi_1S_decayLengthErr[100];   //[B_FitPVConst_nPV]
   Float_t         B_FitPVConst_J_psi_1S_muminus_0_ID[100];   //[B_FitPVConst_nPV]
   Float_t         B_FitPVConst_J_psi_1S_muminus_0_PE[100];   //[B_FitPVConst_nPV]
   Float_t         B_FitPVConst_J_psi_1S_muminus_0_PX[100];   //[B_FitPVConst_nPV]
   Float_t         B_FitPVConst_J_psi_1S_muminus_0_PY[100];   //[B_FitPVConst_nPV]
   Float_t         B_FitPVConst_J_psi_1S_muminus_0_PZ[100];   //[B_FitPVConst_nPV]
   Float_t         B_FitPVConst_J_psi_1S_muminus_ID[100];   //[B_FitPVConst_nPV]
   Float_t         B_FitPVConst_J_psi_1S_muminus_PE[100];   //[B_FitPVConst_nPV]
   Float_t         B_FitPVConst_J_psi_1S_muminus_PX[100];   //[B_FitPVConst_nPV]
   Float_t         B_FitPVConst_J_psi_1S_muminus_PY[100];   //[B_FitPVConst_nPV]
   Float_t         B_FitPVConst_J_psi_1S_muminus_PZ[100];   //[B_FitPVConst_nPV]
   Float_t         B_FitPVConst_Kst_892_0_Kplus_ID[100];   //[B_FitPVConst_nPV]
   Float_t         B_FitPVConst_Kst_892_0_Kplus_PE[100];   //[B_FitPVConst_nPV]
   Float_t         B_FitPVConst_Kst_892_0_Kplus_PX[100];   //[B_FitPVConst_nPV]
   Float_t         B_FitPVConst_Kst_892_0_Kplus_PY[100];   //[B_FitPVConst_nPV]
   Float_t         B_FitPVConst_Kst_892_0_Kplus_PZ[100];   //[B_FitPVConst_nPV]
   Float_t         B_FitPVConst_Kst_892_0_M[100];   //[B_FitPVConst_nPV]
   Float_t         B_FitPVConst_Kst_892_0_MERR[100];   //[B_FitPVConst_nPV]
   Float_t         B_FitPVConst_Kst_892_0_P[100];   //[B_FitPVConst_nPV]
   Float_t         B_FitPVConst_Kst_892_0_PERR[100];   //[B_FitPVConst_nPV]
   Float_t         B_FitPVConst_Kst_892_0_ctau[100];   //[B_FitPVConst_nPV]
   Float_t         B_FitPVConst_Kst_892_0_ctauErr[100];   //[B_FitPVConst_nPV]
   Float_t         B_FitPVConst_Kst_892_0_decayLength[100];   //[B_FitPVConst_nPV]
   Float_t         B_FitPVConst_Kst_892_0_decayLengthErr[100];   //[B_FitPVConst_nPV]
   Float_t         B_FitPVConst_Kst_892_0_piplus_ID[100];   //[B_FitPVConst_nPV]
   Float_t         B_FitPVConst_Kst_892_0_piplus_PE[100];   //[B_FitPVConst_nPV]
   Float_t         B_FitPVConst_Kst_892_0_piplus_PX[100];   //[B_FitPVConst_nPV]
   Float_t         B_FitPVConst_Kst_892_0_piplus_PY[100];   //[B_FitPVConst_nPV]
   Float_t         B_FitPVConst_Kst_892_0_piplus_PZ[100];   //[B_FitPVConst_nPV]
   Float_t         B_FitPVConst_M[100];   //[B_FitPVConst_nPV]
   Float_t         B_FitPVConst_MERR[100];   //[B_FitPVConst_nPV]
   Float_t         B_FitPVConst_P[100];   //[B_FitPVConst_nPV]
   Float_t         B_FitPVConst_PERR[100];   //[B_FitPVConst_nPV]
   Float_t         B_FitPVConst_PV_X[100];   //[B_FitPVConst_nPV]
   Float_t         B_FitPVConst_PV_Y[100];   //[B_FitPVConst_nPV]
   Float_t         B_FitPVConst_PV_Z[100];   //[B_FitPVConst_nPV]
   Float_t         B_FitPVConst_PV_key[100];   //[B_FitPVConst_nPV]
   Float_t         B_FitPVConst_chi2[100];   //[B_FitPVConst_nPV]
   Float_t         B_FitPVConst_ctau[100];   //[B_FitPVConst_nPV]
   Float_t         B_FitPVConst_ctauErr[100];   //[B_FitPVConst_nPV]
   Float_t         B_FitPVConst_decayLength[100];   //[B_FitPVConst_nPV]
   Float_t         B_FitPVConst_decayLengthErr[100];   //[B_FitPVConst_nPV]
   Float_t         B_FitPVConst_nDOF[100];   //[B_FitPVConst_nPV]
   Float_t         B_FitPVConst_nIter[100];   //[B_FitPVConst_nPV]
   Float_t         B_FitPVConst_status[100];   //[B_FitPVConst_nPV]
   Int_t           B_FitwithoutConst_nPV;
   Float_t         B_FitwithoutConst_J_psi_1S_M[100];   //[B_FitwithoutConst_nPV]
   Float_t         B_FitwithoutConst_J_psi_1S_MERR[100];   //[B_FitwithoutConst_nPV]
   Float_t         B_FitwithoutConst_J_psi_1S_P[100];   //[B_FitwithoutConst_nPV]
   Float_t         B_FitwithoutConst_J_psi_1S_PERR[100];   //[B_FitwithoutConst_nPV]
   Float_t         B_FitwithoutConst_J_psi_1S_ctau[100];   //[B_FitwithoutConst_nPV]
   Float_t         B_FitwithoutConst_J_psi_1S_ctauErr[100];   //[B_FitwithoutConst_nPV]
   Float_t         B_FitwithoutConst_J_psi_1S_decayLength[100];   //[B_FitwithoutConst_nPV]
   Float_t         B_FitwithoutConst_J_psi_1S_decayLengthErr[100];   //[B_FitwithoutConst_nPV]
   Float_t         B_FitwithoutConst_J_psi_1S_muminus_0_ID[100];   //[B_FitwithoutConst_nPV]
   Float_t         B_FitwithoutConst_J_psi_1S_muminus_0_PE[100];   //[B_FitwithoutConst_nPV]
   Float_t         B_FitwithoutConst_J_psi_1S_muminus_0_PX[100];   //[B_FitwithoutConst_nPV]
   Float_t         B_FitwithoutConst_J_psi_1S_muminus_0_PY[100];   //[B_FitwithoutConst_nPV]
   Float_t         B_FitwithoutConst_J_psi_1S_muminus_0_PZ[100];   //[B_FitwithoutConst_nPV]
   Float_t         B_FitwithoutConst_J_psi_1S_muminus_ID[100];   //[B_FitwithoutConst_nPV]
   Float_t         B_FitwithoutConst_J_psi_1S_muminus_PE[100];   //[B_FitwithoutConst_nPV]
   Float_t         B_FitwithoutConst_J_psi_1S_muminus_PX[100];   //[B_FitwithoutConst_nPV]
   Float_t         B_FitwithoutConst_J_psi_1S_muminus_PY[100];   //[B_FitwithoutConst_nPV]
   Float_t         B_FitwithoutConst_J_psi_1S_muminus_PZ[100];   //[B_FitwithoutConst_nPV]
   Float_t         B_FitwithoutConst_Kst_892_0_Kplus_ID[100];   //[B_FitwithoutConst_nPV]
   Float_t         B_FitwithoutConst_Kst_892_0_Kplus_PE[100];   //[B_FitwithoutConst_nPV]
   Float_t         B_FitwithoutConst_Kst_892_0_Kplus_PX[100];   //[B_FitwithoutConst_nPV]
   Float_t         B_FitwithoutConst_Kst_892_0_Kplus_PY[100];   //[B_FitwithoutConst_nPV]
   Float_t         B_FitwithoutConst_Kst_892_0_Kplus_PZ[100];   //[B_FitwithoutConst_nPV]
   Float_t         B_FitwithoutConst_Kst_892_0_M[100];   //[B_FitwithoutConst_nPV]
   Float_t         B_FitwithoutConst_Kst_892_0_MERR[100];   //[B_FitwithoutConst_nPV]
   Float_t         B_FitwithoutConst_Kst_892_0_P[100];   //[B_FitwithoutConst_nPV]
   Float_t         B_FitwithoutConst_Kst_892_0_PERR[100];   //[B_FitwithoutConst_nPV]
   Float_t         B_FitwithoutConst_Kst_892_0_ctau[100];   //[B_FitwithoutConst_nPV]
   Float_t         B_FitwithoutConst_Kst_892_0_ctauErr[100];   //[B_FitwithoutConst_nPV]
   Float_t         B_FitwithoutConst_Kst_892_0_decayLength[100];   //[B_FitwithoutConst_nPV]
   Float_t         B_FitwithoutConst_Kst_892_0_decayLengthErr[100];   //[B_FitwithoutConst_nPV]
   Float_t         B_FitwithoutConst_Kst_892_0_piplus_ID[100];   //[B_FitwithoutConst_nPV]
   Float_t         B_FitwithoutConst_Kst_892_0_piplus_PE[100];   //[B_FitwithoutConst_nPV]
   Float_t         B_FitwithoutConst_Kst_892_0_piplus_PX[100];   //[B_FitwithoutConst_nPV]
   Float_t         B_FitwithoutConst_Kst_892_0_piplus_PY[100];   //[B_FitwithoutConst_nPV]
   Float_t         B_FitwithoutConst_Kst_892_0_piplus_PZ[100];   //[B_FitwithoutConst_nPV]
   Float_t         B_FitwithoutConst_M[100];   //[B_FitwithoutConst_nPV]
   Float_t         B_FitwithoutConst_MERR[100];   //[B_FitwithoutConst_nPV]
   Float_t         B_FitwithoutConst_P[100];   //[B_FitwithoutConst_nPV]
   Float_t         B_FitwithoutConst_PERR[100];   //[B_FitwithoutConst_nPV]
   Float_t         B_FitwithoutConst_chi2[100];   //[B_FitwithoutConst_nPV]
   Float_t         B_FitwithoutConst_nDOF[100];   //[B_FitwithoutConst_nPV]
   Float_t         B_FitwithoutConst_nIter[100];   //[B_FitwithoutConst_nPV]
   Float_t         B_FitwithoutConst_status[100];   //[B_FitwithoutConst_nPV]
   Bool_t          B_L0Global_Dec;
   Bool_t          B_L0Global_TIS;
   Bool_t          B_L0Global_TOS;
   Bool_t          B_Hlt1Global_Dec;
   Bool_t          B_Hlt1Global_TIS;
   Bool_t          B_Hlt1Global_TOS;
   Bool_t          B_Hlt1Phys_Dec;
   Bool_t          B_Hlt1Phys_TIS;
   Bool_t          B_Hlt1Phys_TOS;
   Bool_t          B_Hlt2Global_Dec;
   Bool_t          B_Hlt2Global_TIS;
   Bool_t          B_Hlt2Global_TOS;
   Bool_t          B_Hlt2Phys_Dec;
   Bool_t          B_Hlt2Phys_TIS;
   Bool_t          B_Hlt2Phys_TOS;
   Bool_t          B_L0PhysicsDecision_Dec;
   Bool_t          B_L0PhysicsDecision_TIS;
   Bool_t          B_L0PhysicsDecision_TOS;
   Bool_t          B_L0MuonDecision_Dec;
   Bool_t          B_L0MuonDecision_TIS;
   Bool_t          B_L0MuonDecision_TOS;
   Bool_t          B_L0DiMuonDecision_Dec;
   Bool_t          B_L0DiMuonDecision_TIS;
   Bool_t          B_L0DiMuonDecision_TOS;
   Bool_t          B_L0MuonHighDecision_Dec;
   Bool_t          B_L0MuonHighDecision_TIS;
   Bool_t          B_L0MuonHighDecision_TOS;
   Bool_t          B_L0HadronDecision_Dec;
   Bool_t          B_L0HadronDecision_TIS;
   Bool_t          B_L0HadronDecision_TOS;
   Bool_t          B_L0ElectronDecision_Dec;
   Bool_t          B_L0ElectronDecision_TIS;
   Bool_t          B_L0ElectronDecision_TOS;
   Bool_t          B_L0PhotonDecision_Dec;
   Bool_t          B_L0PhotonDecision_TIS;
   Bool_t          B_L0PhotonDecision_TOS;
   Bool_t          B_L0MuonNoSPDDecision_Dec;
   Bool_t          B_L0MuonNoSPDDecision_TIS;
   Bool_t          B_L0MuonNoSPDDecision_TOS;
   Bool_t          B_Hlt1DiMuonHighMassDecision_Dec;
   Bool_t          B_Hlt1DiMuonHighMassDecision_TIS;
   Bool_t          B_Hlt1DiMuonHighMassDecision_TOS;
   Bool_t          B_Hlt1DiMuonLowMassDecision_Dec;
   Bool_t          B_Hlt1DiMuonLowMassDecision_TIS;
   Bool_t          B_Hlt1DiMuonLowMassDecision_TOS;
   Bool_t          B_Hlt1SingleMuonNoIPDecision_Dec;
   Bool_t          B_Hlt1SingleMuonNoIPDecision_TIS;
   Bool_t          B_Hlt1SingleMuonNoIPDecision_TOS;
   Bool_t          B_Hlt1SingleMuonHighPTDecision_Dec;
   Bool_t          B_Hlt1SingleMuonHighPTDecision_TIS;
   Bool_t          B_Hlt1SingleMuonHighPTDecision_TOS;
   Bool_t          B_Hlt1SingleElectronNoIPDecision_Dec;
   Bool_t          B_Hlt1SingleElectronNoIPDecision_TIS;
   Bool_t          B_Hlt1SingleElectronNoIPDecision_TOS;
   Bool_t          B_Hlt1TrackAllL0Decision_Dec;
   Bool_t          B_Hlt1TrackAllL0Decision_TIS;
   Bool_t          B_Hlt1TrackAllL0Decision_TOS;
   Bool_t          B_Hlt1TrackAllL0TightDecision_Dec;
   Bool_t          B_Hlt1TrackAllL0TightDecision_TIS;
   Bool_t          B_Hlt1TrackAllL0TightDecision_TOS;
   Bool_t          B_Hlt1TrackMuonDecision_Dec;
   Bool_t          B_Hlt1TrackMuonDecision_TIS;
   Bool_t          B_Hlt1TrackMuonDecision_TOS;
   Bool_t          B_Hlt1TrackPhotonDecision_Dec;
   Bool_t          B_Hlt1TrackPhotonDecision_TIS;
   Bool_t          B_Hlt1TrackPhotonDecision_TOS;
   Bool_t          B_Hlt1TrackForwardPassThroughDecision_Dec;
   Bool_t          B_Hlt1TrackForwardPassThroughDecision_TIS;
   Bool_t          B_Hlt1TrackForwardPassThroughDecision_TOS;
   Bool_t          B_Hlt1TrackForwardPassThroughLooseDecision_Dec;
   Bool_t          B_Hlt1TrackForwardPassThroughLooseDecision_TIS;
   Bool_t          B_Hlt1TrackForwardPassThroughLooseDecision_TOS;
   Bool_t          B_Hlt1LumiDecision_Dec;
   Bool_t          B_Hlt1LumiDecision_TIS;
   Bool_t          B_Hlt1LumiDecision_TOS;
   Bool_t          B_Hlt1LumiMidBeamCrossingDecision_Dec;
   Bool_t          B_Hlt1LumiMidBeamCrossingDecision_TIS;
   Bool_t          B_Hlt1LumiMidBeamCrossingDecision_TOS;
   Bool_t          B_Hlt1MBNoBiasDecision_Dec;
   Bool_t          B_Hlt1MBNoBiasDecision_TIS;
   Bool_t          B_Hlt1MBNoBiasDecision_TOS;
   Bool_t          B_Hlt1CharmCalibrationNoBiasDecision_Dec;
   Bool_t          B_Hlt1CharmCalibrationNoBiasDecision_TIS;
   Bool_t          B_Hlt1CharmCalibrationNoBiasDecision_TOS;
   Bool_t          B_Hlt1MBMicroBiasVeloDecision_Dec;
   Bool_t          B_Hlt1MBMicroBiasVeloDecision_TIS;
   Bool_t          B_Hlt1MBMicroBiasVeloDecision_TOS;
   Bool_t          B_Hlt1MBMicroBiasTStationDecision_Dec;
   Bool_t          B_Hlt1MBMicroBiasTStationDecision_TIS;
   Bool_t          B_Hlt1MBMicroBiasTStationDecision_TOS;
   Bool_t          B_Hlt1L0AnyDecision_Dec;
   Bool_t          B_Hlt1L0AnyDecision_TIS;
   Bool_t          B_Hlt1L0AnyDecision_TOS;
   Bool_t          B_Hlt1L0AnyNoSPDDecision_Dec;
   Bool_t          B_Hlt1L0AnyNoSPDDecision_TIS;
   Bool_t          B_Hlt1L0AnyNoSPDDecision_TOS;
   Bool_t          B_Hlt1L0HighSumETJetDecision_Dec;
   Bool_t          B_Hlt1L0HighSumETJetDecision_TIS;
   Bool_t          B_Hlt1L0HighSumETJetDecision_TOS;
   Bool_t          B_Hlt1NoPVPassThroughDecision_Dec;
   Bool_t          B_Hlt1NoPVPassThroughDecision_TIS;
   Bool_t          B_Hlt1NoPVPassThroughDecision_TOS;
   Bool_t          B_Hlt1DiProtonDecision_Dec;
   Bool_t          B_Hlt1DiProtonDecision_TIS;
   Bool_t          B_Hlt1DiProtonDecision_TOS;
   Bool_t          B_Hlt1DiProtonLowMultDecision_Dec;
   Bool_t          B_Hlt1DiProtonLowMultDecision_TIS;
   Bool_t          B_Hlt1DiProtonLowMultDecision_TOS;
   Bool_t          B_Hlt1BeamGasNoBeamBeam1Decision_Dec;
   Bool_t          B_Hlt1BeamGasNoBeamBeam1Decision_TIS;
   Bool_t          B_Hlt1BeamGasNoBeamBeam1Decision_TOS;
   Bool_t          B_Hlt1BeamGasNoBeamBeam2Decision_Dec;
   Bool_t          B_Hlt1BeamGasNoBeamBeam2Decision_TIS;
   Bool_t          B_Hlt1BeamGasNoBeamBeam2Decision_TOS;
   Bool_t          B_Hlt1BeamGasBeam1Decision_Dec;
   Bool_t          B_Hlt1BeamGasBeam1Decision_TIS;
   Bool_t          B_Hlt1BeamGasBeam1Decision_TOS;
   Bool_t          B_Hlt1BeamGasBeam2Decision_Dec;
   Bool_t          B_Hlt1BeamGasBeam2Decision_TIS;
   Bool_t          B_Hlt1BeamGasBeam2Decision_TOS;
   Bool_t          B_Hlt1BeamGasCrossingEnhancedBeam1Decision_Dec;
   Bool_t          B_Hlt1BeamGasCrossingEnhancedBeam1Decision_TIS;
   Bool_t          B_Hlt1BeamGasCrossingEnhancedBeam1Decision_TOS;
   Bool_t          B_Hlt1BeamGasCrossingEnhancedBeam2Decision_Dec;
   Bool_t          B_Hlt1BeamGasCrossingEnhancedBeam2Decision_TIS;
   Bool_t          B_Hlt1BeamGasCrossingEnhancedBeam2Decision_TOS;
   Bool_t          B_Hlt1BeamGasCrossingForcedRecoDecision_Dec;
   Bool_t          B_Hlt1BeamGasCrossingForcedRecoDecision_TIS;
   Bool_t          B_Hlt1BeamGasCrossingForcedRecoDecision_TOS;
   Bool_t          B_Hlt1BeamGasCrossingForcedRecoFullZDecision_Dec;
   Bool_t          B_Hlt1BeamGasCrossingForcedRecoFullZDecision_TIS;
   Bool_t          B_Hlt1BeamGasCrossingForcedRecoFullZDecision_TOS;
   Bool_t          B_Hlt1BeamGasHighRhoVerticesDecision_Dec;
   Bool_t          B_Hlt1BeamGasHighRhoVerticesDecision_TIS;
   Bool_t          B_Hlt1BeamGasHighRhoVerticesDecision_TOS;
   Bool_t          B_Hlt1ODINTechnicalDecision_Dec;
   Bool_t          B_Hlt1ODINTechnicalDecision_TIS;
   Bool_t          B_Hlt1ODINTechnicalDecision_TOS;
   Bool_t          B_Hlt1Tell1ErrorDecision_Dec;
   Bool_t          B_Hlt1Tell1ErrorDecision_TIS;
   Bool_t          B_Hlt1Tell1ErrorDecision_TOS;
   Bool_t          B_Hlt1VeloClosingMicroBiasDecision_Dec;
   Bool_t          B_Hlt1VeloClosingMicroBiasDecision_TIS;
   Bool_t          B_Hlt1VeloClosingMicroBiasDecision_TOS;
   Bool_t          B_Hlt1VertexDisplVertexDecision_Dec;
   Bool_t          B_Hlt1VertexDisplVertexDecision_TIS;
   Bool_t          B_Hlt1VertexDisplVertexDecision_TOS;
   Bool_t          B_Hlt1BeamGasCrossingParasiticDecision_Dec;
   Bool_t          B_Hlt1BeamGasCrossingParasiticDecision_TIS;
   Bool_t          B_Hlt1BeamGasCrossingParasiticDecision_TOS;
   Bool_t          B_Hlt1ErrorEventDecision_Dec;
   Bool_t          B_Hlt1ErrorEventDecision_TIS;
   Bool_t          B_Hlt1ErrorEventDecision_TOS;
   Bool_t          B_Hlt1GlobalDecision_Dec;
   Bool_t          B_Hlt1GlobalDecision_TIS;
   Bool_t          B_Hlt1GlobalDecision_TOS;
   Bool_t          B_Hlt1TrackMuonNoSPDDecision_Dec;
   Bool_t          B_Hlt1TrackMuonNoSPDDecision_TIS;
   Bool_t          B_Hlt1TrackMuonNoSPDDecision_TOS;
   Bool_t          B_Hlt1TrackMVADecision_Dec;
   Bool_t          B_Hlt1TrackMVADecision_TIS;
   Bool_t          B_Hlt1TrackMVADecision_TOS;
   Bool_t          B_Hlt1TwoTrackMVADecision_Dec;
   Bool_t          B_Hlt1TwoTrackMVADecision_TIS;
   Bool_t          B_Hlt1TwoTrackMVADecision_TOS;
   Bool_t          B_Hlt2SingleMuonNoSPDDecision_Dec;
   Bool_t          B_Hlt2SingleMuonNoSPDDecision_TIS;
   Bool_t          B_Hlt2SingleMuonNoSPDDecision_TOS;
   Bool_t          B_Hlt2SingleElectronTFLowPtDecision_Dec;
   Bool_t          B_Hlt2SingleElectronTFLowPtDecision_TIS;
   Bool_t          B_Hlt2SingleElectronTFLowPtDecision_TOS;
   Bool_t          B_Hlt2SingleElectronTFHighPtDecision_Dec;
   Bool_t          B_Hlt2SingleElectronTFHighPtDecision_TIS;
   Bool_t          B_Hlt2SingleElectronTFHighPtDecision_TOS;
   Bool_t          B_Hlt2DiElectronHighMassDecision_Dec;
   Bool_t          B_Hlt2DiElectronHighMassDecision_TIS;
   Bool_t          B_Hlt2DiElectronHighMassDecision_TOS;
   Bool_t          B_Hlt2DiElectronBDecision_Dec;
   Bool_t          B_Hlt2DiElectronBDecision_TIS;
   Bool_t          B_Hlt2DiElectronBDecision_TOS;
   Bool_t          B_Hlt2B2HHLTUnbiasedDecision_Dec;
   Bool_t          B_Hlt2B2HHLTUnbiasedDecision_TIS;
   Bool_t          B_Hlt2B2HHLTUnbiasedDecision_TOS;
   Bool_t          B_Hlt2Topo2BodySimpleDecision_Dec;
   Bool_t          B_Hlt2Topo2BodySimpleDecision_TIS;
   Bool_t          B_Hlt2Topo2BodySimpleDecision_TOS;
   Bool_t          B_Hlt2Topo3BodySimpleDecision_Dec;
   Bool_t          B_Hlt2Topo3BodySimpleDecision_TIS;
   Bool_t          B_Hlt2Topo3BodySimpleDecision_TOS;
   Bool_t          B_Hlt2Topo4BodySimpleDecision_Dec;
   Bool_t          B_Hlt2Topo4BodySimpleDecision_TIS;
   Bool_t          B_Hlt2Topo4BodySimpleDecision_TOS;
   Bool_t          B_Hlt2Topo2BodyBBDTDecision_Dec;
   Bool_t          B_Hlt2Topo2BodyBBDTDecision_TIS;
   Bool_t          B_Hlt2Topo2BodyBBDTDecision_TOS;
   Bool_t          B_Hlt2Topo3BodyBBDTDecision_Dec;
   Bool_t          B_Hlt2Topo3BodyBBDTDecision_TIS;
   Bool_t          B_Hlt2Topo3BodyBBDTDecision_TOS;
   Bool_t          B_Hlt2Topo4BodyBBDTDecision_Dec;
   Bool_t          B_Hlt2Topo4BodyBBDTDecision_TIS;
   Bool_t          B_Hlt2Topo4BodyBBDTDecision_TOS;
   Bool_t          B_Hlt2TopoMu2BodyBBDTDecision_Dec;
   Bool_t          B_Hlt2TopoMu2BodyBBDTDecision_TIS;
   Bool_t          B_Hlt2TopoMu2BodyBBDTDecision_TOS;
   Bool_t          B_Hlt2TopoMu3BodyBBDTDecision_Dec;
   Bool_t          B_Hlt2TopoMu3BodyBBDTDecision_TIS;
   Bool_t          B_Hlt2TopoMu3BodyBBDTDecision_TOS;
   Bool_t          B_Hlt2TopoMu4BodyBBDTDecision_Dec;
   Bool_t          B_Hlt2TopoMu4BodyBBDTDecision_TIS;
   Bool_t          B_Hlt2TopoMu4BodyBBDTDecision_TOS;
   Bool_t          B_Hlt2TopoE2BodyBBDTDecision_Dec;
   Bool_t          B_Hlt2TopoE2BodyBBDTDecision_TIS;
   Bool_t          B_Hlt2TopoE2BodyBBDTDecision_TOS;
   Bool_t          B_Hlt2TopoE3BodyBBDTDecision_Dec;
   Bool_t          B_Hlt2TopoE3BodyBBDTDecision_TIS;
   Bool_t          B_Hlt2TopoE3BodyBBDTDecision_TOS;
   Bool_t          B_Hlt2TopoE4BodyBBDTDecision_Dec;
   Bool_t          B_Hlt2TopoE4BodyBBDTDecision_TIS;
   Bool_t          B_Hlt2TopoE4BodyBBDTDecision_TOS;
   Bool_t          B_Hlt2IncPhiDecision_Dec;
   Bool_t          B_Hlt2IncPhiDecision_TIS;
   Bool_t          B_Hlt2IncPhiDecision_TOS;
   Bool_t          B_Hlt2IncPhiSidebandsDecision_Dec;
   Bool_t          B_Hlt2IncPhiSidebandsDecision_TIS;
   Bool_t          B_Hlt2IncPhiSidebandsDecision_TOS;
   Bool_t          B_Hlt2MuonFromHLT1Decision_Dec;
   Bool_t          B_Hlt2MuonFromHLT1Decision_TIS;
   Bool_t          B_Hlt2MuonFromHLT1Decision_TOS;
   Bool_t          B_Hlt2SingleMuonDecision_Dec;
   Bool_t          B_Hlt2SingleMuonDecision_TIS;
   Bool_t          B_Hlt2SingleMuonDecision_TOS;
   Bool_t          B_Hlt2SingleMuonHighPTDecision_Dec;
   Bool_t          B_Hlt2SingleMuonHighPTDecision_TIS;
   Bool_t          B_Hlt2SingleMuonHighPTDecision_TOS;
   Bool_t          B_Hlt2SingleMuonLowPTDecision_Dec;
   Bool_t          B_Hlt2SingleMuonLowPTDecision_TIS;
   Bool_t          B_Hlt2SingleMuonLowPTDecision_TOS;
   Bool_t          B_Hlt2DiMuonDecision_Dec;
   Bool_t          B_Hlt2DiMuonDecision_TIS;
   Bool_t          B_Hlt2DiMuonDecision_TOS;
   Bool_t          B_Hlt2DiMuonLowMassDecision_Dec;
   Bool_t          B_Hlt2DiMuonLowMassDecision_TIS;
   Bool_t          B_Hlt2DiMuonLowMassDecision_TOS;
   Bool_t          B_Hlt2DiMuonJPsiDecision_Dec;
   Bool_t          B_Hlt2DiMuonJPsiDecision_TIS;
   Bool_t          B_Hlt2DiMuonJPsiDecision_TOS;
   Bool_t          B_Hlt2DiMuonJPsiHighPTDecision_Dec;
   Bool_t          B_Hlt2DiMuonJPsiHighPTDecision_TIS;
   Bool_t          B_Hlt2DiMuonJPsiHighPTDecision_TOS;
   Bool_t          B_Hlt2DiMuonPsi2SDecision_Dec;
   Bool_t          B_Hlt2DiMuonPsi2SDecision_TIS;
   Bool_t          B_Hlt2DiMuonPsi2SDecision_TOS;
   Bool_t          B_Hlt2DiMuonBDecision_Dec;
   Bool_t          B_Hlt2DiMuonBDecision_TIS;
   Bool_t          B_Hlt2DiMuonBDecision_TOS;
   Bool_t          B_Hlt2DiMuonZDecision_Dec;
   Bool_t          B_Hlt2DiMuonZDecision_TIS;
   Bool_t          B_Hlt2DiMuonZDecision_TOS;
   Bool_t          B_Hlt2DiMuonDY1Decision_Dec;
   Bool_t          B_Hlt2DiMuonDY1Decision_TIS;
   Bool_t          B_Hlt2DiMuonDY1Decision_TOS;
   Bool_t          B_Hlt2DiMuonDY2Decision_Dec;
   Bool_t          B_Hlt2DiMuonDY2Decision_TIS;
   Bool_t          B_Hlt2DiMuonDY2Decision_TOS;
   Bool_t          B_Hlt2DiMuonDY3Decision_Dec;
   Bool_t          B_Hlt2DiMuonDY3Decision_TIS;
   Bool_t          B_Hlt2DiMuonDY3Decision_TOS;
   Bool_t          B_Hlt2DiMuonDY4Decision_Dec;
   Bool_t          B_Hlt2DiMuonDY4Decision_TIS;
   Bool_t          B_Hlt2DiMuonDY4Decision_TOS;
   Bool_t          B_Hlt2DiMuonDetachedDecision_Dec;
   Bool_t          B_Hlt2DiMuonDetachedDecision_TIS;
   Bool_t          B_Hlt2DiMuonDetachedDecision_TOS;
   Bool_t          B_Hlt2DiMuonDetachedHeavyDecision_Dec;
   Bool_t          B_Hlt2DiMuonDetachedHeavyDecision_TIS;
   Bool_t          B_Hlt2DiMuonDetachedHeavyDecision_TOS;
   Bool_t          B_Hlt2DiMuonDetachedJPsiDecision_Dec;
   Bool_t          B_Hlt2DiMuonDetachedJPsiDecision_TIS;
   Bool_t          B_Hlt2DiMuonDetachedJPsiDecision_TOS;
   Bool_t          B_Hlt2DiMuonNoPVDecision_Dec;
   Bool_t          B_Hlt2DiMuonNoPVDecision_TIS;
   Bool_t          B_Hlt2DiMuonNoPVDecision_TOS;
   Bool_t          B_Hlt2TriMuonDetachedDecision_Dec;
   Bool_t          B_Hlt2TriMuonDetachedDecision_TIS;
   Bool_t          B_Hlt2TriMuonDetachedDecision_TOS;
   Bool_t          B_Hlt2TriMuonTauDecision_Dec;
   Bool_t          B_Hlt2TriMuonTauDecision_TIS;
   Bool_t          B_Hlt2TriMuonTauDecision_TOS;
   Bool_t          B_Hlt2Topo2BodyDecision_Dec;
   Bool_t          B_Hlt2Topo2BodyDecision_TIS;
   Bool_t          B_Hlt2Topo2BodyDecision_TOS;
   Bool_t          B_Hlt2Topo3BodyDecision_Dec;
   Bool_t          B_Hlt2Topo3BodyDecision_TIS;
   Bool_t          B_Hlt2Topo3BodyDecision_TOS;
   Bool_t          B_Hlt2Topo4BodyDecision_Dec;
   Bool_t          B_Hlt2Topo4BodyDecision_TIS;
   Bool_t          B_Hlt2Topo4BodyDecision_TOS;
   Bool_t          B_Hlt2TopoMu2BodyDecision_Dec;
   Bool_t          B_Hlt2TopoMu2BodyDecision_TIS;
   Bool_t          B_Hlt2TopoMu2BodyDecision_TOS;
   Bool_t          B_Hlt2TopoMu3BodyDecision_Dec;
   Bool_t          B_Hlt2TopoMu3BodyDecision_TIS;
   Bool_t          B_Hlt2TopoMu3BodyDecision_TOS;
   Bool_t          B_Hlt2TopoMu4BodyDecision_Dec;
   Bool_t          B_Hlt2TopoMu4BodyDecision_TIS;
   Bool_t          B_Hlt2TopoMu4BodyDecision_TOS;
   Double_t        J_psi_1S_LOKI_ENERGY;
   Double_t        J_psi_1S_LOKI_ETA;
   Double_t        J_psi_1S_LOKI_PHI;
   Double_t        J_psi_1S_MINIP;
   Double_t        J_psi_1S_MINIPCHI2;
   Double_t        J_psi_1S_MINIPNEXTBEST;
   Double_t        J_psi_1S_MINIPCHI2NEXTBEST;
   Float_t         J_psi_1S_AllIP[100];   //[nPV]
   Float_t         J_psi_1S_AllIPchi2[100];   //[nPV]
   Float_t         J_psi_1S_AllDIRA[100];   //[nPV]
   Double_t        J_psi_1S_ENDVERTEX_X;
   Double_t        J_psi_1S_ENDVERTEX_Y;
   Double_t        J_psi_1S_ENDVERTEX_Z;
   Double_t        J_psi_1S_ENDVERTEX_XERR;
   Double_t        J_psi_1S_ENDVERTEX_YERR;
   Double_t        J_psi_1S_ENDVERTEX_ZERR;
   Double_t        J_psi_1S_ENDVERTEX_CHI2;
   Int_t           J_psi_1S_ENDVERTEX_NDOF;
   Float_t         J_psi_1S_ENDVERTEX_COV_[3][3];
   Double_t        J_psi_1S_OWNPV_X;
   Double_t        J_psi_1S_OWNPV_Y;
   Double_t        J_psi_1S_OWNPV_Z;
   Double_t        J_psi_1S_OWNPV_XERR;
   Double_t        J_psi_1S_OWNPV_YERR;
   Double_t        J_psi_1S_OWNPV_ZERR;
   Double_t        J_psi_1S_OWNPV_CHI2;
   Int_t           J_psi_1S_OWNPV_NDOF;
   Float_t         J_psi_1S_OWNPV_COV_[3][3];
   Double_t        J_psi_1S_IP_OWNPV;
   Double_t        J_psi_1S_IPCHI2_OWNPV;
   Double_t        J_psi_1S_FD_OWNPV;
   Double_t        J_psi_1S_FDCHI2_OWNPV;
   Double_t        J_psi_1S_DIRA_OWNPV;
   Double_t        J_psi_1S_TOPPV_X;
   Double_t        J_psi_1S_TOPPV_Y;
   Double_t        J_psi_1S_TOPPV_Z;
   Double_t        J_psi_1S_TOPPV_XERR;
   Double_t        J_psi_1S_TOPPV_YERR;
   Double_t        J_psi_1S_TOPPV_ZERR;
   Double_t        J_psi_1S_TOPPV_CHI2;
   Int_t           J_psi_1S_TOPPV_NDOF;
   Float_t         J_psi_1S_TOPPV_COV_[3][3];
   Double_t        J_psi_1S_IP_TOPPV;
   Double_t        J_psi_1S_IPCHI2_TOPPV;
   Double_t        J_psi_1S_FD_TOPPV;
   Double_t        J_psi_1S_FDCHI2_TOPPV;
   Double_t        J_psi_1S_DIRA_TOPPV;
   Double_t        J_psi_1S_ORIVX_X;
   Double_t        J_psi_1S_ORIVX_Y;
   Double_t        J_psi_1S_ORIVX_Z;
   Double_t        J_psi_1S_ORIVX_XERR;
   Double_t        J_psi_1S_ORIVX_YERR;
   Double_t        J_psi_1S_ORIVX_ZERR;
   Double_t        J_psi_1S_ORIVX_CHI2;
   Int_t           J_psi_1S_ORIVX_NDOF;
   Float_t         J_psi_1S_ORIVX_COV_[3][3];
   Double_t        J_psi_1S_IP_ORIVX;
   Double_t        J_psi_1S_IPCHI2_ORIVX;
   Double_t        J_psi_1S_FD_ORIVX;
   Double_t        J_psi_1S_FDCHI2_ORIVX;
   Double_t        J_psi_1S_DIRA_ORIVX;
   Double_t        J_psi_1S_P;
   Double_t        J_psi_1S_PT;
   Double_t        J_psi_1S_PE;
   Double_t        J_psi_1S_PX;
   Double_t        J_psi_1S_PY;
   Double_t        J_psi_1S_PZ;
   Double_t        J_psi_1S_MM;
   Double_t        J_psi_1S_MMERR;
   Double_t        J_psi_1S_M;
   Int_t           J_psi_1S_ID;
   Double_t        J_psi_1S_TAU;
   Double_t        J_psi_1S_TAUERR;
   Double_t        J_psi_1S_TAUCHI2;
   Double_t        J_psi_1S_X;
   Double_t        J_psi_1S_Y;
   Bool_t          J_psi_1S_L0Global_Dec;
   Bool_t          J_psi_1S_L0Global_TIS;
   Bool_t          J_psi_1S_L0Global_TOS;
   Bool_t          J_psi_1S_Hlt1Global_Dec;
   Bool_t          J_psi_1S_Hlt1Global_TIS;
   Bool_t          J_psi_1S_Hlt1Global_TOS;
   Bool_t          J_psi_1S_Hlt1Phys_Dec;
   Bool_t          J_psi_1S_Hlt1Phys_TIS;
   Bool_t          J_psi_1S_Hlt1Phys_TOS;
   Bool_t          J_psi_1S_Hlt2Global_Dec;
   Bool_t          J_psi_1S_Hlt2Global_TIS;
   Bool_t          J_psi_1S_Hlt2Global_TOS;
   Bool_t          J_psi_1S_Hlt2Phys_Dec;
   Bool_t          J_psi_1S_Hlt2Phys_TIS;
   Bool_t          J_psi_1S_Hlt2Phys_TOS;
   Bool_t          J_psi_1S_L0PhysicsDecision_Dec;
   Bool_t          J_psi_1S_L0PhysicsDecision_TIS;
   Bool_t          J_psi_1S_L0PhysicsDecision_TOS;
   Bool_t          J_psi_1S_L0MuonDecision_Dec;
   Bool_t          J_psi_1S_L0MuonDecision_TIS;
   Bool_t          J_psi_1S_L0MuonDecision_TOS;
   Bool_t          J_psi_1S_L0DiMuonDecision_Dec;
   Bool_t          J_psi_1S_L0DiMuonDecision_TIS;
   Bool_t          J_psi_1S_L0DiMuonDecision_TOS;
   Bool_t          J_psi_1S_L0MuonHighDecision_Dec;
   Bool_t          J_psi_1S_L0MuonHighDecision_TIS;
   Bool_t          J_psi_1S_L0MuonHighDecision_TOS;
   Bool_t          J_psi_1S_L0HadronDecision_Dec;
   Bool_t          J_psi_1S_L0HadronDecision_TIS;
   Bool_t          J_psi_1S_L0HadronDecision_TOS;
   Bool_t          J_psi_1S_L0ElectronDecision_Dec;
   Bool_t          J_psi_1S_L0ElectronDecision_TIS;
   Bool_t          J_psi_1S_L0ElectronDecision_TOS;
   Bool_t          J_psi_1S_L0PhotonDecision_Dec;
   Bool_t          J_psi_1S_L0PhotonDecision_TIS;
   Bool_t          J_psi_1S_L0PhotonDecision_TOS;
   Bool_t          J_psi_1S_L0MuonNoSPDDecision_Dec;
   Bool_t          J_psi_1S_L0MuonNoSPDDecision_TIS;
   Bool_t          J_psi_1S_L0MuonNoSPDDecision_TOS;
   Bool_t          J_psi_1S_Hlt1DiMuonHighMassDecision_Dec;
   Bool_t          J_psi_1S_Hlt1DiMuonHighMassDecision_TIS;
   Bool_t          J_psi_1S_Hlt1DiMuonHighMassDecision_TOS;
   Bool_t          J_psi_1S_Hlt1DiMuonLowMassDecision_Dec;
   Bool_t          J_psi_1S_Hlt1DiMuonLowMassDecision_TIS;
   Bool_t          J_psi_1S_Hlt1DiMuonLowMassDecision_TOS;
   Bool_t          J_psi_1S_Hlt1SingleMuonNoIPDecision_Dec;
   Bool_t          J_psi_1S_Hlt1SingleMuonNoIPDecision_TIS;
   Bool_t          J_psi_1S_Hlt1SingleMuonNoIPDecision_TOS;
   Bool_t          J_psi_1S_Hlt1SingleMuonHighPTDecision_Dec;
   Bool_t          J_psi_1S_Hlt1SingleMuonHighPTDecision_TIS;
   Bool_t          J_psi_1S_Hlt1SingleMuonHighPTDecision_TOS;
   Bool_t          J_psi_1S_Hlt1SingleElectronNoIPDecision_Dec;
   Bool_t          J_psi_1S_Hlt1SingleElectronNoIPDecision_TIS;
   Bool_t          J_psi_1S_Hlt1SingleElectronNoIPDecision_TOS;
   Bool_t          J_psi_1S_Hlt1TrackAllL0Decision_Dec;
   Bool_t          J_psi_1S_Hlt1TrackAllL0Decision_TIS;
   Bool_t          J_psi_1S_Hlt1TrackAllL0Decision_TOS;
   Bool_t          J_psi_1S_Hlt1TrackAllL0TightDecision_Dec;
   Bool_t          J_psi_1S_Hlt1TrackAllL0TightDecision_TIS;
   Bool_t          J_psi_1S_Hlt1TrackAllL0TightDecision_TOS;
   Bool_t          J_psi_1S_Hlt1TrackMuonDecision_Dec;
   Bool_t          J_psi_1S_Hlt1TrackMuonDecision_TIS;
   Bool_t          J_psi_1S_Hlt1TrackMuonDecision_TOS;
   Bool_t          J_psi_1S_Hlt1TrackPhotonDecision_Dec;
   Bool_t          J_psi_1S_Hlt1TrackPhotonDecision_TIS;
   Bool_t          J_psi_1S_Hlt1TrackPhotonDecision_TOS;
   Bool_t          J_psi_1S_Hlt1TrackForwardPassThroughDecision_Dec;
   Bool_t          J_psi_1S_Hlt1TrackForwardPassThroughDecision_TIS;
   Bool_t          J_psi_1S_Hlt1TrackForwardPassThroughDecision_TOS;
   Bool_t          J_psi_1S_Hlt1TrackForwardPassThroughLooseDecision_Dec;
   Bool_t          J_psi_1S_Hlt1TrackForwardPassThroughLooseDecision_TIS;
   Bool_t          J_psi_1S_Hlt1TrackForwardPassThroughLooseDecision_TOS;
   Bool_t          J_psi_1S_Hlt1LumiDecision_Dec;
   Bool_t          J_psi_1S_Hlt1LumiDecision_TIS;
   Bool_t          J_psi_1S_Hlt1LumiDecision_TOS;
   Bool_t          J_psi_1S_Hlt1LumiMidBeamCrossingDecision_Dec;
   Bool_t          J_psi_1S_Hlt1LumiMidBeamCrossingDecision_TIS;
   Bool_t          J_psi_1S_Hlt1LumiMidBeamCrossingDecision_TOS;
   Bool_t          J_psi_1S_Hlt1MBNoBiasDecision_Dec;
   Bool_t          J_psi_1S_Hlt1MBNoBiasDecision_TIS;
   Bool_t          J_psi_1S_Hlt1MBNoBiasDecision_TOS;
   Bool_t          J_psi_1S_Hlt1CharmCalibrationNoBiasDecision_Dec;
   Bool_t          J_psi_1S_Hlt1CharmCalibrationNoBiasDecision_TIS;
   Bool_t          J_psi_1S_Hlt1CharmCalibrationNoBiasDecision_TOS;
   Bool_t          J_psi_1S_Hlt1MBMicroBiasVeloDecision_Dec;
   Bool_t          J_psi_1S_Hlt1MBMicroBiasVeloDecision_TIS;
   Bool_t          J_psi_1S_Hlt1MBMicroBiasVeloDecision_TOS;
   Bool_t          J_psi_1S_Hlt1MBMicroBiasTStationDecision_Dec;
   Bool_t          J_psi_1S_Hlt1MBMicroBiasTStationDecision_TIS;
   Bool_t          J_psi_1S_Hlt1MBMicroBiasTStationDecision_TOS;
   Bool_t          J_psi_1S_Hlt1L0AnyDecision_Dec;
   Bool_t          J_psi_1S_Hlt1L0AnyDecision_TIS;
   Bool_t          J_psi_1S_Hlt1L0AnyDecision_TOS;
   Bool_t          J_psi_1S_Hlt1L0AnyNoSPDDecision_Dec;
   Bool_t          J_psi_1S_Hlt1L0AnyNoSPDDecision_TIS;
   Bool_t          J_psi_1S_Hlt1L0AnyNoSPDDecision_TOS;
   Bool_t          J_psi_1S_Hlt1L0HighSumETJetDecision_Dec;
   Bool_t          J_psi_1S_Hlt1L0HighSumETJetDecision_TIS;
   Bool_t          J_psi_1S_Hlt1L0HighSumETJetDecision_TOS;
   Bool_t          J_psi_1S_Hlt1NoPVPassThroughDecision_Dec;
   Bool_t          J_psi_1S_Hlt1NoPVPassThroughDecision_TIS;
   Bool_t          J_psi_1S_Hlt1NoPVPassThroughDecision_TOS;
   Bool_t          J_psi_1S_Hlt1DiProtonDecision_Dec;
   Bool_t          J_psi_1S_Hlt1DiProtonDecision_TIS;
   Bool_t          J_psi_1S_Hlt1DiProtonDecision_TOS;
   Bool_t          J_psi_1S_Hlt1DiProtonLowMultDecision_Dec;
   Bool_t          J_psi_1S_Hlt1DiProtonLowMultDecision_TIS;
   Bool_t          J_psi_1S_Hlt1DiProtonLowMultDecision_TOS;
   Bool_t          J_psi_1S_Hlt1BeamGasNoBeamBeam1Decision_Dec;
   Bool_t          J_psi_1S_Hlt1BeamGasNoBeamBeam1Decision_TIS;
   Bool_t          J_psi_1S_Hlt1BeamGasNoBeamBeam1Decision_TOS;
   Bool_t          J_psi_1S_Hlt1BeamGasNoBeamBeam2Decision_Dec;
   Bool_t          J_psi_1S_Hlt1BeamGasNoBeamBeam2Decision_TIS;
   Bool_t          J_psi_1S_Hlt1BeamGasNoBeamBeam2Decision_TOS;
   Bool_t          J_psi_1S_Hlt1BeamGasBeam1Decision_Dec;
   Bool_t          J_psi_1S_Hlt1BeamGasBeam1Decision_TIS;
   Bool_t          J_psi_1S_Hlt1BeamGasBeam1Decision_TOS;
   Bool_t          J_psi_1S_Hlt1BeamGasBeam2Decision_Dec;
   Bool_t          J_psi_1S_Hlt1BeamGasBeam2Decision_TIS;
   Bool_t          J_psi_1S_Hlt1BeamGasBeam2Decision_TOS;
   Bool_t          J_psi_1S_Hlt1BeamGasCrossingEnhancedBeam1Decision_Dec;
   Bool_t          J_psi_1S_Hlt1BeamGasCrossingEnhancedBeam1Decision_TIS;
   Bool_t          J_psi_1S_Hlt1BeamGasCrossingEnhancedBeam1Decision_TOS;
   Bool_t          J_psi_1S_Hlt1BeamGasCrossingEnhancedBeam2Decision_Dec;
   Bool_t          J_psi_1S_Hlt1BeamGasCrossingEnhancedBeam2Decision_TIS;
   Bool_t          J_psi_1S_Hlt1BeamGasCrossingEnhancedBeam2Decision_TOS;
   Bool_t          J_psi_1S_Hlt1BeamGasCrossingForcedRecoDecision_Dec;
   Bool_t          J_psi_1S_Hlt1BeamGasCrossingForcedRecoDecision_TIS;
   Bool_t          J_psi_1S_Hlt1BeamGasCrossingForcedRecoDecision_TOS;
   Bool_t          J_psi_1S_Hlt1BeamGasCrossingForcedRecoFullZDecision_Dec;
   Bool_t          J_psi_1S_Hlt1BeamGasCrossingForcedRecoFullZDecision_TIS;
   Bool_t          J_psi_1S_Hlt1BeamGasCrossingForcedRecoFullZDecision_TOS;
   Bool_t          J_psi_1S_Hlt1BeamGasHighRhoVerticesDecision_Dec;
   Bool_t          J_psi_1S_Hlt1BeamGasHighRhoVerticesDecision_TIS;
   Bool_t          J_psi_1S_Hlt1BeamGasHighRhoVerticesDecision_TOS;
   Bool_t          J_psi_1S_Hlt1ODINTechnicalDecision_Dec;
   Bool_t          J_psi_1S_Hlt1ODINTechnicalDecision_TIS;
   Bool_t          J_psi_1S_Hlt1ODINTechnicalDecision_TOS;
   Bool_t          J_psi_1S_Hlt1Tell1ErrorDecision_Dec;
   Bool_t          J_psi_1S_Hlt1Tell1ErrorDecision_TIS;
   Bool_t          J_psi_1S_Hlt1Tell1ErrorDecision_TOS;
   Bool_t          J_psi_1S_Hlt1VeloClosingMicroBiasDecision_Dec;
   Bool_t          J_psi_1S_Hlt1VeloClosingMicroBiasDecision_TIS;
   Bool_t          J_psi_1S_Hlt1VeloClosingMicroBiasDecision_TOS;
   Bool_t          J_psi_1S_Hlt1VertexDisplVertexDecision_Dec;
   Bool_t          J_psi_1S_Hlt1VertexDisplVertexDecision_TIS;
   Bool_t          J_psi_1S_Hlt1VertexDisplVertexDecision_TOS;
   Bool_t          J_psi_1S_Hlt1BeamGasCrossingParasiticDecision_Dec;
   Bool_t          J_psi_1S_Hlt1BeamGasCrossingParasiticDecision_TIS;
   Bool_t          J_psi_1S_Hlt1BeamGasCrossingParasiticDecision_TOS;
   Bool_t          J_psi_1S_Hlt1ErrorEventDecision_Dec;
   Bool_t          J_psi_1S_Hlt1ErrorEventDecision_TIS;
   Bool_t          J_psi_1S_Hlt1ErrorEventDecision_TOS;
   Bool_t          J_psi_1S_Hlt1GlobalDecision_Dec;
   Bool_t          J_psi_1S_Hlt1GlobalDecision_TIS;
   Bool_t          J_psi_1S_Hlt1GlobalDecision_TOS;
   Bool_t          J_psi_1S_Hlt1TrackMuonNoSPDDecision_Dec;
   Bool_t          J_psi_1S_Hlt1TrackMuonNoSPDDecision_TIS;
   Bool_t          J_psi_1S_Hlt1TrackMuonNoSPDDecision_TOS;
   Bool_t          J_psi_1S_Hlt1TrackMVADecision_Dec;
   Bool_t          J_psi_1S_Hlt1TrackMVADecision_TIS;
   Bool_t          J_psi_1S_Hlt1TrackMVADecision_TOS;
   Bool_t          J_psi_1S_Hlt1TwoTrackMVADecision_Dec;
   Bool_t          J_psi_1S_Hlt1TwoTrackMVADecision_TIS;
   Bool_t          J_psi_1S_Hlt1TwoTrackMVADecision_TOS;
   Bool_t          J_psi_1S_Hlt2SingleMuonNoSPDDecision_Dec;
   Bool_t          J_psi_1S_Hlt2SingleMuonNoSPDDecision_TIS;
   Bool_t          J_psi_1S_Hlt2SingleMuonNoSPDDecision_TOS;
   Bool_t          J_psi_1S_Hlt2SingleElectronTFLowPtDecision_Dec;
   Bool_t          J_psi_1S_Hlt2SingleElectronTFLowPtDecision_TIS;
   Bool_t          J_psi_1S_Hlt2SingleElectronTFLowPtDecision_TOS;
   Bool_t          J_psi_1S_Hlt2SingleElectronTFHighPtDecision_Dec;
   Bool_t          J_psi_1S_Hlt2SingleElectronTFHighPtDecision_TIS;
   Bool_t          J_psi_1S_Hlt2SingleElectronTFHighPtDecision_TOS;
   Bool_t          J_psi_1S_Hlt2DiElectronHighMassDecision_Dec;
   Bool_t          J_psi_1S_Hlt2DiElectronHighMassDecision_TIS;
   Bool_t          J_psi_1S_Hlt2DiElectronHighMassDecision_TOS;
   Bool_t          J_psi_1S_Hlt2DiElectronBDecision_Dec;
   Bool_t          J_psi_1S_Hlt2DiElectronBDecision_TIS;
   Bool_t          J_psi_1S_Hlt2DiElectronBDecision_TOS;
   Bool_t          J_psi_1S_Hlt2B2HHLTUnbiasedDecision_Dec;
   Bool_t          J_psi_1S_Hlt2B2HHLTUnbiasedDecision_TIS;
   Bool_t          J_psi_1S_Hlt2B2HHLTUnbiasedDecision_TOS;
   Bool_t          J_psi_1S_Hlt2Topo2BodySimpleDecision_Dec;
   Bool_t          J_psi_1S_Hlt2Topo2BodySimpleDecision_TIS;
   Bool_t          J_psi_1S_Hlt2Topo2BodySimpleDecision_TOS;
   Bool_t          J_psi_1S_Hlt2Topo3BodySimpleDecision_Dec;
   Bool_t          J_psi_1S_Hlt2Topo3BodySimpleDecision_TIS;
   Bool_t          J_psi_1S_Hlt2Topo3BodySimpleDecision_TOS;
   Bool_t          J_psi_1S_Hlt2Topo4BodySimpleDecision_Dec;
   Bool_t          J_psi_1S_Hlt2Topo4BodySimpleDecision_TIS;
   Bool_t          J_psi_1S_Hlt2Topo4BodySimpleDecision_TOS;
   Bool_t          J_psi_1S_Hlt2Topo2BodyBBDTDecision_Dec;
   Bool_t          J_psi_1S_Hlt2Topo2BodyBBDTDecision_TIS;
   Bool_t          J_psi_1S_Hlt2Topo2BodyBBDTDecision_TOS;
   Bool_t          J_psi_1S_Hlt2Topo3BodyBBDTDecision_Dec;
   Bool_t          J_psi_1S_Hlt2Topo3BodyBBDTDecision_TIS;
   Bool_t          J_psi_1S_Hlt2Topo3BodyBBDTDecision_TOS;
   Bool_t          J_psi_1S_Hlt2Topo4BodyBBDTDecision_Dec;
   Bool_t          J_psi_1S_Hlt2Topo4BodyBBDTDecision_TIS;
   Bool_t          J_psi_1S_Hlt2Topo4BodyBBDTDecision_TOS;
   Bool_t          J_psi_1S_Hlt2TopoMu2BodyBBDTDecision_Dec;
   Bool_t          J_psi_1S_Hlt2TopoMu2BodyBBDTDecision_TIS;
   Bool_t          J_psi_1S_Hlt2TopoMu2BodyBBDTDecision_TOS;
   Bool_t          J_psi_1S_Hlt2TopoMu3BodyBBDTDecision_Dec;
   Bool_t          J_psi_1S_Hlt2TopoMu3BodyBBDTDecision_TIS;
   Bool_t          J_psi_1S_Hlt2TopoMu3BodyBBDTDecision_TOS;
   Bool_t          J_psi_1S_Hlt2TopoMu4BodyBBDTDecision_Dec;
   Bool_t          J_psi_1S_Hlt2TopoMu4BodyBBDTDecision_TIS;
   Bool_t          J_psi_1S_Hlt2TopoMu4BodyBBDTDecision_TOS;
   Bool_t          J_psi_1S_Hlt2TopoE2BodyBBDTDecision_Dec;
   Bool_t          J_psi_1S_Hlt2TopoE2BodyBBDTDecision_TIS;
   Bool_t          J_psi_1S_Hlt2TopoE2BodyBBDTDecision_TOS;
   Bool_t          J_psi_1S_Hlt2TopoE3BodyBBDTDecision_Dec;
   Bool_t          J_psi_1S_Hlt2TopoE3BodyBBDTDecision_TIS;
   Bool_t          J_psi_1S_Hlt2TopoE3BodyBBDTDecision_TOS;
   Bool_t          J_psi_1S_Hlt2TopoE4BodyBBDTDecision_Dec;
   Bool_t          J_psi_1S_Hlt2TopoE4BodyBBDTDecision_TIS;
   Bool_t          J_psi_1S_Hlt2TopoE4BodyBBDTDecision_TOS;
   Bool_t          J_psi_1S_Hlt2IncPhiDecision_Dec;
   Bool_t          J_psi_1S_Hlt2IncPhiDecision_TIS;
   Bool_t          J_psi_1S_Hlt2IncPhiDecision_TOS;
   Bool_t          J_psi_1S_Hlt2IncPhiSidebandsDecision_Dec;
   Bool_t          J_psi_1S_Hlt2IncPhiSidebandsDecision_TIS;
   Bool_t          J_psi_1S_Hlt2IncPhiSidebandsDecision_TOS;
   Bool_t          J_psi_1S_Hlt2MuonFromHLT1Decision_Dec;
   Bool_t          J_psi_1S_Hlt2MuonFromHLT1Decision_TIS;
   Bool_t          J_psi_1S_Hlt2MuonFromHLT1Decision_TOS;
   Bool_t          J_psi_1S_Hlt2SingleMuonDecision_Dec;
   Bool_t          J_psi_1S_Hlt2SingleMuonDecision_TIS;
   Bool_t          J_psi_1S_Hlt2SingleMuonDecision_TOS;
   Bool_t          J_psi_1S_Hlt2SingleMuonHighPTDecision_Dec;
   Bool_t          J_psi_1S_Hlt2SingleMuonHighPTDecision_TIS;
   Bool_t          J_psi_1S_Hlt2SingleMuonHighPTDecision_TOS;
   Bool_t          J_psi_1S_Hlt2SingleMuonLowPTDecision_Dec;
   Bool_t          J_psi_1S_Hlt2SingleMuonLowPTDecision_TIS;
   Bool_t          J_psi_1S_Hlt2SingleMuonLowPTDecision_TOS;
   Bool_t          J_psi_1S_Hlt2DiMuonDecision_Dec;
   Bool_t          J_psi_1S_Hlt2DiMuonDecision_TIS;
   Bool_t          J_psi_1S_Hlt2DiMuonDecision_TOS;
   Bool_t          J_psi_1S_Hlt2DiMuonLowMassDecision_Dec;
   Bool_t          J_psi_1S_Hlt2DiMuonLowMassDecision_TIS;
   Bool_t          J_psi_1S_Hlt2DiMuonLowMassDecision_TOS;
   Bool_t          J_psi_1S_Hlt2DiMuonJPsiDecision_Dec;
   Bool_t          J_psi_1S_Hlt2DiMuonJPsiDecision_TIS;
   Bool_t          J_psi_1S_Hlt2DiMuonJPsiDecision_TOS;
   Bool_t          J_psi_1S_Hlt2DiMuonJPsiHighPTDecision_Dec;
   Bool_t          J_psi_1S_Hlt2DiMuonJPsiHighPTDecision_TIS;
   Bool_t          J_psi_1S_Hlt2DiMuonJPsiHighPTDecision_TOS;
   Bool_t          J_psi_1S_Hlt2DiMuonPsi2SDecision_Dec;
   Bool_t          J_psi_1S_Hlt2DiMuonPsi2SDecision_TIS;
   Bool_t          J_psi_1S_Hlt2DiMuonPsi2SDecision_TOS;
   Bool_t          J_psi_1S_Hlt2DiMuonBDecision_Dec;
   Bool_t          J_psi_1S_Hlt2DiMuonBDecision_TIS;
   Bool_t          J_psi_1S_Hlt2DiMuonBDecision_TOS;
   Bool_t          J_psi_1S_Hlt2DiMuonZDecision_Dec;
   Bool_t          J_psi_1S_Hlt2DiMuonZDecision_TIS;
   Bool_t          J_psi_1S_Hlt2DiMuonZDecision_TOS;
   Bool_t          J_psi_1S_Hlt2DiMuonDY1Decision_Dec;
   Bool_t          J_psi_1S_Hlt2DiMuonDY1Decision_TIS;
   Bool_t          J_psi_1S_Hlt2DiMuonDY1Decision_TOS;
   Bool_t          J_psi_1S_Hlt2DiMuonDY2Decision_Dec;
   Bool_t          J_psi_1S_Hlt2DiMuonDY2Decision_TIS;
   Bool_t          J_psi_1S_Hlt2DiMuonDY2Decision_TOS;
   Bool_t          J_psi_1S_Hlt2DiMuonDY3Decision_Dec;
   Bool_t          J_psi_1S_Hlt2DiMuonDY3Decision_TIS;
   Bool_t          J_psi_1S_Hlt2DiMuonDY3Decision_TOS;
   Bool_t          J_psi_1S_Hlt2DiMuonDY4Decision_Dec;
   Bool_t          J_psi_1S_Hlt2DiMuonDY4Decision_TIS;
   Bool_t          J_psi_1S_Hlt2DiMuonDY4Decision_TOS;
   Bool_t          J_psi_1S_Hlt2DiMuonDetachedDecision_Dec;
   Bool_t          J_psi_1S_Hlt2DiMuonDetachedDecision_TIS;
   Bool_t          J_psi_1S_Hlt2DiMuonDetachedDecision_TOS;
   Bool_t          J_psi_1S_Hlt2DiMuonDetachedHeavyDecision_Dec;
   Bool_t          J_psi_1S_Hlt2DiMuonDetachedHeavyDecision_TIS;
   Bool_t          J_psi_1S_Hlt2DiMuonDetachedHeavyDecision_TOS;
   Bool_t          J_psi_1S_Hlt2DiMuonDetachedJPsiDecision_Dec;
   Bool_t          J_psi_1S_Hlt2DiMuonDetachedJPsiDecision_TIS;
   Bool_t          J_psi_1S_Hlt2DiMuonDetachedJPsiDecision_TOS;
   Bool_t          J_psi_1S_Hlt2DiMuonNoPVDecision_Dec;
   Bool_t          J_psi_1S_Hlt2DiMuonNoPVDecision_TIS;
   Bool_t          J_psi_1S_Hlt2DiMuonNoPVDecision_TOS;
   Bool_t          J_psi_1S_Hlt2TriMuonDetachedDecision_Dec;
   Bool_t          J_psi_1S_Hlt2TriMuonDetachedDecision_TIS;
   Bool_t          J_psi_1S_Hlt2TriMuonDetachedDecision_TOS;
   Bool_t          J_psi_1S_Hlt2TriMuonTauDecision_Dec;
   Bool_t          J_psi_1S_Hlt2TriMuonTauDecision_TIS;
   Bool_t          J_psi_1S_Hlt2TriMuonTauDecision_TOS;
   Bool_t          J_psi_1S_Hlt2Topo2BodyDecision_Dec;
   Bool_t          J_psi_1S_Hlt2Topo2BodyDecision_TIS;
   Bool_t          J_psi_1S_Hlt2Topo2BodyDecision_TOS;
   Bool_t          J_psi_1S_Hlt2Topo3BodyDecision_Dec;
   Bool_t          J_psi_1S_Hlt2Topo3BodyDecision_TIS;
   Bool_t          J_psi_1S_Hlt2Topo3BodyDecision_TOS;
   Bool_t          J_psi_1S_Hlt2Topo4BodyDecision_Dec;
   Bool_t          J_psi_1S_Hlt2Topo4BodyDecision_TIS;
   Bool_t          J_psi_1S_Hlt2Topo4BodyDecision_TOS;
   Bool_t          J_psi_1S_Hlt2TopoMu2BodyDecision_Dec;
   Bool_t          J_psi_1S_Hlt2TopoMu2BodyDecision_TIS;
   Bool_t          J_psi_1S_Hlt2TopoMu2BodyDecision_TOS;
   Bool_t          J_psi_1S_Hlt2TopoMu3BodyDecision_Dec;
   Bool_t          J_psi_1S_Hlt2TopoMu3BodyDecision_TIS;
   Bool_t          J_psi_1S_Hlt2TopoMu3BodyDecision_TOS;
   Bool_t          J_psi_1S_Hlt2TopoMu4BodyDecision_Dec;
   Bool_t          J_psi_1S_Hlt2TopoMu4BodyDecision_TIS;
   Bool_t          J_psi_1S_Hlt2TopoMu4BodyDecision_TOS;
   Double_t        muplus_LOKI_ENERGY;
   Double_t        muplus_LOKI_ETA;
   Double_t        muplus_LOKI_PHI;
   Double_t        muplus_MINIP;
   Double_t        muplus_MINIPCHI2;
   Double_t        muplus_MINIPNEXTBEST;
   Double_t        muplus_MINIPCHI2NEXTBEST;
   Float_t         muplus_AllIP[100];   //[nPV]
   Float_t         muplus_AllIPchi2[100];   //[nPV]
   Double_t        muplus_OWNPV_X;
   Double_t        muplus_OWNPV_Y;
   Double_t        muplus_OWNPV_Z;
   Double_t        muplus_OWNPV_XERR;
   Double_t        muplus_OWNPV_YERR;
   Double_t        muplus_OWNPV_ZERR;
   Double_t        muplus_OWNPV_CHI2;
   Int_t           muplus_OWNPV_NDOF;
   Float_t         muplus_OWNPV_COV_[3][3];
   Double_t        muplus_IP_OWNPV;
   Double_t        muplus_IPCHI2_OWNPV;
   Double_t        muplus_TOPPV_X;
   Double_t        muplus_TOPPV_Y;
   Double_t        muplus_TOPPV_Z;
   Double_t        muplus_TOPPV_XERR;
   Double_t        muplus_TOPPV_YERR;
   Double_t        muplus_TOPPV_ZERR;
   Double_t        muplus_TOPPV_CHI2;
   Int_t           muplus_TOPPV_NDOF;
   Float_t         muplus_TOPPV_COV_[3][3];
   Double_t        muplus_IP_TOPPV;
   Double_t        muplus_IPCHI2_TOPPV;
   Double_t        muplus_ORIVX_X;
   Double_t        muplus_ORIVX_Y;
   Double_t        muplus_ORIVX_Z;
   Double_t        muplus_ORIVX_XERR;
   Double_t        muplus_ORIVX_YERR;
   Double_t        muplus_ORIVX_ZERR;
   Double_t        muplus_ORIVX_CHI2;
   Int_t           muplus_ORIVX_NDOF;
   Float_t         muplus_ORIVX_COV_[3][3];
   Double_t        muplus_IP_ORIVX;
   Double_t        muplus_IPCHI2_ORIVX;
   Double_t        muplus_P;
   Double_t        muplus_PT;
   Double_t        muplus_PE;
   Double_t        muplus_PX;
   Double_t        muplus_PY;
   Double_t        muplus_PZ;
   Double_t        muplus_M;
   Int_t           muplus_ID;
   Double_t        muplus_PIDe;
   Double_t        muplus_PIDmu;
   Double_t        muplus_PIDK;
   Double_t        muplus_PIDp;
   Double_t        muplus_ProbNNe;
   Double_t        muplus_ProbNNk;
   Double_t        muplus_ProbNNp;
   Double_t        muplus_ProbNNpi;
   Double_t        muplus_ProbNNmu;
   Double_t        muplus_ProbNNghost;
   Bool_t          muplus_hasMuon;
   Bool_t          muplus_isMuon;
   Bool_t          muplus_hasRich;
   Bool_t          muplus_hasCalo;
   Int_t           muplus_TRACK_Type;
   Int_t           muplus_TRACK_Key;
   Double_t        muplus_TRACK_CHI2;
   Int_t           muplus_TRACK_NDOF;
   Double_t        muplus_TRACK_CHI2NDOF;
   Double_t        muplus_TRACK_PCHI2;
   Double_t        muplus_TRACK_VeloCHI2NDOF;
   Double_t        muplus_TRACK_TCHI2NDOF;
   Double_t        muplus_VELO_UTID;
   Double_t        muplus_TRACK_FirstMeasurementX;
   Double_t        muplus_TRACK_FirstMeasurementY;
   Double_t        muplus_TRACK_FirstMeasurementZ;
   Double_t        muplus_TRACK_MatchCHI2;
   Double_t        muplus_TRACK_GhostProb;
   Double_t        muplus_TRACK_CloneDist;
   Double_t        muplus_TRACK_Likelihood;
   Double_t        muplus_X;
   Double_t        muplus_Y;
   Double_t        muminus_LOKI_ENERGY;
   Double_t        muminus_LOKI_ETA;
   Double_t        muminus_LOKI_PHI;
   Double_t        muminus_MINIP;
   Double_t        muminus_MINIPCHI2;
   Double_t        muminus_MINIPNEXTBEST;
   Double_t        muminus_MINIPCHI2NEXTBEST;
   Float_t         muminus_AllIP[100];   //[nPV]
   Float_t         muminus_AllIPchi2[100];   //[nPV]
   Double_t        muminus_OWNPV_X;
   Double_t        muminus_OWNPV_Y;
   Double_t        muminus_OWNPV_Z;
   Double_t        muminus_OWNPV_XERR;
   Double_t        muminus_OWNPV_YERR;
   Double_t        muminus_OWNPV_ZERR;
   Double_t        muminus_OWNPV_CHI2;
   Int_t           muminus_OWNPV_NDOF;
   Float_t         muminus_OWNPV_COV_[3][3];
   Double_t        muminus_IP_OWNPV;
   Double_t        muminus_IPCHI2_OWNPV;
   Double_t        muminus_TOPPV_X;
   Double_t        muminus_TOPPV_Y;
   Double_t        muminus_TOPPV_Z;
   Double_t        muminus_TOPPV_XERR;
   Double_t        muminus_TOPPV_YERR;
   Double_t        muminus_TOPPV_ZERR;
   Double_t        muminus_TOPPV_CHI2;
   Int_t           muminus_TOPPV_NDOF;
   Float_t         muminus_TOPPV_COV_[3][3];
   Double_t        muminus_IP_TOPPV;
   Double_t        muminus_IPCHI2_TOPPV;
   Double_t        muminus_ORIVX_X;
   Double_t        muminus_ORIVX_Y;
   Double_t        muminus_ORIVX_Z;
   Double_t        muminus_ORIVX_XERR;
   Double_t        muminus_ORIVX_YERR;
   Double_t        muminus_ORIVX_ZERR;
   Double_t        muminus_ORIVX_CHI2;
   Int_t           muminus_ORIVX_NDOF;
   Float_t         muminus_ORIVX_COV_[3][3];
   Double_t        muminus_IP_ORIVX;
   Double_t        muminus_IPCHI2_ORIVX;
   Double_t        muminus_P;
   Double_t        muminus_PT;
   Double_t        muminus_PE;
   Double_t        muminus_PX;
   Double_t        muminus_PY;
   Double_t        muminus_PZ;
   Double_t        muminus_M;
   Int_t           muminus_ID;
   Double_t        muminus_PIDe;
   Double_t        muminus_PIDmu;
   Double_t        muminus_PIDK;
   Double_t        muminus_PIDp;
   Double_t        muminus_ProbNNe;
   Double_t        muminus_ProbNNk;
   Double_t        muminus_ProbNNp;
   Double_t        muminus_ProbNNpi;
   Double_t        muminus_ProbNNmu;
   Double_t        muminus_ProbNNghost;
   Bool_t          muminus_hasMuon;
   Bool_t          muminus_isMuon;
   Bool_t          muminus_hasRich;
   Bool_t          muminus_hasCalo;
   Int_t           muminus_TRACK_Type;
   Int_t           muminus_TRACK_Key;
   Double_t        muminus_TRACK_CHI2;
   Int_t           muminus_TRACK_NDOF;
   Double_t        muminus_TRACK_CHI2NDOF;
   Double_t        muminus_TRACK_PCHI2;
   Double_t        muminus_TRACK_VeloCHI2NDOF;
   Double_t        muminus_TRACK_TCHI2NDOF;
   Double_t        muminus_VELO_UTID;
   Double_t        muminus_TRACK_FirstMeasurementX;
   Double_t        muminus_TRACK_FirstMeasurementY;
   Double_t        muminus_TRACK_FirstMeasurementZ;
   Double_t        muminus_TRACK_MatchCHI2;
   Double_t        muminus_TRACK_GhostProb;
   Double_t        muminus_TRACK_CloneDist;
   Double_t        muminus_TRACK_Likelihood;
   Double_t        muminus_X;
   Double_t        muminus_Y;
   Double_t        Kst_892_0_LOKI_ENERGY;
   Double_t        Kst_892_0_LOKI_ETA;
   Double_t        Kst_892_0_LOKI_PHI;
   Double_t        Kst_892_0_MINIP;
   Double_t        Kst_892_0_MINIPCHI2;
   Double_t        Kst_892_0_MINIPNEXTBEST;
   Double_t        Kst_892_0_MINIPCHI2NEXTBEST;
   Float_t         Kst_892_0_AllIP[100];   //[nPV]
   Float_t         Kst_892_0_AllIPchi2[100];   //[nPV]
   Float_t         Kst_892_0_AllDIRA[100];   //[nPV]
   Double_t        Kst_892_0_ENDVERTEX_X;
   Double_t        Kst_892_0_ENDVERTEX_Y;
   Double_t        Kst_892_0_ENDVERTEX_Z;
   Double_t        Kst_892_0_ENDVERTEX_XERR;
   Double_t        Kst_892_0_ENDVERTEX_YERR;
   Double_t        Kst_892_0_ENDVERTEX_ZERR;
   Double_t        Kst_892_0_ENDVERTEX_CHI2;
   Int_t           Kst_892_0_ENDVERTEX_NDOF;
   Float_t         Kst_892_0_ENDVERTEX_COV_[3][3];
   Double_t        Kst_892_0_OWNPV_X;
   Double_t        Kst_892_0_OWNPV_Y;
   Double_t        Kst_892_0_OWNPV_Z;
   Double_t        Kst_892_0_OWNPV_XERR;
   Double_t        Kst_892_0_OWNPV_YERR;
   Double_t        Kst_892_0_OWNPV_ZERR;
   Double_t        Kst_892_0_OWNPV_CHI2;
   Int_t           Kst_892_0_OWNPV_NDOF;
   Float_t         Kst_892_0_OWNPV_COV_[3][3];
   Double_t        Kst_892_0_IP_OWNPV;
   Double_t        Kst_892_0_IPCHI2_OWNPV;
   Double_t        Kst_892_0_FD_OWNPV;
   Double_t        Kst_892_0_FDCHI2_OWNPV;
   Double_t        Kst_892_0_DIRA_OWNPV;
   Double_t        Kst_892_0_TOPPV_X;
   Double_t        Kst_892_0_TOPPV_Y;
   Double_t        Kst_892_0_TOPPV_Z;
   Double_t        Kst_892_0_TOPPV_XERR;
   Double_t        Kst_892_0_TOPPV_YERR;
   Double_t        Kst_892_0_TOPPV_ZERR;
   Double_t        Kst_892_0_TOPPV_CHI2;
   Int_t           Kst_892_0_TOPPV_NDOF;
   Float_t         Kst_892_0_TOPPV_COV_[3][3];
   Double_t        Kst_892_0_IP_TOPPV;
   Double_t        Kst_892_0_IPCHI2_TOPPV;
   Double_t        Kst_892_0_FD_TOPPV;
   Double_t        Kst_892_0_FDCHI2_TOPPV;
   Double_t        Kst_892_0_DIRA_TOPPV;
   Double_t        Kst_892_0_ORIVX_X;
   Double_t        Kst_892_0_ORIVX_Y;
   Double_t        Kst_892_0_ORIVX_Z;
   Double_t        Kst_892_0_ORIVX_XERR;
   Double_t        Kst_892_0_ORIVX_YERR;
   Double_t        Kst_892_0_ORIVX_ZERR;
   Double_t        Kst_892_0_ORIVX_CHI2;
   Int_t           Kst_892_0_ORIVX_NDOF;
   Float_t         Kst_892_0_ORIVX_COV_[3][3];
   Double_t        Kst_892_0_IP_ORIVX;
   Double_t        Kst_892_0_IPCHI2_ORIVX;
   Double_t        Kst_892_0_FD_ORIVX;
   Double_t        Kst_892_0_FDCHI2_ORIVX;
   Double_t        Kst_892_0_DIRA_ORIVX;
   Double_t        Kst_892_0_P;
   Double_t        Kst_892_0_PT;
   Double_t        Kst_892_0_PE;
   Double_t        Kst_892_0_PX;
   Double_t        Kst_892_0_PY;
   Double_t        Kst_892_0_PZ;
   Double_t        Kst_892_0_MM;
   Double_t        Kst_892_0_MMERR;
   Double_t        Kst_892_0_M;
   Int_t           Kst_892_0_ID;
   Double_t        Kst_892_0_TAU;
   Double_t        Kst_892_0_TAUERR;
   Double_t        Kst_892_0_TAUCHI2;
   Double_t        Kst_892_0_X;
   Double_t        Kst_892_0_Y;
   Double_t        Kplus_LOKI_ENERGY;
   Double_t        Kplus_LOKI_ETA;
   Double_t        Kplus_LOKI_PHI;
   Double_t        Kplus_MINIP;
   Double_t        Kplus_MINIPCHI2;
   Double_t        Kplus_MINIPNEXTBEST;
   Double_t        Kplus_MINIPCHI2NEXTBEST;
   Float_t         Kplus_AllIP[100];   //[nPV]
   Float_t         Kplus_AllIPchi2[100];   //[nPV]
   Double_t        Kplus_OWNPV_X;
   Double_t        Kplus_OWNPV_Y;
   Double_t        Kplus_OWNPV_Z;
   Double_t        Kplus_OWNPV_XERR;
   Double_t        Kplus_OWNPV_YERR;
   Double_t        Kplus_OWNPV_ZERR;
   Double_t        Kplus_OWNPV_CHI2;
   Int_t           Kplus_OWNPV_NDOF;
   Float_t         Kplus_OWNPV_COV_[3][3];
   Double_t        Kplus_IP_OWNPV;
   Double_t        Kplus_IPCHI2_OWNPV;
   Double_t        Kplus_TOPPV_X;
   Double_t        Kplus_TOPPV_Y;
   Double_t        Kplus_TOPPV_Z;
   Double_t        Kplus_TOPPV_XERR;
   Double_t        Kplus_TOPPV_YERR;
   Double_t        Kplus_TOPPV_ZERR;
   Double_t        Kplus_TOPPV_CHI2;
   Int_t           Kplus_TOPPV_NDOF;
   Float_t         Kplus_TOPPV_COV_[3][3];
   Double_t        Kplus_IP_TOPPV;
   Double_t        Kplus_IPCHI2_TOPPV;
   Double_t        Kplus_ORIVX_X;
   Double_t        Kplus_ORIVX_Y;
   Double_t        Kplus_ORIVX_Z;
   Double_t        Kplus_ORIVX_XERR;
   Double_t        Kplus_ORIVX_YERR;
   Double_t        Kplus_ORIVX_ZERR;
   Double_t        Kplus_ORIVX_CHI2;
   Int_t           Kplus_ORIVX_NDOF;
   Float_t         Kplus_ORIVX_COV_[3][3];
   Double_t        Kplus_IP_ORIVX;
   Double_t        Kplus_IPCHI2_ORIVX;
   Double_t        Kplus_P;
   Double_t        Kplus_PT;
   Double_t        Kplus_PE;
   Double_t        Kplus_PX;
   Double_t        Kplus_PY;
   Double_t        Kplus_PZ;
   Double_t        Kplus_M;
   Int_t           Kplus_ID;
   Double_t        Kplus_PIDe;
   Double_t        Kplus_PIDmu;
   Double_t        Kplus_PIDK;
   Double_t        Kplus_PIDp;
   Double_t        Kplus_ProbNNe;
   Double_t        Kplus_ProbNNk;
   Double_t        Kplus_ProbNNp;
   Double_t        Kplus_ProbNNpi;
   Double_t        Kplus_ProbNNmu;
   Double_t        Kplus_ProbNNghost;
   Bool_t          Kplus_hasMuon;
   Bool_t          Kplus_isMuon;
   Bool_t          Kplus_hasRich;
   Bool_t          Kplus_hasCalo;
   Int_t           Kplus_TRACK_Type;
   Int_t           Kplus_TRACK_Key;
   Double_t        Kplus_TRACK_CHI2;
   Int_t           Kplus_TRACK_NDOF;
   Double_t        Kplus_TRACK_CHI2NDOF;
   Double_t        Kplus_TRACK_PCHI2;
   Double_t        Kplus_TRACK_VeloCHI2NDOF;
   Double_t        Kplus_TRACK_TCHI2NDOF;
   Double_t        Kplus_VELO_UTID;
   Double_t        Kplus_TRACK_FirstMeasurementX;
   Double_t        Kplus_TRACK_FirstMeasurementY;
   Double_t        Kplus_TRACK_FirstMeasurementZ;
   Double_t        Kplus_TRACK_MatchCHI2;
   Double_t        Kplus_TRACK_GhostProb;
   Double_t        Kplus_TRACK_CloneDist;
   Double_t        Kplus_TRACK_Likelihood;
   Double_t        Kplus_X;
   Double_t        Kplus_Y;
   Double_t        piminus_LOKI_ENERGY;
   Double_t        piminus_LOKI_ETA;
   Double_t        piminus_LOKI_PHI;
   Double_t        piminus_MINIP;
   Double_t        piminus_MINIPCHI2;
   Double_t        piminus_MINIPNEXTBEST;
   Double_t        piminus_MINIPCHI2NEXTBEST;
   Float_t         piminus_AllIP[100];   //[nPV]
   Float_t         piminus_AllIPchi2[100];   //[nPV]
   Double_t        piminus_OWNPV_X;
   Double_t        piminus_OWNPV_Y;
   Double_t        piminus_OWNPV_Z;
   Double_t        piminus_OWNPV_XERR;
   Double_t        piminus_OWNPV_YERR;
   Double_t        piminus_OWNPV_ZERR;
   Double_t        piminus_OWNPV_CHI2;
   Int_t           piminus_OWNPV_NDOF;
   Float_t         piminus_OWNPV_COV_[3][3];
   Double_t        piminus_IP_OWNPV;
   Double_t        piminus_IPCHI2_OWNPV;
   Double_t        piminus_TOPPV_X;
   Double_t        piminus_TOPPV_Y;
   Double_t        piminus_TOPPV_Z;
   Double_t        piminus_TOPPV_XERR;
   Double_t        piminus_TOPPV_YERR;
   Double_t        piminus_TOPPV_ZERR;
   Double_t        piminus_TOPPV_CHI2;
   Int_t           piminus_TOPPV_NDOF;
   Float_t         piminus_TOPPV_COV_[3][3];
   Double_t        piminus_IP_TOPPV;
   Double_t        piminus_IPCHI2_TOPPV;
   Double_t        piminus_ORIVX_X;
   Double_t        piminus_ORIVX_Y;
   Double_t        piminus_ORIVX_Z;
   Double_t        piminus_ORIVX_XERR;
   Double_t        piminus_ORIVX_YERR;
   Double_t        piminus_ORIVX_ZERR;
   Double_t        piminus_ORIVX_CHI2;
   Int_t           piminus_ORIVX_NDOF;
   Float_t         piminus_ORIVX_COV_[3][3];
   Double_t        piminus_IP_ORIVX;
   Double_t        piminus_IPCHI2_ORIVX;
   Double_t        piminus_P;
   Double_t        piminus_PT;
   Double_t        piminus_PE;
   Double_t        piminus_PX;
   Double_t        piminus_PY;
   Double_t        piminus_PZ;
   Double_t        piminus_M;
   Int_t           piminus_ID;
   Double_t        piminus_PIDe;
   Double_t        piminus_PIDmu;
   Double_t        piminus_PIDK;
   Double_t        piminus_PIDp;
   Double_t        piminus_ProbNNe;
   Double_t        piminus_ProbNNk;
   Double_t        piminus_ProbNNp;
   Double_t        piminus_ProbNNpi;
   Double_t        piminus_ProbNNmu;
   Double_t        piminus_ProbNNghost;
   Bool_t          piminus_hasMuon;
   Bool_t          piminus_isMuon;
   Bool_t          piminus_hasRich;
   Bool_t          piminus_hasCalo;
   Int_t           piminus_TRACK_Type;
   Int_t           piminus_TRACK_Key;
   Double_t        piminus_TRACK_CHI2;
   Int_t           piminus_TRACK_NDOF;
   Double_t        piminus_TRACK_CHI2NDOF;
   Double_t        piminus_TRACK_PCHI2;
   Double_t        piminus_TRACK_VeloCHI2NDOF;
   Double_t        piminus_TRACK_TCHI2NDOF;
   Double_t        piminus_VELO_UTID;
   Double_t        piminus_TRACK_FirstMeasurementX;
   Double_t        piminus_TRACK_FirstMeasurementY;
   Double_t        piminus_TRACK_FirstMeasurementZ;
   Double_t        piminus_TRACK_MatchCHI2;
   Double_t        piminus_TRACK_GhostProb;
   Double_t        piminus_TRACK_CloneDist;
   Double_t        piminus_TRACK_Likelihood;
   Double_t        piminus_X;
   Double_t        piminus_Y;
   UInt_t          nCandidate;
   ULong64_t       totCandidates;
   ULong64_t       EventInSequence;
   UInt_t          runNumber;
   ULong64_t       eventNumber;
   UInt_t          BCID;
   Int_t           BCType;
   UInt_t          OdinTCK;
   UInt_t          L0DUTCK;
   UInt_t          HLT1TCK;
   UInt_t          HLT2TCK;
   ULong64_t       GpsTime;
   Int_t           GpsYear;
   Int_t           GpsMonth;
   Int_t           GpsDay;
   Int_t           GpsHour;
   Int_t           GpsMinute;
   Double_t        GpsSecond;
   Int_t           TriggerType;
   Short_t         Polarity;
   Float_t         PVX[100];   //[nPV]
   Float_t         PVY[100];   //[nPV]
   Float_t         PVZ[100];   //[nPV]
   Float_t         PVXERR[100];   //[nPV]
   Float_t         PVYERR[100];   //[nPV]
   Float_t         PVZERR[100];   //[nPV]
   Float_t         PVCHI2[100];   //[nPV]
   Float_t         PVNDOF[100];   //[nPV]
   Float_t         PVNTRACKS[100];   //[nPV]
   Int_t           nPVs;
   Int_t           nTracks;
   Int_t           nLongTracks;
   Int_t           nDownstreamTracks;
   Int_t           nUpstreamTracks;
   Int_t           nVeloTracks;
   Int_t           nTTracks;
   Int_t           nBackTracks;
   Int_t           nRich1Hits;
   Int_t           nRich2Hits;
   Int_t           nVeloClusters;
   Int_t           nITClusters;
   Int_t           nTTClusters;
   Int_t           nOTClusters;
   Int_t           nSPDHits;
   Int_t           nMuonCoordsS0;
   Int_t           nMuonCoordsS1;
   Int_t           nMuonCoordsS2;
   Int_t           nMuonCoordsS3;
   Int_t           nMuonCoordsS4;
   Int_t           nMuonTracks;
   UInt_t          StrippingBetaSBs2JpsiPhiDetachedLineDecision;
   UInt_t          StrippingBetaSBd2JpsiKstarDetachedLineDecision;
   UInt_t          StrippingBetaSBu2JpsiKDetachedLineDecision;

   // List of branches
   TBranch        *b_B_LOKI_ENERGY;   //!
   TBranch        *b_B_LOKI_ETA;   //!
   TBranch        *b_B_LOKI_PHI;   //!
   TBranch        *b_B_MINIP;   //!
   TBranch        *b_B_MINIPCHI2;   //!
   TBranch        *b_B_MINIPNEXTBEST;   //!
   TBranch        *b_B_MINIPCHI2NEXTBEST;   //!
   TBranch        *b_nPV;   //!
   TBranch        *b_B_AllIP;   //!
   TBranch        *b_B_AllIPchi2;   //!
   TBranch        *b_B_AllDIRA;   //!
   TBranch        *b_B_ENDVERTEX_X;   //!
   TBranch        *b_B_ENDVERTEX_Y;   //!
   TBranch        *b_B_ENDVERTEX_Z;   //!
   TBranch        *b_B_ENDVERTEX_XERR;   //!
   TBranch        *b_B_ENDVERTEX_YERR;   //!
   TBranch        *b_B_ENDVERTEX_ZERR;   //!
   TBranch        *b_B_ENDVERTEX_CHI2;   //!
   TBranch        *b_B_ENDVERTEX_NDOF;   //!
   TBranch        *b_B_ENDVERTEX_COV_;   //!
   TBranch        *b_B_OWNPV_X;   //!
   TBranch        *b_B_OWNPV_Y;   //!
   TBranch        *b_B_OWNPV_Z;   //!
   TBranch        *b_B_OWNPV_XERR;   //!
   TBranch        *b_B_OWNPV_YERR;   //!
   TBranch        *b_B_OWNPV_ZERR;   //!
   TBranch        *b_B_OWNPV_CHI2;   //!
   TBranch        *b_B_OWNPV_NDOF;   //!
   TBranch        *b_B_OWNPV_COV_;   //!
   TBranch        *b_B_IP_OWNPV;   //!
   TBranch        *b_B_IPCHI2_OWNPV;   //!
   TBranch        *b_B_FD_OWNPV;   //!
   TBranch        *b_B_FDCHI2_OWNPV;   //!
   TBranch        *b_B_DIRA_OWNPV;   //!
   TBranch        *b_B_TOPPV_X;   //!
   TBranch        *b_B_TOPPV_Y;   //!
   TBranch        *b_B_TOPPV_Z;   //!
   TBranch        *b_B_TOPPV_XERR;   //!
   TBranch        *b_B_TOPPV_YERR;   //!
   TBranch        *b_B_TOPPV_ZERR;   //!
   TBranch        *b_B_TOPPV_CHI2;   //!
   TBranch        *b_B_TOPPV_NDOF;   //!
   TBranch        *b_B_TOPPV_COV_;   //!
   TBranch        *b_B_IP_TOPPV;   //!
   TBranch        *b_B_IPCHI2_TOPPV;   //!
   TBranch        *b_B_FD_TOPPV;   //!
   TBranch        *b_B_FDCHI2_TOPPV;   //!
   TBranch        *b_B_DIRA_TOPPV;   //!
   TBranch        *b_B_P;   //!
   TBranch        *b_B_PT;   //!
   TBranch        *b_B_PE;   //!
   TBranch        *b_B_PX;   //!
   TBranch        *b_B_PY;   //!
   TBranch        *b_B_PZ;   //!
   TBranch        *b_B_MM;   //!
   TBranch        *b_B_MMERR;   //!
   TBranch        *b_B_M;   //!
   TBranch        *b_B_ID;   //!
   TBranch        *b_B_TAU;   //!
   TBranch        *b_B_TAUERR;   //!
   TBranch        *b_B_TAUCHI2;   //!
   TBranch        *b_B_TAGDECISION;   //!
   TBranch        *b_B_TAGOMEGA;   //!
   TBranch        *b_B_TAGDECISION_OS;   //!
   TBranch        *b_B_TAGOMEGA_OS;   //!
   TBranch        *b_B_TAGGER;   //!
   TBranch        *b_B_OS_Muon_DEC;   //!
   TBranch        *b_B_OS_Muon_PROB;   //!
   TBranch        *b_B_OS_Muon_PARTICLES_NUM;   //!
   TBranch        *b_B_OS_Muon_PARTICLES_ID;   //!
   TBranch        *b_B_OS_Muon_PARTICLES_P;   //!
   TBranch        *b_B_OS_Muon_PARTICLES_PX;   //!
   TBranch        *b_B_OS_Muon_PARTICLES_PY;   //!
   TBranch        *b_B_OS_Muon_PARTICLES_PZ;   //!
   TBranch        *b_B_OS_Muon_PARTICLES_PT;   //!
   TBranch        *b_B_OS_Muon_PARTICLES_THETA;   //!
   TBranch        *b_B_OS_Muon_PARTICLES_PHI;   //!
   TBranch        *b_B_OS_Muon_PARTICLES_PIDe;   //!
   TBranch        *b_B_OS_Muon_PARTICLES_PIDmu;   //!
   TBranch        *b_B_OS_Muon_PARTICLES_PIDk;   //!
   TBranch        *b_B_OS_Muon_PARTICLES_PIDp;   //!
   TBranch        *b_B_OS_Muon_PARTICLES_IP_OWNPV;   //!
   TBranch        *b_B_OS_Muon_PARTICLES_IPCHI2_OWNPV;   //!
   TBranch        *b_B_OS_Muon_PARTICLES_IP_BVertex;   //!
   TBranch        *b_B_OS_Muon_PARTICLES_IPCHI2_BVertex;   //!
   TBranch        *b_B_OS_Muon_PARTICLES_CHI2_BpVertex;   //!
   TBranch        *b_B_OS_Electron_DEC;   //!
   TBranch        *b_B_OS_Electron_PROB;   //!
   TBranch        *b_B_OS_Electron_PARTICLES_NUM;   //!
   TBranch        *b_B_OS_Electron_PARTICLES_ID;   //!
   TBranch        *b_B_OS_Electron_PARTICLES_P;   //!
   TBranch        *b_B_OS_Electron_PARTICLES_PX;   //!
   TBranch        *b_B_OS_Electron_PARTICLES_PY;   //!
   TBranch        *b_B_OS_Electron_PARTICLES_PZ;   //!
   TBranch        *b_B_OS_Electron_PARTICLES_PT;   //!
   TBranch        *b_B_OS_Electron_PARTICLES_THETA;   //!
   TBranch        *b_B_OS_Electron_PARTICLES_PHI;   //!
   TBranch        *b_B_OS_Electron_PARTICLES_PIDe;   //!
   TBranch        *b_B_OS_Electron_PARTICLES_PIDmu;   //!
   TBranch        *b_B_OS_Electron_PARTICLES_PIDk;   //!
   TBranch        *b_B_OS_Electron_PARTICLES_PIDp;   //!
   TBranch        *b_B_OS_Electron_PARTICLES_IP_OWNPV;   //!
   TBranch        *b_B_OS_Electron_PARTICLES_IPCHI2_OWNPV;   //!
   TBranch        *b_B_OS_Electron_PARTICLES_IP_BVertex;   //!
   TBranch        *b_B_OS_Electron_PARTICLES_IPCHI2_BVertex;   //!
   TBranch        *b_B_OS_Electron_PARTICLES_CHI2_BpVertex;   //!
   TBranch        *b_B_OS_Kaon_DEC;   //!
   TBranch        *b_B_OS_Kaon_PROB;   //!
   TBranch        *b_B_OS_Kaon_PARTICLES_NUM;   //!
   TBranch        *b_B_OS_Kaon_PARTICLES_ID;   //!
   TBranch        *b_B_OS_Kaon_PARTICLES_P;   //!
   TBranch        *b_B_OS_Kaon_PARTICLES_PX;   //!
   TBranch        *b_B_OS_Kaon_PARTICLES_PY;   //!
   TBranch        *b_B_OS_Kaon_PARTICLES_PZ;   //!
   TBranch        *b_B_OS_Kaon_PARTICLES_PT;   //!
   TBranch        *b_B_OS_Kaon_PARTICLES_THETA;   //!
   TBranch        *b_B_OS_Kaon_PARTICLES_PHI;   //!
   TBranch        *b_B_OS_Kaon_PARTICLES_PIDe;   //!
   TBranch        *b_B_OS_Kaon_PARTICLES_PIDmu;   //!
   TBranch        *b_B_OS_Kaon_PARTICLES_PIDk;   //!
   TBranch        *b_B_OS_Kaon_PARTICLES_PIDp;   //!
   TBranch        *b_B_OS_Kaon_PARTICLES_IP_OWNPV;   //!
   TBranch        *b_B_OS_Kaon_PARTICLES_IPCHI2_OWNPV;   //!
   TBranch        *b_B_OS_Kaon_PARTICLES_IP_BVertex;   //!
   TBranch        *b_B_OS_Kaon_PARTICLES_IPCHI2_BVertex;   //!
   TBranch        *b_B_OS_Kaon_PARTICLES_CHI2_BpVertex;   //!
   TBranch        *b_B_SS_Kaon_DEC;   //!
   TBranch        *b_B_SS_Kaon_PROB;   //!
   TBranch        *b_B_SS_Kaon_PARTICLES_NUM;   //!
   TBranch        *b_B_SS_Kaon_PARTICLES_ID;   //!
   TBranch        *b_B_SS_Kaon_PARTICLES_P;   //!
   TBranch        *b_B_SS_Kaon_PARTICLES_PX;   //!
   TBranch        *b_B_SS_Kaon_PARTICLES_PY;   //!
   TBranch        *b_B_SS_Kaon_PARTICLES_PZ;   //!
   TBranch        *b_B_SS_Kaon_PARTICLES_PT;   //!
   TBranch        *b_B_SS_Kaon_PARTICLES_THETA;   //!
   TBranch        *b_B_SS_Kaon_PARTICLES_PHI;   //!
   TBranch        *b_B_SS_Kaon_PARTICLES_PIDe;   //!
   TBranch        *b_B_SS_Kaon_PARTICLES_PIDmu;   //!
   TBranch        *b_B_SS_Kaon_PARTICLES_PIDk;   //!
   TBranch        *b_B_SS_Kaon_PARTICLES_PIDp;   //!
   TBranch        *b_B_SS_Kaon_PARTICLES_IP_OWNPV;   //!
   TBranch        *b_B_SS_Kaon_PARTICLES_IPCHI2_OWNPV;   //!
   TBranch        *b_B_SS_Kaon_PARTICLES_IP_BVertex;   //!
   TBranch        *b_B_SS_Kaon_PARTICLES_IPCHI2_BVertex;   //!
   TBranch        *b_B_SS_Kaon_PARTICLES_CHI2_BpVertex;   //!
   TBranch        *b_B_SS_Pion_DEC;   //!
   TBranch        *b_B_SS_Pion_PROB;   //!
   TBranch        *b_B_SS_Pion_PARTICLES_NUM;   //!
   TBranch        *b_B_SS_Pion_PARTICLES_ID;   //!
   TBranch        *b_B_SS_Pion_PARTICLES_P;   //!
   TBranch        *b_B_SS_Pion_PARTICLES_PX;   //!
   TBranch        *b_B_SS_Pion_PARTICLES_PY;   //!
   TBranch        *b_B_SS_Pion_PARTICLES_PZ;   //!
   TBranch        *b_B_SS_Pion_PARTICLES_PT;   //!
   TBranch        *b_B_SS_Pion_PARTICLES_THETA;   //!
   TBranch        *b_B_SS_Pion_PARTICLES_PHI;   //!
   TBranch        *b_B_SS_Pion_PARTICLES_PIDe;   //!
   TBranch        *b_B_SS_Pion_PARTICLES_PIDmu;   //!
   TBranch        *b_B_SS_Pion_PARTICLES_PIDk;   //!
   TBranch        *b_B_SS_Pion_PARTICLES_PIDp;   //!
   TBranch        *b_B_SS_Pion_PARTICLES_IP_OWNPV;   //!
   TBranch        *b_B_SS_Pion_PARTICLES_IPCHI2_OWNPV;   //!
   TBranch        *b_B_SS_Pion_PARTICLES_IP_BVertex;   //!
   TBranch        *b_B_SS_Pion_PARTICLES_IPCHI2_BVertex;   //!
   TBranch        *b_B_SS_Pion_PARTICLES_CHI2_BpVertex;   //!
   TBranch        *b_B_SS_PionBDT_DEC;   //!
   TBranch        *b_B_SS_PionBDT_PROB;   //!
   TBranch        *b_B_SS_PionBDT_PARTICLES_NUM;   //!
   TBranch        *b_B_SS_PionBDT_PARTICLES_ID;   //!
   TBranch        *b_B_SS_PionBDT_PARTICLES_P;   //!
   TBranch        *b_B_SS_PionBDT_PARTICLES_PX;   //!
   TBranch        *b_B_SS_PionBDT_PARTICLES_PY;   //!
   TBranch        *b_B_SS_PionBDT_PARTICLES_PZ;   //!
   TBranch        *b_B_SS_PionBDT_PARTICLES_PT;   //!
   TBranch        *b_B_SS_PionBDT_PARTICLES_THETA;   //!
   TBranch        *b_B_SS_PionBDT_PARTICLES_PHI;   //!
   TBranch        *b_B_SS_PionBDT_PARTICLES_PIDe;   //!
   TBranch        *b_B_SS_PionBDT_PARTICLES_PIDmu;   //!
   TBranch        *b_B_SS_PionBDT_PARTICLES_PIDk;   //!
   TBranch        *b_B_SS_PionBDT_PARTICLES_PIDp;   //!
   TBranch        *b_B_SS_PionBDT_PARTICLES_IP_OWNPV;   //!
   TBranch        *b_B_SS_PionBDT_PARTICLES_IPCHI2_OWNPV;   //!
   TBranch        *b_B_SS_PionBDT_PARTICLES_IP_BVertex;   //!
   TBranch        *b_B_SS_PionBDT_PARTICLES_IPCHI2_BVertex;   //!
   TBranch        *b_B_SS_PionBDT_PARTICLES_CHI2_BpVertex;   //!
   TBranch        *b_B_VtxCharge_DEC;   //!
   TBranch        *b_B_VtxCharge_PROB;   //!
   TBranch        *b_B_VtxCharge_PARTICLES_NUM;   //!
   TBranch        *b_B_VtxCharge_PARTICLES_ID;   //!
   TBranch        *b_B_VtxCharge_PARTICLES_P;   //!
   TBranch        *b_B_VtxCharge_PARTICLES_PX;   //!
   TBranch        *b_B_VtxCharge_PARTICLES_PY;   //!
   TBranch        *b_B_VtxCharge_PARTICLES_PZ;   //!
   TBranch        *b_B_VtxCharge_PARTICLES_PT;   //!
   TBranch        *b_B_VtxCharge_PARTICLES_THETA;   //!
   TBranch        *b_B_VtxCharge_PARTICLES_PHI;   //!
   TBranch        *b_B_VtxCharge_PARTICLES_PIDe;   //!
   TBranch        *b_B_VtxCharge_PARTICLES_PIDmu;   //!
   TBranch        *b_B_VtxCharge_PARTICLES_PIDk;   //!
   TBranch        *b_B_VtxCharge_PARTICLES_PIDp;   //!
   TBranch        *b_B_VtxCharge_PARTICLES_IP_OWNPV;   //!
   TBranch        *b_B_VtxCharge_PARTICLES_IPCHI2_OWNPV;   //!
   TBranch        *b_B_VtxCharge_PARTICLES_IP_BVertex;   //!
   TBranch        *b_B_VtxCharge_PARTICLES_IPCHI2_BVertex;   //!
   TBranch        *b_B_VtxCharge_PARTICLES_CHI2_BpVertex;   //!
   TBranch        *b_B_OS_nnetKaon_DEC;   //!
   TBranch        *b_B_OS_nnetKaon_PROB;   //!
   TBranch        *b_B_OS_nnetKaon_PARTICLES_NUM;   //!
   TBranch        *b_B_OS_nnetKaon_PARTICLES_ID;   //!
   TBranch        *b_B_OS_nnetKaon_PARTICLES_P;   //!
   TBranch        *b_B_OS_nnetKaon_PARTICLES_PX;   //!
   TBranch        *b_B_OS_nnetKaon_PARTICLES_PY;   //!
   TBranch        *b_B_OS_nnetKaon_PARTICLES_PZ;   //!
   TBranch        *b_B_OS_nnetKaon_PARTICLES_PT;   //!
   TBranch        *b_B_OS_nnetKaon_PARTICLES_THETA;   //!
   TBranch        *b_B_OS_nnetKaon_PARTICLES_PHI;   //!
   TBranch        *b_B_OS_nnetKaon_PARTICLES_PIDe;   //!
   TBranch        *b_B_OS_nnetKaon_PARTICLES_PIDmu;   //!
   TBranch        *b_B_OS_nnetKaon_PARTICLES_PIDk;   //!
   TBranch        *b_B_OS_nnetKaon_PARTICLES_PIDp;   //!
   TBranch        *b_B_OS_nnetKaon_PARTICLES_IP_OWNPV;   //!
   TBranch        *b_B_OS_nnetKaon_PARTICLES_IPCHI2_OWNPV;   //!
   TBranch        *b_B_OS_nnetKaon_PARTICLES_IP_BVertex;   //!
   TBranch        *b_B_OS_nnetKaon_PARTICLES_IPCHI2_BVertex;   //!
   TBranch        *b_B_OS_nnetKaon_PARTICLES_CHI2_BpVertex;   //!
   TBranch        *b_B_SS_nnetKaon_DEC;   //!
   TBranch        *b_B_SS_nnetKaon_PROB;   //!
   TBranch        *b_B_SS_nnetKaon_PARTICLES_NUM;   //!
   TBranch        *b_B_SS_nnetKaon_PARTICLES_ID;   //!
   TBranch        *b_B_SS_nnetKaon_PARTICLES_P;   //!
   TBranch        *b_B_SS_nnetKaon_PARTICLES_PX;   //!
   TBranch        *b_B_SS_nnetKaon_PARTICLES_PY;   //!
   TBranch        *b_B_SS_nnetKaon_PARTICLES_PZ;   //!
   TBranch        *b_B_SS_nnetKaon_PARTICLES_PT;   //!
   TBranch        *b_B_SS_nnetKaon_PARTICLES_THETA;   //!
   TBranch        *b_B_SS_nnetKaon_PARTICLES_PHI;   //!
   TBranch        *b_B_SS_nnetKaon_PARTICLES_PIDe;   //!
   TBranch        *b_B_SS_nnetKaon_PARTICLES_PIDmu;   //!
   TBranch        *b_B_SS_nnetKaon_PARTICLES_PIDk;   //!
   TBranch        *b_B_SS_nnetKaon_PARTICLES_PIDp;   //!
   TBranch        *b_B_SS_nnetKaon_PARTICLES_IP_OWNPV;   //!
   TBranch        *b_B_SS_nnetKaon_PARTICLES_IPCHI2_OWNPV;   //!
   TBranch        *b_B_SS_nnetKaon_PARTICLES_IP_BVertex;   //!
   TBranch        *b_B_SS_nnetKaon_PARTICLES_IPCHI2_BVertex;   //!
   TBranch        *b_B_SS_nnetKaon_PARTICLES_CHI2_BpVertex;   //!
   TBranch        *b_B_SS_Proton_DEC;   //!
   TBranch        *b_B_SS_Proton_PROB;   //!
   TBranch        *b_B_SS_Proton_PARTICLES_NUM;   //!
   TBranch        *b_B_SS_Proton_PARTICLES_ID;   //!
   TBranch        *b_B_SS_Proton_PARTICLES_P;   //!
   TBranch        *b_B_SS_Proton_PARTICLES_PX;   //!
   TBranch        *b_B_SS_Proton_PARTICLES_PY;   //!
   TBranch        *b_B_SS_Proton_PARTICLES_PZ;   //!
   TBranch        *b_B_SS_Proton_PARTICLES_PT;   //!
   TBranch        *b_B_SS_Proton_PARTICLES_THETA;   //!
   TBranch        *b_B_SS_Proton_PARTICLES_PHI;   //!
   TBranch        *b_B_SS_Proton_PARTICLES_PIDe;   //!
   TBranch        *b_B_SS_Proton_PARTICLES_PIDmu;   //!
   TBranch        *b_B_SS_Proton_PARTICLES_PIDk;   //!
   TBranch        *b_B_SS_Proton_PARTICLES_PIDp;   //!
   TBranch        *b_B_SS_Proton_PARTICLES_IP_OWNPV;   //!
   TBranch        *b_B_SS_Proton_PARTICLES_IPCHI2_OWNPV;   //!
   TBranch        *b_B_SS_Proton_PARTICLES_IP_BVertex;   //!
   TBranch        *b_B_SS_Proton_PARTICLES_IPCHI2_BVertex;   //!
   TBranch        *b_B_SS_Proton_PARTICLES_CHI2_BpVertex;   //!
   TBranch        *b_B_OS_Charm_DEC;   //!
   TBranch        *b_B_OS_Charm_PROB;   //!
   TBranch        *b_B_OS_Charm_PARTICLES_NUM;   //!
   TBranch        *b_B_OS_Charm_PARTICLES_ID;   //!
   TBranch        *b_B_OS_Charm_PARTICLES_P;   //!
   TBranch        *b_B_OS_Charm_PARTICLES_PX;   //!
   TBranch        *b_B_OS_Charm_PARTICLES_PY;   //!
   TBranch        *b_B_OS_Charm_PARTICLES_PZ;   //!
   TBranch        *b_B_OS_Charm_PARTICLES_PT;   //!
   TBranch        *b_B_OS_Charm_PARTICLES_THETA;   //!
   TBranch        *b_B_OS_Charm_PARTICLES_PHI;   //!
   TBranch        *b_B_OS_Charm_PARTICLES_PIDe;   //!
   TBranch        *b_B_OS_Charm_PARTICLES_PIDmu;   //!
   TBranch        *b_B_OS_Charm_PARTICLES_PIDk;   //!
   TBranch        *b_B_OS_Charm_PARTICLES_PIDp;   //!
   TBranch        *b_B_OS_Charm_PARTICLES_IP_OWNPV;   //!
   TBranch        *b_B_OS_Charm_PARTICLES_IPCHI2_OWNPV;   //!
   TBranch        *b_B_OS_Charm_PARTICLES_IP_BVertex;   //!
   TBranch        *b_B_OS_Charm_PARTICLES_IPCHI2_BVertex;   //!
   TBranch        *b_B_OS_Charm_PARTICLES_CHI2_BpVertex;   //!
   TBranch        *b_B_X;   //!
   TBranch        *b_B_Y;   //!
   TBranch        *b_B_LOKI_DIRA;   //!
   TBranch        *b_B_LOKI_DOCA_1_2;   //!
   TBranch        *b_B_LOKI_DTF_CHI2NDOF;   //!
   TBranch        *b_B_LOKI_DTF_CTAU;   //!
   TBranch        *b_B_LOKI_DTF_CTAUERR;   //!
   TBranch        *b_B_LOKI_DTF_CTAUERR_D1;   //!
   TBranch        *b_B_LOKI_DTF_CTAUERR_D2;   //!
   TBranch        *b_B_LOKI_DTF_CTAUERR_NOPV;   //!
   TBranch        *b_B_LOKI_DTF_CTAUS;   //!
   TBranch        *b_B_LOKI_DTF_CTAU_D1;   //!
   TBranch        *b_B_LOKI_DTF_CTAU_D2;   //!
   TBranch        *b_B_LOKI_DTF_CTAU_NOPV;   //!
   TBranch        *b_B_LOKI_DTF_VCHI2NDOF;   //!
   TBranch        *b_B_LOKI_FDCHI2;   //!
   TBranch        *b_B_LOKI_FDS;   //!
   TBranch        *b_B_LOKI_MASSERR_JpsiConstr;   //!
   TBranch        *b_B_LOKI_MASS_JpsiConstr;   //!
   TBranch        *b_B_LOKI_MASS_JpsiConstr_NoPVConstr;   //!
   TBranch        *b_B_FitDaughtersConst_nPV;   //!
   TBranch        *b_B_FitDaughtersConst_J_psi_1S_M;   //!
   TBranch        *b_B_FitDaughtersConst_J_psi_1S_MERR;   //!
   TBranch        *b_B_FitDaughtersConst_J_psi_1S_P;   //!
   TBranch        *b_B_FitDaughtersConst_J_psi_1S_PERR;   //!
   TBranch        *b_B_FitDaughtersConst_J_psi_1S_ctau;   //!
   TBranch        *b_B_FitDaughtersConst_J_psi_1S_ctauErr;   //!
   TBranch        *b_B_FitDaughtersConst_J_psi_1S_decayLength;   //!
   TBranch        *b_B_FitDaughtersConst_J_psi_1S_decayLengthErr;   //!
   TBranch        *b_B_FitDaughtersConst_J_psi_1S_muminus_0_ID;   //!
   TBranch        *b_B_FitDaughtersConst_J_psi_1S_muminus_0_PE;   //!
   TBranch        *b_B_FitDaughtersConst_J_psi_1S_muminus_0_PX;   //!
   TBranch        *b_B_FitDaughtersConst_J_psi_1S_muminus_0_PY;   //!
   TBranch        *b_B_FitDaughtersConst_J_psi_1S_muminus_0_PZ;   //!
   TBranch        *b_B_FitDaughtersConst_J_psi_1S_muminus_ID;   //!
   TBranch        *b_B_FitDaughtersConst_J_psi_1S_muminus_PE;   //!
   TBranch        *b_B_FitDaughtersConst_J_psi_1S_muminus_PX;   //!
   TBranch        *b_B_FitDaughtersConst_J_psi_1S_muminus_PY;   //!
   TBranch        *b_B_FitDaughtersConst_J_psi_1S_muminus_PZ;   //!
   TBranch        *b_B_FitDaughtersConst_Kst_892_0_Kplus_ID;   //!
   TBranch        *b_B_FitDaughtersConst_Kst_892_0_Kplus_PE;   //!
   TBranch        *b_B_FitDaughtersConst_Kst_892_0_Kplus_PX;   //!
   TBranch        *b_B_FitDaughtersConst_Kst_892_0_Kplus_PY;   //!
   TBranch        *b_B_FitDaughtersConst_Kst_892_0_Kplus_PZ;   //!
   TBranch        *b_B_FitDaughtersConst_Kst_892_0_M;   //!
   TBranch        *b_B_FitDaughtersConst_Kst_892_0_MERR;   //!
   TBranch        *b_B_FitDaughtersConst_Kst_892_0_P;   //!
   TBranch        *b_B_FitDaughtersConst_Kst_892_0_PERR;   //!
   TBranch        *b_B_FitDaughtersConst_Kst_892_0_ctau;   //!
   TBranch        *b_B_FitDaughtersConst_Kst_892_0_ctauErr;   //!
   TBranch        *b_B_FitDaughtersConst_Kst_892_0_decayLength;   //!
   TBranch        *b_B_FitDaughtersConst_Kst_892_0_decayLengthErr;   //!
   TBranch        *b_B_FitDaughtersConst_Kst_892_0_piplus_ID;   //!
   TBranch        *b_B_FitDaughtersConst_Kst_892_0_piplus_PE;   //!
   TBranch        *b_B_FitDaughtersConst_Kst_892_0_piplus_PX;   //!
   TBranch        *b_B_FitDaughtersConst_Kst_892_0_piplus_PY;   //!
   TBranch        *b_B_FitDaughtersConst_Kst_892_0_piplus_PZ;   //!
   TBranch        *b_B_FitDaughtersConst_M;   //!
   TBranch        *b_B_FitDaughtersConst_MERR;   //!
   TBranch        *b_B_FitDaughtersConst_P;   //!
   TBranch        *b_B_FitDaughtersConst_PERR;   //!
   TBranch        *b_B_FitDaughtersConst_chi2;   //!
   TBranch        *b_B_FitDaughtersConst_nDOF;   //!
   TBranch        *b_B_FitDaughtersConst_nIter;   //!
   TBranch        *b_B_FitDaughtersConst_status;   //!
   TBranch        *b_B_FitDaughtersPVConst_nPV;   //!
   TBranch        *b_B_FitDaughtersPVConst_J_psi_1S_M;   //!
   TBranch        *b_B_FitDaughtersPVConst_J_psi_1S_MERR;   //!
   TBranch        *b_B_FitDaughtersPVConst_J_psi_1S_P;   //!
   TBranch        *b_B_FitDaughtersPVConst_J_psi_1S_PERR;   //!
   TBranch        *b_B_FitDaughtersPVConst_J_psi_1S_ctau;   //!
   TBranch        *b_B_FitDaughtersPVConst_J_psi_1S_ctauErr;   //!
   TBranch        *b_B_FitDaughtersPVConst_J_psi_1S_decayLength;   //!
   TBranch        *b_B_FitDaughtersPVConst_J_psi_1S_decayLengthErr;   //!
   TBranch        *b_B_FitDaughtersPVConst_J_psi_1S_muminus_0_ID;   //!
   TBranch        *b_B_FitDaughtersPVConst_J_psi_1S_muminus_0_PE;   //!
   TBranch        *b_B_FitDaughtersPVConst_J_psi_1S_muminus_0_PX;   //!
   TBranch        *b_B_FitDaughtersPVConst_J_psi_1S_muminus_0_PY;   //!
   TBranch        *b_B_FitDaughtersPVConst_J_psi_1S_muminus_0_PZ;   //!
   TBranch        *b_B_FitDaughtersPVConst_J_psi_1S_muminus_ID;   //!
   TBranch        *b_B_FitDaughtersPVConst_J_psi_1S_muminus_PE;   //!
   TBranch        *b_B_FitDaughtersPVConst_J_psi_1S_muminus_PX;   //!
   TBranch        *b_B_FitDaughtersPVConst_J_psi_1S_muminus_PY;   //!
   TBranch        *b_B_FitDaughtersPVConst_J_psi_1S_muminus_PZ;   //!
   TBranch        *b_B_FitDaughtersPVConst_Kst_892_0_Kplus_ID;   //!
   TBranch        *b_B_FitDaughtersPVConst_Kst_892_0_Kplus_PE;   //!
   TBranch        *b_B_FitDaughtersPVConst_Kst_892_0_Kplus_PX;   //!
   TBranch        *b_B_FitDaughtersPVConst_Kst_892_0_Kplus_PY;   //!
   TBranch        *b_B_FitDaughtersPVConst_Kst_892_0_Kplus_PZ;   //!
   TBranch        *b_B_FitDaughtersPVConst_Kst_892_0_M;   //!
   TBranch        *b_B_FitDaughtersPVConst_Kst_892_0_MERR;   //!
   TBranch        *b_B_FitDaughtersPVConst_Kst_892_0_P;   //!
   TBranch        *b_B_FitDaughtersPVConst_Kst_892_0_PERR;   //!
   TBranch        *b_B_FitDaughtersPVConst_Kst_892_0_ctau;   //!
   TBranch        *b_B_FitDaughtersPVConst_Kst_892_0_ctauErr;   //!
   TBranch        *b_B_FitDaughtersPVConst_Kst_892_0_decayLength;   //!
   TBranch        *b_B_FitDaughtersPVConst_Kst_892_0_decayLengthErr;   //!
   TBranch        *b_B_FitDaughtersPVConst_Kst_892_0_piplus_ID;   //!
   TBranch        *b_B_FitDaughtersPVConst_Kst_892_0_piplus_PE;   //!
   TBranch        *b_B_FitDaughtersPVConst_Kst_892_0_piplus_PX;   //!
   TBranch        *b_B_FitDaughtersPVConst_Kst_892_0_piplus_PY;   //!
   TBranch        *b_B_FitDaughtersPVConst_Kst_892_0_piplus_PZ;   //!
   TBranch        *b_B_FitDaughtersPVConst_M;   //!
   TBranch        *b_B_FitDaughtersPVConst_MERR;   //!
   TBranch        *b_B_FitDaughtersPVConst_P;   //!
   TBranch        *b_B_FitDaughtersPVConst_PERR;   //!
   TBranch        *b_B_FitDaughtersPVConst_PV_X;   //!
   TBranch        *b_B_FitDaughtersPVConst_PV_Y;   //!
   TBranch        *b_B_FitDaughtersPVConst_PV_Z;   //!
   TBranch        *b_B_FitDaughtersPVConst_PV_key;   //!
   TBranch        *b_B_FitDaughtersPVConst_chi2;   //!
   TBranch        *b_B_FitDaughtersPVConst_ctau;   //!
   TBranch        *b_B_FitDaughtersPVConst_ctauErr;   //!
   TBranch        *b_B_FitDaughtersPVConst_decayLength;   //!
   TBranch        *b_B_FitDaughtersPVConst_decayLengthErr;   //!
   TBranch        *b_B_FitDaughtersPVConst_nDOF;   //!
   TBranch        *b_B_FitDaughtersPVConst_nIter;   //!
   TBranch        *b_B_FitDaughtersPVConst_status;   //!
   TBranch        *b_B_FitPVConst_nPV;   //!
   TBranch        *b_B_FitPVConst_J_psi_1S_M;   //!
   TBranch        *b_B_FitPVConst_J_psi_1S_MERR;   //!
   TBranch        *b_B_FitPVConst_J_psi_1S_P;   //!
   TBranch        *b_B_FitPVConst_J_psi_1S_PERR;   //!
   TBranch        *b_B_FitPVConst_J_psi_1S_ctau;   //!
   TBranch        *b_B_FitPVConst_J_psi_1S_ctauErr;   //!
   TBranch        *b_B_FitPVConst_J_psi_1S_decayLength;   //!
   TBranch        *b_B_FitPVConst_J_psi_1S_decayLengthErr;   //!
   TBranch        *b_B_FitPVConst_J_psi_1S_muminus_0_ID;   //!
   TBranch        *b_B_FitPVConst_J_psi_1S_muminus_0_PE;   //!
   TBranch        *b_B_FitPVConst_J_psi_1S_muminus_0_PX;   //!
   TBranch        *b_B_FitPVConst_J_psi_1S_muminus_0_PY;   //!
   TBranch        *b_B_FitPVConst_J_psi_1S_muminus_0_PZ;   //!
   TBranch        *b_B_FitPVConst_J_psi_1S_muminus_ID;   //!
   TBranch        *b_B_FitPVConst_J_psi_1S_muminus_PE;   //!
   TBranch        *b_B_FitPVConst_J_psi_1S_muminus_PX;   //!
   TBranch        *b_B_FitPVConst_J_psi_1S_muminus_PY;   //!
   TBranch        *b_B_FitPVConst_J_psi_1S_muminus_PZ;   //!
   TBranch        *b_B_FitPVConst_Kst_892_0_Kplus_ID;   //!
   TBranch        *b_B_FitPVConst_Kst_892_0_Kplus_PE;   //!
   TBranch        *b_B_FitPVConst_Kst_892_0_Kplus_PX;   //!
   TBranch        *b_B_FitPVConst_Kst_892_0_Kplus_PY;   //!
   TBranch        *b_B_FitPVConst_Kst_892_0_Kplus_PZ;   //!
   TBranch        *b_B_FitPVConst_Kst_892_0_M;   //!
   TBranch        *b_B_FitPVConst_Kst_892_0_MERR;   //!
   TBranch        *b_B_FitPVConst_Kst_892_0_P;   //!
   TBranch        *b_B_FitPVConst_Kst_892_0_PERR;   //!
   TBranch        *b_B_FitPVConst_Kst_892_0_ctau;   //!
   TBranch        *b_B_FitPVConst_Kst_892_0_ctauErr;   //!
   TBranch        *b_B_FitPVConst_Kst_892_0_decayLength;   //!
   TBranch        *b_B_FitPVConst_Kst_892_0_decayLengthErr;   //!
   TBranch        *b_B_FitPVConst_Kst_892_0_piplus_ID;   //!
   TBranch        *b_B_FitPVConst_Kst_892_0_piplus_PE;   //!
   TBranch        *b_B_FitPVConst_Kst_892_0_piplus_PX;   //!
   TBranch        *b_B_FitPVConst_Kst_892_0_piplus_PY;   //!
   TBranch        *b_B_FitPVConst_Kst_892_0_piplus_PZ;   //!
   TBranch        *b_B_FitPVConst_M;   //!
   TBranch        *b_B_FitPVConst_MERR;   //!
   TBranch        *b_B_FitPVConst_P;   //!
   TBranch        *b_B_FitPVConst_PERR;   //!
   TBranch        *b_B_FitPVConst_PV_X;   //!
   TBranch        *b_B_FitPVConst_PV_Y;   //!
   TBranch        *b_B_FitPVConst_PV_Z;   //!
   TBranch        *b_B_FitPVConst_PV_key;   //!
   TBranch        *b_B_FitPVConst_chi2;   //!
   TBranch        *b_B_FitPVConst_ctau;   //!
   TBranch        *b_B_FitPVConst_ctauErr;   //!
   TBranch        *b_B_FitPVConst_decayLength;   //!
   TBranch        *b_B_FitPVConst_decayLengthErr;   //!
   TBranch        *b_B_FitPVConst_nDOF;   //!
   TBranch        *b_B_FitPVConst_nIter;   //!
   TBranch        *b_B_FitPVConst_status;   //!
   TBranch        *b_B_FitwithoutConst_nPV;   //!
   TBranch        *b_B_FitwithoutConst_J_psi_1S_M;   //!
   TBranch        *b_B_FitwithoutConst_J_psi_1S_MERR;   //!
   TBranch        *b_B_FitwithoutConst_J_psi_1S_P;   //!
   TBranch        *b_B_FitwithoutConst_J_psi_1S_PERR;   //!
   TBranch        *b_B_FitwithoutConst_J_psi_1S_ctau;   //!
   TBranch        *b_B_FitwithoutConst_J_psi_1S_ctauErr;   //!
   TBranch        *b_B_FitwithoutConst_J_psi_1S_decayLength;   //!
   TBranch        *b_B_FitwithoutConst_J_psi_1S_decayLengthErr;   //!
   TBranch        *b_B_FitwithoutConst_J_psi_1S_muminus_0_ID;   //!
   TBranch        *b_B_FitwithoutConst_J_psi_1S_muminus_0_PE;   //!
   TBranch        *b_B_FitwithoutConst_J_psi_1S_muminus_0_PX;   //!
   TBranch        *b_B_FitwithoutConst_J_psi_1S_muminus_0_PY;   //!
   TBranch        *b_B_FitwithoutConst_J_psi_1S_muminus_0_PZ;   //!
   TBranch        *b_B_FitwithoutConst_J_psi_1S_muminus_ID;   //!
   TBranch        *b_B_FitwithoutConst_J_psi_1S_muminus_PE;   //!
   TBranch        *b_B_FitwithoutConst_J_psi_1S_muminus_PX;   //!
   TBranch        *b_B_FitwithoutConst_J_psi_1S_muminus_PY;   //!
   TBranch        *b_B_FitwithoutConst_J_psi_1S_muminus_PZ;   //!
   TBranch        *b_B_FitwithoutConst_Kst_892_0_Kplus_ID;   //!
   TBranch        *b_B_FitwithoutConst_Kst_892_0_Kplus_PE;   //!
   TBranch        *b_B_FitwithoutConst_Kst_892_0_Kplus_PX;   //!
   TBranch        *b_B_FitwithoutConst_Kst_892_0_Kplus_PY;   //!
   TBranch        *b_B_FitwithoutConst_Kst_892_0_Kplus_PZ;   //!
   TBranch        *b_B_FitwithoutConst_Kst_892_0_M;   //!
   TBranch        *b_B_FitwithoutConst_Kst_892_0_MERR;   //!
   TBranch        *b_B_FitwithoutConst_Kst_892_0_P;   //!
   TBranch        *b_B_FitwithoutConst_Kst_892_0_PERR;   //!
   TBranch        *b_B_FitwithoutConst_Kst_892_0_ctau;   //!
   TBranch        *b_B_FitwithoutConst_Kst_892_0_ctauErr;   //!
   TBranch        *b_B_FitwithoutConst_Kst_892_0_decayLength;   //!
   TBranch        *b_B_FitwithoutConst_Kst_892_0_decayLengthErr;   //!
   TBranch        *b_B_FitwithoutConst_Kst_892_0_piplus_ID;   //!
   TBranch        *b_B_FitwithoutConst_Kst_892_0_piplus_PE;   //!
   TBranch        *b_B_FitwithoutConst_Kst_892_0_piplus_PX;   //!
   TBranch        *b_B_FitwithoutConst_Kst_892_0_piplus_PY;   //!
   TBranch        *b_B_FitwithoutConst_Kst_892_0_piplus_PZ;   //!
   TBranch        *b_B_FitwithoutConst_M;   //!
   TBranch        *b_B_FitwithoutConst_MERR;   //!
   TBranch        *b_B_FitwithoutConst_P;   //!
   TBranch        *b_B_FitwithoutConst_PERR;   //!
   TBranch        *b_B_FitwithoutConst_chi2;   //!
   TBranch        *b_B_FitwithoutConst_nDOF;   //!
   TBranch        *b_B_FitwithoutConst_nIter;   //!
   TBranch        *b_B_FitwithoutConst_status;   //!
   TBranch        *b_B_L0Global_Dec;   //!
   TBranch        *b_B_L0Global_TIS;   //!
   TBranch        *b_B_L0Global_TOS;   //!
   TBranch        *b_B_Hlt1Global_Dec;   //!
   TBranch        *b_B_Hlt1Global_TIS;   //!
   TBranch        *b_B_Hlt1Global_TOS;   //!
   TBranch        *b_B_Hlt1Phys_Dec;   //!
   TBranch        *b_B_Hlt1Phys_TIS;   //!
   TBranch        *b_B_Hlt1Phys_TOS;   //!
   TBranch        *b_B_Hlt2Global_Dec;   //!
   TBranch        *b_B_Hlt2Global_TIS;   //!
   TBranch        *b_B_Hlt2Global_TOS;   //!
   TBranch        *b_B_Hlt2Phys_Dec;   //!
   TBranch        *b_B_Hlt2Phys_TIS;   //!
   TBranch        *b_B_Hlt2Phys_TOS;   //!
   TBranch        *b_B_L0PhysicsDecision_Dec;   //!
   TBranch        *b_B_L0PhysicsDecision_TIS;   //!
   TBranch        *b_B_L0PhysicsDecision_TOS;   //!
   TBranch        *b_B_L0MuonDecision_Dec;   //!
   TBranch        *b_B_L0MuonDecision_TIS;   //!
   TBranch        *b_B_L0MuonDecision_TOS;   //!
   TBranch        *b_B_L0DiMuonDecision_Dec;   //!
   TBranch        *b_B_L0DiMuonDecision_TIS;   //!
   TBranch        *b_B_L0DiMuonDecision_TOS;   //!
   TBranch        *b_B_L0MuonHighDecision_Dec;   //!
   TBranch        *b_B_L0MuonHighDecision_TIS;   //!
   TBranch        *b_B_L0MuonHighDecision_TOS;   //!
   TBranch        *b_B_L0HadronDecision_Dec;   //!
   TBranch        *b_B_L0HadronDecision_TIS;   //!
   TBranch        *b_B_L0HadronDecision_TOS;   //!
   TBranch        *b_B_L0ElectronDecision_Dec;   //!
   TBranch        *b_B_L0ElectronDecision_TIS;   //!
   TBranch        *b_B_L0ElectronDecision_TOS;   //!
   TBranch        *b_B_L0PhotonDecision_Dec;   //!
   TBranch        *b_B_L0PhotonDecision_TIS;   //!
   TBranch        *b_B_L0PhotonDecision_TOS;   //!
   TBranch        *b_B_L0MuonNoSPDDecision_Dec;   //!
   TBranch        *b_B_L0MuonNoSPDDecision_TIS;   //!
   TBranch        *b_B_L0MuonNoSPDDecision_TOS;   //!
   TBranch        *b_B_Hlt1DiMuonHighMassDecision_Dec;   //!
   TBranch        *b_B_Hlt1DiMuonHighMassDecision_TIS;   //!
   TBranch        *b_B_Hlt1DiMuonHighMassDecision_TOS;   //!
   TBranch        *b_B_Hlt1DiMuonLowMassDecision_Dec;   //!
   TBranch        *b_B_Hlt1DiMuonLowMassDecision_TIS;   //!
   TBranch        *b_B_Hlt1DiMuonLowMassDecision_TOS;   //!
   TBranch        *b_B_Hlt1SingleMuonNoIPDecision_Dec;   //!
   TBranch        *b_B_Hlt1SingleMuonNoIPDecision_TIS;   //!
   TBranch        *b_B_Hlt1SingleMuonNoIPDecision_TOS;   //!
   TBranch        *b_B_Hlt1SingleMuonHighPTDecision_Dec;   //!
   TBranch        *b_B_Hlt1SingleMuonHighPTDecision_TIS;   //!
   TBranch        *b_B_Hlt1SingleMuonHighPTDecision_TOS;   //!
   TBranch        *b_B_Hlt1SingleElectronNoIPDecision_Dec;   //!
   TBranch        *b_B_Hlt1SingleElectronNoIPDecision_TIS;   //!
   TBranch        *b_B_Hlt1SingleElectronNoIPDecision_TOS;   //!
   TBranch        *b_B_Hlt1TrackAllL0Decision_Dec;   //!
   TBranch        *b_B_Hlt1TrackAllL0Decision_TIS;   //!
   TBranch        *b_B_Hlt1TrackAllL0Decision_TOS;   //!
   TBranch        *b_B_Hlt1TrackAllL0TightDecision_Dec;   //!
   TBranch        *b_B_Hlt1TrackAllL0TightDecision_TIS;   //!
   TBranch        *b_B_Hlt1TrackAllL0TightDecision_TOS;   //!
   TBranch        *b_B_Hlt1TrackMuonDecision_Dec;   //!
   TBranch        *b_B_Hlt1TrackMuonDecision_TIS;   //!
   TBranch        *b_B_Hlt1TrackMuonDecision_TOS;   //!
   TBranch        *b_B_Hlt1TrackPhotonDecision_Dec;   //!
   TBranch        *b_B_Hlt1TrackPhotonDecision_TIS;   //!
   TBranch        *b_B_Hlt1TrackPhotonDecision_TOS;   //!
   TBranch        *b_B_Hlt1TrackForwardPassThroughDecision_Dec;   //!
   TBranch        *b_B_Hlt1TrackForwardPassThroughDecision_TIS;   //!
   TBranch        *b_B_Hlt1TrackForwardPassThroughDecision_TOS;   //!
   TBranch        *b_B_Hlt1TrackForwardPassThroughLooseDecision_Dec;   //!
   TBranch        *b_B_Hlt1TrackForwardPassThroughLooseDecision_TIS;   //!
   TBranch        *b_B_Hlt1TrackForwardPassThroughLooseDecision_TOS;   //!
   TBranch        *b_B_Hlt1LumiDecision_Dec;   //!
   TBranch        *b_B_Hlt1LumiDecision_TIS;   //!
   TBranch        *b_B_Hlt1LumiDecision_TOS;   //!
   TBranch        *b_B_Hlt1LumiMidBeamCrossingDecision_Dec;   //!
   TBranch        *b_B_Hlt1LumiMidBeamCrossingDecision_TIS;   //!
   TBranch        *b_B_Hlt1LumiMidBeamCrossingDecision_TOS;   //!
   TBranch        *b_B_Hlt1MBNoBiasDecision_Dec;   //!
   TBranch        *b_B_Hlt1MBNoBiasDecision_TIS;   //!
   TBranch        *b_B_Hlt1MBNoBiasDecision_TOS;   //!
   TBranch        *b_B_Hlt1CharmCalibrationNoBiasDecision_Dec;   //!
   TBranch        *b_B_Hlt1CharmCalibrationNoBiasDecision_TIS;   //!
   TBranch        *b_B_Hlt1CharmCalibrationNoBiasDecision_TOS;   //!
   TBranch        *b_B_Hlt1MBMicroBiasVeloDecision_Dec;   //!
   TBranch        *b_B_Hlt1MBMicroBiasVeloDecision_TIS;   //!
   TBranch        *b_B_Hlt1MBMicroBiasVeloDecision_TOS;   //!
   TBranch        *b_B_Hlt1MBMicroBiasTStationDecision_Dec;   //!
   TBranch        *b_B_Hlt1MBMicroBiasTStationDecision_TIS;   //!
   TBranch        *b_B_Hlt1MBMicroBiasTStationDecision_TOS;   //!
   TBranch        *b_B_Hlt1L0AnyDecision_Dec;   //!
   TBranch        *b_B_Hlt1L0AnyDecision_TIS;   //!
   TBranch        *b_B_Hlt1L0AnyDecision_TOS;   //!
   TBranch        *b_B_Hlt1L0AnyNoSPDDecision_Dec;   //!
   TBranch        *b_B_Hlt1L0AnyNoSPDDecision_TIS;   //!
   TBranch        *b_B_Hlt1L0AnyNoSPDDecision_TOS;   //!
   TBranch        *b_B_Hlt1L0HighSumETJetDecision_Dec;   //!
   TBranch        *b_B_Hlt1L0HighSumETJetDecision_TIS;   //!
   TBranch        *b_B_Hlt1L0HighSumETJetDecision_TOS;   //!
   TBranch        *b_B_Hlt1NoPVPassThroughDecision_Dec;   //!
   TBranch        *b_B_Hlt1NoPVPassThroughDecision_TIS;   //!
   TBranch        *b_B_Hlt1NoPVPassThroughDecision_TOS;   //!
   TBranch        *b_B_Hlt1DiProtonDecision_Dec;   //!
   TBranch        *b_B_Hlt1DiProtonDecision_TIS;   //!
   TBranch        *b_B_Hlt1DiProtonDecision_TOS;   //!
   TBranch        *b_B_Hlt1DiProtonLowMultDecision_Dec;   //!
   TBranch        *b_B_Hlt1DiProtonLowMultDecision_TIS;   //!
   TBranch        *b_B_Hlt1DiProtonLowMultDecision_TOS;   //!
   TBranch        *b_B_Hlt1BeamGasNoBeamBeam1Decision_Dec;   //!
   TBranch        *b_B_Hlt1BeamGasNoBeamBeam1Decision_TIS;   //!
   TBranch        *b_B_Hlt1BeamGasNoBeamBeam1Decision_TOS;   //!
   TBranch        *b_B_Hlt1BeamGasNoBeamBeam2Decision_Dec;   //!
   TBranch        *b_B_Hlt1BeamGasNoBeamBeam2Decision_TIS;   //!
   TBranch        *b_B_Hlt1BeamGasNoBeamBeam2Decision_TOS;   //!
   TBranch        *b_B_Hlt1BeamGasBeam1Decision_Dec;   //!
   TBranch        *b_B_Hlt1BeamGasBeam1Decision_TIS;   //!
   TBranch        *b_B_Hlt1BeamGasBeam1Decision_TOS;   //!
   TBranch        *b_B_Hlt1BeamGasBeam2Decision_Dec;   //!
   TBranch        *b_B_Hlt1BeamGasBeam2Decision_TIS;   //!
   TBranch        *b_B_Hlt1BeamGasBeam2Decision_TOS;   //!
   TBranch        *b_B_Hlt1BeamGasCrossingEnhancedBeam1Decision_Dec;   //!
   TBranch        *b_B_Hlt1BeamGasCrossingEnhancedBeam1Decision_TIS;   //!
   TBranch        *b_B_Hlt1BeamGasCrossingEnhancedBeam1Decision_TOS;   //!
   TBranch        *b_B_Hlt1BeamGasCrossingEnhancedBeam2Decision_Dec;   //!
   TBranch        *b_B_Hlt1BeamGasCrossingEnhancedBeam2Decision_TIS;   //!
   TBranch        *b_B_Hlt1BeamGasCrossingEnhancedBeam2Decision_TOS;   //!
   TBranch        *b_B_Hlt1BeamGasCrossingForcedRecoDecision_Dec;   //!
   TBranch        *b_B_Hlt1BeamGasCrossingForcedRecoDecision_TIS;   //!
   TBranch        *b_B_Hlt1BeamGasCrossingForcedRecoDecision_TOS;   //!
   TBranch        *b_B_Hlt1BeamGasCrossingForcedRecoFullZDecision_Dec;   //!
   TBranch        *b_B_Hlt1BeamGasCrossingForcedRecoFullZDecision_TIS;   //!
   TBranch        *b_B_Hlt1BeamGasCrossingForcedRecoFullZDecision_TOS;   //!
   TBranch        *b_B_Hlt1BeamGasHighRhoVerticesDecision_Dec;   //!
   TBranch        *b_B_Hlt1BeamGasHighRhoVerticesDecision_TIS;   //!
   TBranch        *b_B_Hlt1BeamGasHighRhoVerticesDecision_TOS;   //!
   TBranch        *b_B_Hlt1ODINTechnicalDecision_Dec;   //!
   TBranch        *b_B_Hlt1ODINTechnicalDecision_TIS;   //!
   TBranch        *b_B_Hlt1ODINTechnicalDecision_TOS;   //!
   TBranch        *b_B_Hlt1Tell1ErrorDecision_Dec;   //!
   TBranch        *b_B_Hlt1Tell1ErrorDecision_TIS;   //!
   TBranch        *b_B_Hlt1Tell1ErrorDecision_TOS;   //!
   TBranch        *b_B_Hlt1VeloClosingMicroBiasDecision_Dec;   //!
   TBranch        *b_B_Hlt1VeloClosingMicroBiasDecision_TIS;   //!
   TBranch        *b_B_Hlt1VeloClosingMicroBiasDecision_TOS;   //!
   TBranch        *b_B_Hlt1VertexDisplVertexDecision_Dec;   //!
   TBranch        *b_B_Hlt1VertexDisplVertexDecision_TIS;   //!
   TBranch        *b_B_Hlt1VertexDisplVertexDecision_TOS;   //!
   TBranch        *b_B_Hlt1BeamGasCrossingParasiticDecision_Dec;   //!
   TBranch        *b_B_Hlt1BeamGasCrossingParasiticDecision_TIS;   //!
   TBranch        *b_B_Hlt1BeamGasCrossingParasiticDecision_TOS;   //!
   TBranch        *b_B_Hlt1ErrorEventDecision_Dec;   //!
   TBranch        *b_B_Hlt1ErrorEventDecision_TIS;   //!
   TBranch        *b_B_Hlt1ErrorEventDecision_TOS;   //!
   TBranch        *b_B_Hlt1GlobalDecision_Dec;   //!
   TBranch        *b_B_Hlt1GlobalDecision_TIS;   //!
   TBranch        *b_B_Hlt1GlobalDecision_TOS;   //!
   TBranch        *b_B_Hlt1TrackMuonNoSPDDecision_Dec;   //!
   TBranch        *b_B_Hlt1TrackMuonNoSPDDecision_TIS;   //!
   TBranch        *b_B_Hlt1TrackMuonNoSPDDecision_TOS;   //!
   TBranch        *b_B_Hlt1TrackMVADecision_Dec;   //!
   TBranch        *b_B_Hlt1TrackMVADecision_TIS;   //!
   TBranch        *b_B_Hlt1TrackMVADecision_TOS;   //!
   TBranch        *b_B_Hlt1TwoTrackMVADecision_Dec;   //!
   TBranch        *b_B_Hlt1TwoTrackMVADecision_TIS;   //!
   TBranch        *b_B_Hlt1TwoTrackMVADecision_TOS;   //!
   TBranch        *b_B_Hlt2SingleMuonNoSPDDecision_Dec;   //!
   TBranch        *b_B_Hlt2SingleMuonNoSPDDecision_TIS;   //!
   TBranch        *b_B_Hlt2SingleMuonNoSPDDecision_TOS;   //!
   TBranch        *b_B_Hlt2SingleElectronTFLowPtDecision_Dec;   //!
   TBranch        *b_B_Hlt2SingleElectronTFLowPtDecision_TIS;   //!
   TBranch        *b_B_Hlt2SingleElectronTFLowPtDecision_TOS;   //!
   TBranch        *b_B_Hlt2SingleElectronTFHighPtDecision_Dec;   //!
   TBranch        *b_B_Hlt2SingleElectronTFHighPtDecision_TIS;   //!
   TBranch        *b_B_Hlt2SingleElectronTFHighPtDecision_TOS;   //!
   TBranch        *b_B_Hlt2DiElectronHighMassDecision_Dec;   //!
   TBranch        *b_B_Hlt2DiElectronHighMassDecision_TIS;   //!
   TBranch        *b_B_Hlt2DiElectronHighMassDecision_TOS;   //!
   TBranch        *b_B_Hlt2DiElectronBDecision_Dec;   //!
   TBranch        *b_B_Hlt2DiElectronBDecision_TIS;   //!
   TBranch        *b_B_Hlt2DiElectronBDecision_TOS;   //!
   TBranch        *b_B_Hlt2B2HHLTUnbiasedDecision_Dec;   //!
   TBranch        *b_B_Hlt2B2HHLTUnbiasedDecision_TIS;   //!
   TBranch        *b_B_Hlt2B2HHLTUnbiasedDecision_TOS;   //!
   TBranch        *b_B_Hlt2Topo2BodySimpleDecision_Dec;   //!
   TBranch        *b_B_Hlt2Topo2BodySimpleDecision_TIS;   //!
   TBranch        *b_B_Hlt2Topo2BodySimpleDecision_TOS;   //!
   TBranch        *b_B_Hlt2Topo3BodySimpleDecision_Dec;   //!
   TBranch        *b_B_Hlt2Topo3BodySimpleDecision_TIS;   //!
   TBranch        *b_B_Hlt2Topo3BodySimpleDecision_TOS;   //!
   TBranch        *b_B_Hlt2Topo4BodySimpleDecision_Dec;   //!
   TBranch        *b_B_Hlt2Topo4BodySimpleDecision_TIS;   //!
   TBranch        *b_B_Hlt2Topo4BodySimpleDecision_TOS;   //!
   TBranch        *b_B_Hlt2Topo2BodyBBDTDecision_Dec;   //!
   TBranch        *b_B_Hlt2Topo2BodyBBDTDecision_TIS;   //!
   TBranch        *b_B_Hlt2Topo2BodyBBDTDecision_TOS;   //!
   TBranch        *b_B_Hlt2Topo3BodyBBDTDecision_Dec;   //!
   TBranch        *b_B_Hlt2Topo3BodyBBDTDecision_TIS;   //!
   TBranch        *b_B_Hlt2Topo3BodyBBDTDecision_TOS;   //!
   TBranch        *b_B_Hlt2Topo4BodyBBDTDecision_Dec;   //!
   TBranch        *b_B_Hlt2Topo4BodyBBDTDecision_TIS;   //!
   TBranch        *b_B_Hlt2Topo4BodyBBDTDecision_TOS;   //!
   TBranch        *b_B_Hlt2TopoMu2BodyBBDTDecision_Dec;   //!
   TBranch        *b_B_Hlt2TopoMu2BodyBBDTDecision_TIS;   //!
   TBranch        *b_B_Hlt2TopoMu2BodyBBDTDecision_TOS;   //!
   TBranch        *b_B_Hlt2TopoMu3BodyBBDTDecision_Dec;   //!
   TBranch        *b_B_Hlt2TopoMu3BodyBBDTDecision_TIS;   //!
   TBranch        *b_B_Hlt2TopoMu3BodyBBDTDecision_TOS;   //!
   TBranch        *b_B_Hlt2TopoMu4BodyBBDTDecision_Dec;   //!
   TBranch        *b_B_Hlt2TopoMu4BodyBBDTDecision_TIS;   //!
   TBranch        *b_B_Hlt2TopoMu4BodyBBDTDecision_TOS;   //!
   TBranch        *b_B_Hlt2TopoE2BodyBBDTDecision_Dec;   //!
   TBranch        *b_B_Hlt2TopoE2BodyBBDTDecision_TIS;   //!
   TBranch        *b_B_Hlt2TopoE2BodyBBDTDecision_TOS;   //!
   TBranch        *b_B_Hlt2TopoE3BodyBBDTDecision_Dec;   //!
   TBranch        *b_B_Hlt2TopoE3BodyBBDTDecision_TIS;   //!
   TBranch        *b_B_Hlt2TopoE3BodyBBDTDecision_TOS;   //!
   TBranch        *b_B_Hlt2TopoE4BodyBBDTDecision_Dec;   //!
   TBranch        *b_B_Hlt2TopoE4BodyBBDTDecision_TIS;   //!
   TBranch        *b_B_Hlt2TopoE4BodyBBDTDecision_TOS;   //!
   TBranch        *b_B_Hlt2IncPhiDecision_Dec;   //!
   TBranch        *b_B_Hlt2IncPhiDecision_TIS;   //!
   TBranch        *b_B_Hlt2IncPhiDecision_TOS;   //!
   TBranch        *b_B_Hlt2IncPhiSidebandsDecision_Dec;   //!
   TBranch        *b_B_Hlt2IncPhiSidebandsDecision_TIS;   //!
   TBranch        *b_B_Hlt2IncPhiSidebandsDecision_TOS;   //!
   TBranch        *b_B_Hlt2MuonFromHLT1Decision_Dec;   //!
   TBranch        *b_B_Hlt2MuonFromHLT1Decision_TIS;   //!
   TBranch        *b_B_Hlt2MuonFromHLT1Decision_TOS;   //!
   TBranch        *b_B_Hlt2SingleMuonDecision_Dec;   //!
   TBranch        *b_B_Hlt2SingleMuonDecision_TIS;   //!
   TBranch        *b_B_Hlt2SingleMuonDecision_TOS;   //!
   TBranch        *b_B_Hlt2SingleMuonHighPTDecision_Dec;   //!
   TBranch        *b_B_Hlt2SingleMuonHighPTDecision_TIS;   //!
   TBranch        *b_B_Hlt2SingleMuonHighPTDecision_TOS;   //!
   TBranch        *b_B_Hlt2SingleMuonLowPTDecision_Dec;   //!
   TBranch        *b_B_Hlt2SingleMuonLowPTDecision_TIS;   //!
   TBranch        *b_B_Hlt2SingleMuonLowPTDecision_TOS;   //!
   TBranch        *b_B_Hlt2DiMuonDecision_Dec;   //!
   TBranch        *b_B_Hlt2DiMuonDecision_TIS;   //!
   TBranch        *b_B_Hlt2DiMuonDecision_TOS;   //!
   TBranch        *b_B_Hlt2DiMuonLowMassDecision_Dec;   //!
   TBranch        *b_B_Hlt2DiMuonLowMassDecision_TIS;   //!
   TBranch        *b_B_Hlt2DiMuonLowMassDecision_TOS;   //!
   TBranch        *b_B_Hlt2DiMuonJPsiDecision_Dec;   //!
   TBranch        *b_B_Hlt2DiMuonJPsiDecision_TIS;   //!
   TBranch        *b_B_Hlt2DiMuonJPsiDecision_TOS;   //!
   TBranch        *b_B_Hlt2DiMuonJPsiHighPTDecision_Dec;   //!
   TBranch        *b_B_Hlt2DiMuonJPsiHighPTDecision_TIS;   //!
   TBranch        *b_B_Hlt2DiMuonJPsiHighPTDecision_TOS;   //!
   TBranch        *b_B_Hlt2DiMuonPsi2SDecision_Dec;   //!
   TBranch        *b_B_Hlt2DiMuonPsi2SDecision_TIS;   //!
   TBranch        *b_B_Hlt2DiMuonPsi2SDecision_TOS;   //!
   TBranch        *b_B_Hlt2DiMuonBDecision_Dec;   //!
   TBranch        *b_B_Hlt2DiMuonBDecision_TIS;   //!
   TBranch        *b_B_Hlt2DiMuonBDecision_TOS;   //!
   TBranch        *b_B_Hlt2DiMuonZDecision_Dec;   //!
   TBranch        *b_B_Hlt2DiMuonZDecision_TIS;   //!
   TBranch        *b_B_Hlt2DiMuonZDecision_TOS;   //!
   TBranch        *b_B_Hlt2DiMuonDY1Decision_Dec;   //!
   TBranch        *b_B_Hlt2DiMuonDY1Decision_TIS;   //!
   TBranch        *b_B_Hlt2DiMuonDY1Decision_TOS;   //!
   TBranch        *b_B_Hlt2DiMuonDY2Decision_Dec;   //!
   TBranch        *b_B_Hlt2DiMuonDY2Decision_TIS;   //!
   TBranch        *b_B_Hlt2DiMuonDY2Decision_TOS;   //!
   TBranch        *b_B_Hlt2DiMuonDY3Decision_Dec;   //!
   TBranch        *b_B_Hlt2DiMuonDY3Decision_TIS;   //!
   TBranch        *b_B_Hlt2DiMuonDY3Decision_TOS;   //!
   TBranch        *b_B_Hlt2DiMuonDY4Decision_Dec;   //!
   TBranch        *b_B_Hlt2DiMuonDY4Decision_TIS;   //!
   TBranch        *b_B_Hlt2DiMuonDY4Decision_TOS;   //!
   TBranch        *b_B_Hlt2DiMuonDetachedDecision_Dec;   //!
   TBranch        *b_B_Hlt2DiMuonDetachedDecision_TIS;   //!
   TBranch        *b_B_Hlt2DiMuonDetachedDecision_TOS;   //!
   TBranch        *b_B_Hlt2DiMuonDetachedHeavyDecision_Dec;   //!
   TBranch        *b_B_Hlt2DiMuonDetachedHeavyDecision_TIS;   //!
   TBranch        *b_B_Hlt2DiMuonDetachedHeavyDecision_TOS;   //!
   TBranch        *b_B_Hlt2DiMuonDetachedJPsiDecision_Dec;   //!
   TBranch        *b_B_Hlt2DiMuonDetachedJPsiDecision_TIS;   //!
   TBranch        *b_B_Hlt2DiMuonDetachedJPsiDecision_TOS;   //!
   TBranch        *b_B_Hlt2DiMuonNoPVDecision_Dec;   //!
   TBranch        *b_B_Hlt2DiMuonNoPVDecision_TIS;   //!
   TBranch        *b_B_Hlt2DiMuonNoPVDecision_TOS;   //!
   TBranch        *b_B_Hlt2TriMuonDetachedDecision_Dec;   //!
   TBranch        *b_B_Hlt2TriMuonDetachedDecision_TIS;   //!
   TBranch        *b_B_Hlt2TriMuonDetachedDecision_TOS;   //!
   TBranch        *b_B_Hlt2TriMuonTauDecision_Dec;   //!
   TBranch        *b_B_Hlt2TriMuonTauDecision_TIS;   //!
   TBranch        *b_B_Hlt2TriMuonTauDecision_TOS;   //!
   TBranch        *b_B_Hlt2Topo2BodyDecision_Dec;   //!
   TBranch        *b_B_Hlt2Topo2BodyDecision_TIS;   //!
   TBranch        *b_B_Hlt2Topo2BodyDecision_TOS;   //!
   TBranch        *b_B_Hlt2Topo3BodyDecision_Dec;   //!
   TBranch        *b_B_Hlt2Topo3BodyDecision_TIS;   //!
   TBranch        *b_B_Hlt2Topo3BodyDecision_TOS;   //!
   TBranch        *b_B_Hlt2Topo4BodyDecision_Dec;   //!
   TBranch        *b_B_Hlt2Topo4BodyDecision_TIS;   //!
   TBranch        *b_B_Hlt2Topo4BodyDecision_TOS;   //!
   TBranch        *b_B_Hlt2TopoMu2BodyDecision_Dec;   //!
   TBranch        *b_B_Hlt2TopoMu2BodyDecision_TIS;   //!
   TBranch        *b_B_Hlt2TopoMu2BodyDecision_TOS;   //!
   TBranch        *b_B_Hlt2TopoMu3BodyDecision_Dec;   //!
   TBranch        *b_B_Hlt2TopoMu3BodyDecision_TIS;   //!
   TBranch        *b_B_Hlt2TopoMu3BodyDecision_TOS;   //!
   TBranch        *b_B_Hlt2TopoMu4BodyDecision_Dec;   //!
   TBranch        *b_B_Hlt2TopoMu4BodyDecision_TIS;   //!
   TBranch        *b_B_Hlt2TopoMu4BodyDecision_TOS;   //!
   TBranch        *b_J_psi_1S_LOKI_ENERGY;   //!
   TBranch        *b_J_psi_1S_LOKI_ETA;   //!
   TBranch        *b_J_psi_1S_LOKI_PHI;   //!
   TBranch        *b_J_psi_1S_MINIP;   //!
   TBranch        *b_J_psi_1S_MINIPCHI2;   //!
   TBranch        *b_J_psi_1S_MINIPNEXTBEST;   //!
   TBranch        *b_J_psi_1S_MINIPCHI2NEXTBEST;   //!
   TBranch        *b_J_psi_1S_AllIP;   //!
   TBranch        *b_J_psi_1S_AllIPchi2;   //!
   TBranch        *b_J_psi_1S_AllDIRA;   //!
   TBranch        *b_J_psi_1S_ENDVERTEX_X;   //!
   TBranch        *b_J_psi_1S_ENDVERTEX_Y;   //!
   TBranch        *b_J_psi_1S_ENDVERTEX_Z;   //!
   TBranch        *b_J_psi_1S_ENDVERTEX_XERR;   //!
   TBranch        *b_J_psi_1S_ENDVERTEX_YERR;   //!
   TBranch        *b_J_psi_1S_ENDVERTEX_ZERR;   //!
   TBranch        *b_J_psi_1S_ENDVERTEX_CHI2;   //!
   TBranch        *b_J_psi_1S_ENDVERTEX_NDOF;   //!
   TBranch        *b_J_psi_1S_ENDVERTEX_COV_;   //!
   TBranch        *b_J_psi_1S_OWNPV_X;   //!
   TBranch        *b_J_psi_1S_OWNPV_Y;   //!
   TBranch        *b_J_psi_1S_OWNPV_Z;   //!
   TBranch        *b_J_psi_1S_OWNPV_XERR;   //!
   TBranch        *b_J_psi_1S_OWNPV_YERR;   //!
   TBranch        *b_J_psi_1S_OWNPV_ZERR;   //!
   TBranch        *b_J_psi_1S_OWNPV_CHI2;   //!
   TBranch        *b_J_psi_1S_OWNPV_NDOF;   //!
   TBranch        *b_J_psi_1S_OWNPV_COV_;   //!
   TBranch        *b_J_psi_1S_IP_OWNPV;   //!
   TBranch        *b_J_psi_1S_IPCHI2_OWNPV;   //!
   TBranch        *b_J_psi_1S_FD_OWNPV;   //!
   TBranch        *b_J_psi_1S_FDCHI2_OWNPV;   //!
   TBranch        *b_J_psi_1S_DIRA_OWNPV;   //!
   TBranch        *b_J_psi_1S_TOPPV_X;   //!
   TBranch        *b_J_psi_1S_TOPPV_Y;   //!
   TBranch        *b_J_psi_1S_TOPPV_Z;   //!
   TBranch        *b_J_psi_1S_TOPPV_XERR;   //!
   TBranch        *b_J_psi_1S_TOPPV_YERR;   //!
   TBranch        *b_J_psi_1S_TOPPV_ZERR;   //!
   TBranch        *b_J_psi_1S_TOPPV_CHI2;   //!
   TBranch        *b_J_psi_1S_TOPPV_NDOF;   //!
   TBranch        *b_J_psi_1S_TOPPV_COV_;   //!
   TBranch        *b_J_psi_1S_IP_TOPPV;   //!
   TBranch        *b_J_psi_1S_IPCHI2_TOPPV;   //!
   TBranch        *b_J_psi_1S_FD_TOPPV;   //!
   TBranch        *b_J_psi_1S_FDCHI2_TOPPV;   //!
   TBranch        *b_J_psi_1S_DIRA_TOPPV;   //!
   TBranch        *b_J_psi_1S_ORIVX_X;   //!
   TBranch        *b_J_psi_1S_ORIVX_Y;   //!
   TBranch        *b_J_psi_1S_ORIVX_Z;   //!
   TBranch        *b_J_psi_1S_ORIVX_XERR;   //!
   TBranch        *b_J_psi_1S_ORIVX_YERR;   //!
   TBranch        *b_J_psi_1S_ORIVX_ZERR;   //!
   TBranch        *b_J_psi_1S_ORIVX_CHI2;   //!
   TBranch        *b_J_psi_1S_ORIVX_NDOF;   //!
   TBranch        *b_J_psi_1S_ORIVX_COV_;   //!
   TBranch        *b_J_psi_1S_IP_ORIVX;   //!
   TBranch        *b_J_psi_1S_IPCHI2_ORIVX;   //!
   TBranch        *b_J_psi_1S_FD_ORIVX;   //!
   TBranch        *b_J_psi_1S_FDCHI2_ORIVX;   //!
   TBranch        *b_J_psi_1S_DIRA_ORIVX;   //!
   TBranch        *b_J_psi_1S_P;   //!
   TBranch        *b_J_psi_1S_PT;   //!
   TBranch        *b_J_psi_1S_PE;   //!
   TBranch        *b_J_psi_1S_PX;   //!
   TBranch        *b_J_psi_1S_PY;   //!
   TBranch        *b_J_psi_1S_PZ;   //!
   TBranch        *b_J_psi_1S_MM;   //!
   TBranch        *b_J_psi_1S_MMERR;   //!
   TBranch        *b_J_psi_1S_M;   //!
   TBranch        *b_J_psi_1S_ID;   //!
   TBranch        *b_J_psi_1S_TAU;   //!
   TBranch        *b_J_psi_1S_TAUERR;   //!
   TBranch        *b_J_psi_1S_TAUCHI2;   //!
   TBranch        *b_J_psi_1S_X;   //!
   TBranch        *b_J_psi_1S_Y;   //!
   TBranch        *b_J_psi_1S_L0Global_Dec;   //!
   TBranch        *b_J_psi_1S_L0Global_TIS;   //!
   TBranch        *b_J_psi_1S_L0Global_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt1Global_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt1Global_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt1Global_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt1Phys_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt1Phys_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt1Phys_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt2Global_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt2Global_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt2Global_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt2Phys_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt2Phys_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt2Phys_TOS;   //!
   TBranch        *b_J_psi_1S_L0PhysicsDecision_Dec;   //!
   TBranch        *b_J_psi_1S_L0PhysicsDecision_TIS;   //!
   TBranch        *b_J_psi_1S_L0PhysicsDecision_TOS;   //!
   TBranch        *b_J_psi_1S_L0MuonDecision_Dec;   //!
   TBranch        *b_J_psi_1S_L0MuonDecision_TIS;   //!
   TBranch        *b_J_psi_1S_L0MuonDecision_TOS;   //!
   TBranch        *b_J_psi_1S_L0DiMuonDecision_Dec;   //!
   TBranch        *b_J_psi_1S_L0DiMuonDecision_TIS;   //!
   TBranch        *b_J_psi_1S_L0DiMuonDecision_TOS;   //!
   TBranch        *b_J_psi_1S_L0MuonHighDecision_Dec;   //!
   TBranch        *b_J_psi_1S_L0MuonHighDecision_TIS;   //!
   TBranch        *b_J_psi_1S_L0MuonHighDecision_TOS;   //!
   TBranch        *b_J_psi_1S_L0HadronDecision_Dec;   //!
   TBranch        *b_J_psi_1S_L0HadronDecision_TIS;   //!
   TBranch        *b_J_psi_1S_L0HadronDecision_TOS;   //!
   TBranch        *b_J_psi_1S_L0ElectronDecision_Dec;   //!
   TBranch        *b_J_psi_1S_L0ElectronDecision_TIS;   //!
   TBranch        *b_J_psi_1S_L0ElectronDecision_TOS;   //!
   TBranch        *b_J_psi_1S_L0PhotonDecision_Dec;   //!
   TBranch        *b_J_psi_1S_L0PhotonDecision_TIS;   //!
   TBranch        *b_J_psi_1S_L0PhotonDecision_TOS;   //!
   TBranch        *b_J_psi_1S_L0MuonNoSPDDecision_Dec;   //!
   TBranch        *b_J_psi_1S_L0MuonNoSPDDecision_TIS;   //!
   TBranch        *b_J_psi_1S_L0MuonNoSPDDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt1DiMuonHighMassDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt1DiMuonHighMassDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt1DiMuonHighMassDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt1DiMuonLowMassDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt1DiMuonLowMassDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt1DiMuonLowMassDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt1SingleMuonNoIPDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt1SingleMuonNoIPDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt1SingleMuonNoIPDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt1SingleMuonHighPTDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt1SingleMuonHighPTDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt1SingleMuonHighPTDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt1SingleElectronNoIPDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt1SingleElectronNoIPDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt1SingleElectronNoIPDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt1TrackAllL0Decision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt1TrackAllL0Decision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt1TrackAllL0Decision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt1TrackAllL0TightDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt1TrackAllL0TightDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt1TrackAllL0TightDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt1TrackMuonDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt1TrackMuonDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt1TrackMuonDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt1TrackPhotonDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt1TrackPhotonDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt1TrackPhotonDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt1TrackForwardPassThroughDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt1TrackForwardPassThroughDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt1TrackForwardPassThroughDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt1TrackForwardPassThroughLooseDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt1TrackForwardPassThroughLooseDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt1TrackForwardPassThroughLooseDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt1LumiDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt1LumiDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt1LumiDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt1LumiMidBeamCrossingDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt1LumiMidBeamCrossingDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt1LumiMidBeamCrossingDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt1MBNoBiasDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt1MBNoBiasDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt1MBNoBiasDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt1CharmCalibrationNoBiasDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt1CharmCalibrationNoBiasDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt1CharmCalibrationNoBiasDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt1MBMicroBiasVeloDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt1MBMicroBiasVeloDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt1MBMicroBiasVeloDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt1MBMicroBiasTStationDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt1MBMicroBiasTStationDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt1MBMicroBiasTStationDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt1L0AnyDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt1L0AnyDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt1L0AnyDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt1L0AnyNoSPDDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt1L0AnyNoSPDDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt1L0AnyNoSPDDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt1L0HighSumETJetDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt1L0HighSumETJetDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt1L0HighSumETJetDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt1NoPVPassThroughDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt1NoPVPassThroughDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt1NoPVPassThroughDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt1DiProtonDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt1DiProtonDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt1DiProtonDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt1DiProtonLowMultDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt1DiProtonLowMultDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt1DiProtonLowMultDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt1BeamGasNoBeamBeam1Decision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt1BeamGasNoBeamBeam1Decision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt1BeamGasNoBeamBeam1Decision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt1BeamGasNoBeamBeam2Decision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt1BeamGasNoBeamBeam2Decision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt1BeamGasNoBeamBeam2Decision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt1BeamGasBeam1Decision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt1BeamGasBeam1Decision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt1BeamGasBeam1Decision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt1BeamGasBeam2Decision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt1BeamGasBeam2Decision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt1BeamGasBeam2Decision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt1BeamGasCrossingEnhancedBeam1Decision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt1BeamGasCrossingEnhancedBeam1Decision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt1BeamGasCrossingEnhancedBeam1Decision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt1BeamGasCrossingEnhancedBeam2Decision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt1BeamGasCrossingEnhancedBeam2Decision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt1BeamGasCrossingEnhancedBeam2Decision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt1BeamGasCrossingForcedRecoDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt1BeamGasCrossingForcedRecoDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt1BeamGasCrossingForcedRecoDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt1BeamGasCrossingForcedRecoFullZDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt1BeamGasCrossingForcedRecoFullZDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt1BeamGasCrossingForcedRecoFullZDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt1BeamGasHighRhoVerticesDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt1BeamGasHighRhoVerticesDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt1BeamGasHighRhoVerticesDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt1ODINTechnicalDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt1ODINTechnicalDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt1ODINTechnicalDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt1Tell1ErrorDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt1Tell1ErrorDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt1Tell1ErrorDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt1VeloClosingMicroBiasDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt1VeloClosingMicroBiasDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt1VeloClosingMicroBiasDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt1VertexDisplVertexDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt1VertexDisplVertexDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt1VertexDisplVertexDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt1BeamGasCrossingParasiticDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt1BeamGasCrossingParasiticDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt1BeamGasCrossingParasiticDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt1ErrorEventDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt1ErrorEventDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt1ErrorEventDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt1GlobalDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt1GlobalDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt1GlobalDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt1TrackMuonNoSPDDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt1TrackMuonNoSPDDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt1TrackMuonNoSPDDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt1TrackMVADecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt1TrackMVADecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt1TrackMVADecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt1TwoTrackMVADecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt1TwoTrackMVADecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt1TwoTrackMVADecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt2SingleMuonNoSPDDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt2SingleMuonNoSPDDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt2SingleMuonNoSPDDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt2SingleElectronTFLowPtDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt2SingleElectronTFLowPtDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt2SingleElectronTFLowPtDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt2SingleElectronTFHighPtDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt2SingleElectronTFHighPtDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt2SingleElectronTFHighPtDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt2DiElectronHighMassDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt2DiElectronHighMassDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt2DiElectronHighMassDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt2DiElectronBDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt2DiElectronBDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt2DiElectronBDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt2B2HHLTUnbiasedDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt2B2HHLTUnbiasedDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt2B2HHLTUnbiasedDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt2Topo2BodySimpleDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt2Topo2BodySimpleDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt2Topo2BodySimpleDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt2Topo3BodySimpleDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt2Topo3BodySimpleDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt2Topo3BodySimpleDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt2Topo4BodySimpleDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt2Topo4BodySimpleDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt2Topo4BodySimpleDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt2Topo2BodyBBDTDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt2Topo2BodyBBDTDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt2Topo2BodyBBDTDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt2Topo3BodyBBDTDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt2Topo3BodyBBDTDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt2Topo3BodyBBDTDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt2Topo4BodyBBDTDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt2Topo4BodyBBDTDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt2Topo4BodyBBDTDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt2TopoMu2BodyBBDTDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt2TopoMu2BodyBBDTDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt2TopoMu2BodyBBDTDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt2TopoMu3BodyBBDTDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt2TopoMu3BodyBBDTDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt2TopoMu3BodyBBDTDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt2TopoMu4BodyBBDTDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt2TopoMu4BodyBBDTDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt2TopoMu4BodyBBDTDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt2TopoE2BodyBBDTDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt2TopoE2BodyBBDTDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt2TopoE2BodyBBDTDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt2TopoE3BodyBBDTDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt2TopoE3BodyBBDTDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt2TopoE3BodyBBDTDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt2TopoE4BodyBBDTDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt2TopoE4BodyBBDTDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt2TopoE4BodyBBDTDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt2IncPhiDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt2IncPhiDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt2IncPhiDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt2IncPhiSidebandsDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt2IncPhiSidebandsDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt2IncPhiSidebandsDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt2MuonFromHLT1Decision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt2MuonFromHLT1Decision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt2MuonFromHLT1Decision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt2SingleMuonDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt2SingleMuonDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt2SingleMuonDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt2SingleMuonHighPTDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt2SingleMuonHighPTDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt2SingleMuonHighPTDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt2SingleMuonLowPTDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt2SingleMuonLowPTDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt2SingleMuonLowPTDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt2DiMuonDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt2DiMuonDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt2DiMuonDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt2DiMuonLowMassDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt2DiMuonLowMassDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt2DiMuonLowMassDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt2DiMuonJPsiDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt2DiMuonJPsiDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt2DiMuonJPsiDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt2DiMuonJPsiHighPTDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt2DiMuonJPsiHighPTDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt2DiMuonJPsiHighPTDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt2DiMuonPsi2SDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt2DiMuonPsi2SDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt2DiMuonPsi2SDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt2DiMuonBDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt2DiMuonBDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt2DiMuonBDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt2DiMuonZDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt2DiMuonZDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt2DiMuonZDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt2DiMuonDY1Decision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt2DiMuonDY1Decision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt2DiMuonDY1Decision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt2DiMuonDY2Decision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt2DiMuonDY2Decision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt2DiMuonDY2Decision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt2DiMuonDY3Decision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt2DiMuonDY3Decision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt2DiMuonDY3Decision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt2DiMuonDY4Decision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt2DiMuonDY4Decision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt2DiMuonDY4Decision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt2DiMuonDetachedDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt2DiMuonDetachedDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt2DiMuonDetachedDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt2DiMuonDetachedHeavyDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt2DiMuonDetachedHeavyDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt2DiMuonDetachedHeavyDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt2DiMuonDetachedJPsiDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt2DiMuonDetachedJPsiDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt2DiMuonDetachedJPsiDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt2DiMuonNoPVDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt2DiMuonNoPVDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt2DiMuonNoPVDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt2TriMuonDetachedDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt2TriMuonDetachedDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt2TriMuonDetachedDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt2TriMuonTauDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt2TriMuonTauDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt2TriMuonTauDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt2Topo2BodyDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt2Topo2BodyDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt2Topo2BodyDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt2Topo3BodyDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt2Topo3BodyDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt2Topo3BodyDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt2Topo4BodyDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt2Topo4BodyDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt2Topo4BodyDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt2TopoMu2BodyDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt2TopoMu2BodyDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt2TopoMu2BodyDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt2TopoMu3BodyDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt2TopoMu3BodyDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt2TopoMu3BodyDecision_TOS;   //!
   TBranch        *b_J_psi_1S_Hlt2TopoMu4BodyDecision_Dec;   //!
   TBranch        *b_J_psi_1S_Hlt2TopoMu4BodyDecision_TIS;   //!
   TBranch        *b_J_psi_1S_Hlt2TopoMu4BodyDecision_TOS;   //!
   TBranch        *b_muplus_LOKI_ENERGY;   //!
   TBranch        *b_muplus_LOKI_ETA;   //!
   TBranch        *b_muplus_LOKI_PHI;   //!
   TBranch        *b_muplus_MINIP;   //!
   TBranch        *b_muplus_MINIPCHI2;   //!
   TBranch        *b_muplus_MINIPNEXTBEST;   //!
   TBranch        *b_muplus_MINIPCHI2NEXTBEST;   //!
   TBranch        *b_muplus_AllIP;   //!
   TBranch        *b_muplus_AllIPchi2;   //!
   TBranch        *b_muplus_OWNPV_X;   //!
   TBranch        *b_muplus_OWNPV_Y;   //!
   TBranch        *b_muplus_OWNPV_Z;   //!
   TBranch        *b_muplus_OWNPV_XERR;   //!
   TBranch        *b_muplus_OWNPV_YERR;   //!
   TBranch        *b_muplus_OWNPV_ZERR;   //!
   TBranch        *b_muplus_OWNPV_CHI2;   //!
   TBranch        *b_muplus_OWNPV_NDOF;   //!
   TBranch        *b_muplus_OWNPV_COV_;   //!
   TBranch        *b_muplus_IP_OWNPV;   //!
   TBranch        *b_muplus_IPCHI2_OWNPV;   //!
   TBranch        *b_muplus_TOPPV_X;   //!
   TBranch        *b_muplus_TOPPV_Y;   //!
   TBranch        *b_muplus_TOPPV_Z;   //!
   TBranch        *b_muplus_TOPPV_XERR;   //!
   TBranch        *b_muplus_TOPPV_YERR;   //!
   TBranch        *b_muplus_TOPPV_ZERR;   //!
   TBranch        *b_muplus_TOPPV_CHI2;   //!
   TBranch        *b_muplus_TOPPV_NDOF;   //!
   TBranch        *b_muplus_TOPPV_COV_;   //!
   TBranch        *b_muplus_IP_TOPPV;   //!
   TBranch        *b_muplus_IPCHI2_TOPPV;   //!
   TBranch        *b_muplus_ORIVX_X;   //!
   TBranch        *b_muplus_ORIVX_Y;   //!
   TBranch        *b_muplus_ORIVX_Z;   //!
   TBranch        *b_muplus_ORIVX_XERR;   //!
   TBranch        *b_muplus_ORIVX_YERR;   //!
   TBranch        *b_muplus_ORIVX_ZERR;   //!
   TBranch        *b_muplus_ORIVX_CHI2;   //!
   TBranch        *b_muplus_ORIVX_NDOF;   //!
   TBranch        *b_muplus_ORIVX_COV_;   //!
   TBranch        *b_muplus_IP_ORIVX;   //!
   TBranch        *b_muplus_IPCHI2_ORIVX;   //!
   TBranch        *b_muplus_P;   //!
   TBranch        *b_muplus_PT;   //!
   TBranch        *b_muplus_PE;   //!
   TBranch        *b_muplus_PX;   //!
   TBranch        *b_muplus_PY;   //!
   TBranch        *b_muplus_PZ;   //!
   TBranch        *b_muplus_M;   //!
   TBranch        *b_muplus_ID;   //!
   TBranch        *b_muplus_PIDe;   //!
   TBranch        *b_muplus_PIDmu;   //!
   TBranch        *b_muplus_PIDK;   //!
   TBranch        *b_muplus_PIDp;   //!
   TBranch        *b_muplus_ProbNNe;   //!
   TBranch        *b_muplus_ProbNNk;   //!
   TBranch        *b_muplus_ProbNNp;   //!
   TBranch        *b_muplus_ProbNNpi;   //!
   TBranch        *b_muplus_ProbNNmu;   //!
   TBranch        *b_muplus_ProbNNghost;   //!
   TBranch        *b_muplus_hasMuon;   //!
   TBranch        *b_muplus_isMuon;   //!
   TBranch        *b_muplus_hasRich;   //!
   TBranch        *b_muplus_hasCalo;   //!
   TBranch        *b_muplus_TRACK_Type;   //!
   TBranch        *b_muplus_TRACK_Key;   //!
   TBranch        *b_muplus_TRACK_CHI2;   //!
   TBranch        *b_muplus_TRACK_NDOF;   //!
   TBranch        *b_muplus_TRACK_CHI2NDOF;   //!
   TBranch        *b_muplus_TRACK_PCHI2;   //!
   TBranch        *b_muplus_TRACK_VeloCHI2NDOF;   //!
   TBranch        *b_muplus_TRACK_TCHI2NDOF;   //!
   TBranch        *b_muplus_VELO_UTID;   //!
   TBranch        *b_muplus_TRACK_FirstMeasurementX;   //!
   TBranch        *b_muplus_TRACK_FirstMeasurementY;   //!
   TBranch        *b_muplus_TRACK_FirstMeasurementZ;   //!
   TBranch        *b_muplus_TRACK_MatchCHI2;   //!
   TBranch        *b_muplus_TRACK_GhostProb;   //!
   TBranch        *b_muplus_TRACK_CloneDist;   //!
   TBranch        *b_muplus_TRACK_Likelihood;   //!
   TBranch        *b_muplus_X;   //!
   TBranch        *b_muplus_Y;   //!
   TBranch        *b_muminus_LOKI_ENERGY;   //!
   TBranch        *b_muminus_LOKI_ETA;   //!
   TBranch        *b_muminus_LOKI_PHI;   //!
   TBranch        *b_muminus_MINIP;   //!
   TBranch        *b_muminus_MINIPCHI2;   //!
   TBranch        *b_muminus_MINIPNEXTBEST;   //!
   TBranch        *b_muminus_MINIPCHI2NEXTBEST;   //!
   TBranch        *b_muminus_AllIP;   //!
   TBranch        *b_muminus_AllIPchi2;   //!
   TBranch        *b_muminus_OWNPV_X;   //!
   TBranch        *b_muminus_OWNPV_Y;   //!
   TBranch        *b_muminus_OWNPV_Z;   //!
   TBranch        *b_muminus_OWNPV_XERR;   //!
   TBranch        *b_muminus_OWNPV_YERR;   //!
   TBranch        *b_muminus_OWNPV_ZERR;   //!
   TBranch        *b_muminus_OWNPV_CHI2;   //!
   TBranch        *b_muminus_OWNPV_NDOF;   //!
   TBranch        *b_muminus_OWNPV_COV_;   //!
   TBranch        *b_muminus_IP_OWNPV;   //!
   TBranch        *b_muminus_IPCHI2_OWNPV;   //!
   TBranch        *b_muminus_TOPPV_X;   //!
   TBranch        *b_muminus_TOPPV_Y;   //!
   TBranch        *b_muminus_TOPPV_Z;   //!
   TBranch        *b_muminus_TOPPV_XERR;   //!
   TBranch        *b_muminus_TOPPV_YERR;   //!
   TBranch        *b_muminus_TOPPV_ZERR;   //!
   TBranch        *b_muminus_TOPPV_CHI2;   //!
   TBranch        *b_muminus_TOPPV_NDOF;   //!
   TBranch        *b_muminus_TOPPV_COV_;   //!
   TBranch        *b_muminus_IP_TOPPV;   //!
   TBranch        *b_muminus_IPCHI2_TOPPV;   //!
   TBranch        *b_muminus_ORIVX_X;   //!
   TBranch        *b_muminus_ORIVX_Y;   //!
   TBranch        *b_muminus_ORIVX_Z;   //!
   TBranch        *b_muminus_ORIVX_XERR;   //!
   TBranch        *b_muminus_ORIVX_YERR;   //!
   TBranch        *b_muminus_ORIVX_ZERR;   //!
   TBranch        *b_muminus_ORIVX_CHI2;   //!
   TBranch        *b_muminus_ORIVX_NDOF;   //!
   TBranch        *b_muminus_ORIVX_COV_;   //!
   TBranch        *b_muminus_IP_ORIVX;   //!
   TBranch        *b_muminus_IPCHI2_ORIVX;   //!
   TBranch        *b_muminus_P;   //!
   TBranch        *b_muminus_PT;   //!
   TBranch        *b_muminus_PE;   //!
   TBranch        *b_muminus_PX;   //!
   TBranch        *b_muminus_PY;   //!
   TBranch        *b_muminus_PZ;   //!
   TBranch        *b_muminus_M;   //!
   TBranch        *b_muminus_ID;   //!
   TBranch        *b_muminus_PIDe;   //!
   TBranch        *b_muminus_PIDmu;   //!
   TBranch        *b_muminus_PIDK;   //!
   TBranch        *b_muminus_PIDp;   //!
   TBranch        *b_muminus_ProbNNe;   //!
   TBranch        *b_muminus_ProbNNk;   //!
   TBranch        *b_muminus_ProbNNp;   //!
   TBranch        *b_muminus_ProbNNpi;   //!
   TBranch        *b_muminus_ProbNNmu;   //!
   TBranch        *b_muminus_ProbNNghost;   //!
   TBranch        *b_muminus_hasMuon;   //!
   TBranch        *b_muminus_isMuon;   //!
   TBranch        *b_muminus_hasRich;   //!
   TBranch        *b_muminus_hasCalo;   //!
   TBranch        *b_muminus_TRACK_Type;   //!
   TBranch        *b_muminus_TRACK_Key;   //!
   TBranch        *b_muminus_TRACK_CHI2;   //!
   TBranch        *b_muminus_TRACK_NDOF;   //!
   TBranch        *b_muminus_TRACK_CHI2NDOF;   //!
   TBranch        *b_muminus_TRACK_PCHI2;   //!
   TBranch        *b_muminus_TRACK_VeloCHI2NDOF;   //!
   TBranch        *b_muminus_TRACK_TCHI2NDOF;   //!
   TBranch        *b_muminus_VELO_UTID;   //!
   TBranch        *b_muminus_TRACK_FirstMeasurementX;   //!
   TBranch        *b_muminus_TRACK_FirstMeasurementY;   //!
   TBranch        *b_muminus_TRACK_FirstMeasurementZ;   //!
   TBranch        *b_muminus_TRACK_MatchCHI2;   //!
   TBranch        *b_muminus_TRACK_GhostProb;   //!
   TBranch        *b_muminus_TRACK_CloneDist;   //!
   TBranch        *b_muminus_TRACK_Likelihood;   //!
   TBranch        *b_muminus_X;   //!
   TBranch        *b_muminus_Y;   //!
   TBranch        *b_Kst_892_0_LOKI_ENERGY;   //!
   TBranch        *b_Kst_892_0_LOKI_ETA;   //!
   TBranch        *b_Kst_892_0_LOKI_PHI;   //!
   TBranch        *b_Kst_892_0_MINIP;   //!
   TBranch        *b_Kst_892_0_MINIPCHI2;   //!
   TBranch        *b_Kst_892_0_MINIPNEXTBEST;   //!
   TBranch        *b_Kst_892_0_MINIPCHI2NEXTBEST;   //!
   TBranch        *b_Kst_892_0_AllIP;   //!
   TBranch        *b_Kst_892_0_AllIPchi2;   //!
   TBranch        *b_Kst_892_0_AllDIRA;   //!
   TBranch        *b_Kst_892_0_ENDVERTEX_X;   //!
   TBranch        *b_Kst_892_0_ENDVERTEX_Y;   //!
   TBranch        *b_Kst_892_0_ENDVERTEX_Z;   //!
   TBranch        *b_Kst_892_0_ENDVERTEX_XERR;   //!
   TBranch        *b_Kst_892_0_ENDVERTEX_YERR;   //!
   TBranch        *b_Kst_892_0_ENDVERTEX_ZERR;   //!
   TBranch        *b_Kst_892_0_ENDVERTEX_CHI2;   //!
   TBranch        *b_Kst_892_0_ENDVERTEX_NDOF;   //!
   TBranch        *b_Kst_892_0_ENDVERTEX_COV_;   //!
   TBranch        *b_Kst_892_0_OWNPV_X;   //!
   TBranch        *b_Kst_892_0_OWNPV_Y;   //!
   TBranch        *b_Kst_892_0_OWNPV_Z;   //!
   TBranch        *b_Kst_892_0_OWNPV_XERR;   //!
   TBranch        *b_Kst_892_0_OWNPV_YERR;   //!
   TBranch        *b_Kst_892_0_OWNPV_ZERR;   //!
   TBranch        *b_Kst_892_0_OWNPV_CHI2;   //!
   TBranch        *b_Kst_892_0_OWNPV_NDOF;   //!
   TBranch        *b_Kst_892_0_OWNPV_COV_;   //!
   TBranch        *b_Kst_892_0_IP_OWNPV;   //!
   TBranch        *b_Kst_892_0_IPCHI2_OWNPV;   //!
   TBranch        *b_Kst_892_0_FD_OWNPV;   //!
   TBranch        *b_Kst_892_0_FDCHI2_OWNPV;   //!
   TBranch        *b_Kst_892_0_DIRA_OWNPV;   //!
   TBranch        *b_Kst_892_0_TOPPV_X;   //!
   TBranch        *b_Kst_892_0_TOPPV_Y;   //!
   TBranch        *b_Kst_892_0_TOPPV_Z;   //!
   TBranch        *b_Kst_892_0_TOPPV_XERR;   //!
   TBranch        *b_Kst_892_0_TOPPV_YERR;   //!
   TBranch        *b_Kst_892_0_TOPPV_ZERR;   //!
   TBranch        *b_Kst_892_0_TOPPV_CHI2;   //!
   TBranch        *b_Kst_892_0_TOPPV_NDOF;   //!
   TBranch        *b_Kst_892_0_TOPPV_COV_;   //!
   TBranch        *b_Kst_892_0_IP_TOPPV;   //!
   TBranch        *b_Kst_892_0_IPCHI2_TOPPV;   //!
   TBranch        *b_Kst_892_0_FD_TOPPV;   //!
   TBranch        *b_Kst_892_0_FDCHI2_TOPPV;   //!
   TBranch        *b_Kst_892_0_DIRA_TOPPV;   //!
   TBranch        *b_Kst_892_0_ORIVX_X;   //!
   TBranch        *b_Kst_892_0_ORIVX_Y;   //!
   TBranch        *b_Kst_892_0_ORIVX_Z;   //!
   TBranch        *b_Kst_892_0_ORIVX_XERR;   //!
   TBranch        *b_Kst_892_0_ORIVX_YERR;   //!
   TBranch        *b_Kst_892_0_ORIVX_ZERR;   //!
   TBranch        *b_Kst_892_0_ORIVX_CHI2;   //!
   TBranch        *b_Kst_892_0_ORIVX_NDOF;   //!
   TBranch        *b_Kst_892_0_ORIVX_COV_;   //!
   TBranch        *b_Kst_892_0_IP_ORIVX;   //!
   TBranch        *b_Kst_892_0_IPCHI2_ORIVX;   //!
   TBranch        *b_Kst_892_0_FD_ORIVX;   //!
   TBranch        *b_Kst_892_0_FDCHI2_ORIVX;   //!
   TBranch        *b_Kst_892_0_DIRA_ORIVX;   //!
   TBranch        *b_Kst_892_0_P;   //!
   TBranch        *b_Kst_892_0_PT;   //!
   TBranch        *b_Kst_892_0_PE;   //!
   TBranch        *b_Kst_892_0_PX;   //!
   TBranch        *b_Kst_892_0_PY;   //!
   TBranch        *b_Kst_892_0_PZ;   //!
   TBranch        *b_Kst_892_0_MM;   //!
   TBranch        *b_Kst_892_0_MMERR;   //!
   TBranch        *b_Kst_892_0_M;   //!
   TBranch        *b_Kst_892_0_ID;   //!
   TBranch        *b_Kst_892_0_TAU;   //!
   TBranch        *b_Kst_892_0_TAUERR;   //!
   TBranch        *b_Kst_892_0_TAUCHI2;   //!
   TBranch        *b_Kst_892_0_X;   //!
   TBranch        *b_Kst_892_0_Y;   //!
   TBranch        *b_Kplus_LOKI_ENERGY;   //!
   TBranch        *b_Kplus_LOKI_ETA;   //!
   TBranch        *b_Kplus_LOKI_PHI;   //!
   TBranch        *b_Kplus_MINIP;   //!
   TBranch        *b_Kplus_MINIPCHI2;   //!
   TBranch        *b_Kplus_MINIPNEXTBEST;   //!
   TBranch        *b_Kplus_MINIPCHI2NEXTBEST;   //!
   TBranch        *b_Kplus_AllIP;   //!
   TBranch        *b_Kplus_AllIPchi2;   //!
   TBranch        *b_Kplus_OWNPV_X;   //!
   TBranch        *b_Kplus_OWNPV_Y;   //!
   TBranch        *b_Kplus_OWNPV_Z;   //!
   TBranch        *b_Kplus_OWNPV_XERR;   //!
   TBranch        *b_Kplus_OWNPV_YERR;   //!
   TBranch        *b_Kplus_OWNPV_ZERR;   //!
   TBranch        *b_Kplus_OWNPV_CHI2;   //!
   TBranch        *b_Kplus_OWNPV_NDOF;   //!
   TBranch        *b_Kplus_OWNPV_COV_;   //!
   TBranch        *b_Kplus_IP_OWNPV;   //!
   TBranch        *b_Kplus_IPCHI2_OWNPV;   //!
   TBranch        *b_Kplus_TOPPV_X;   //!
   TBranch        *b_Kplus_TOPPV_Y;   //!
   TBranch        *b_Kplus_TOPPV_Z;   //!
   TBranch        *b_Kplus_TOPPV_XERR;   //!
   TBranch        *b_Kplus_TOPPV_YERR;   //!
   TBranch        *b_Kplus_TOPPV_ZERR;   //!
   TBranch        *b_Kplus_TOPPV_CHI2;   //!
   TBranch        *b_Kplus_TOPPV_NDOF;   //!
   TBranch        *b_Kplus_TOPPV_COV_;   //!
   TBranch        *b_Kplus_IP_TOPPV;   //!
   TBranch        *b_Kplus_IPCHI2_TOPPV;   //!
   TBranch        *b_Kplus_ORIVX_X;   //!
   TBranch        *b_Kplus_ORIVX_Y;   //!
   TBranch        *b_Kplus_ORIVX_Z;   //!
   TBranch        *b_Kplus_ORIVX_XERR;   //!
   TBranch        *b_Kplus_ORIVX_YERR;   //!
   TBranch        *b_Kplus_ORIVX_ZERR;   //!
   TBranch        *b_Kplus_ORIVX_CHI2;   //!
   TBranch        *b_Kplus_ORIVX_NDOF;   //!
   TBranch        *b_Kplus_ORIVX_COV_;   //!
   TBranch        *b_Kplus_IP_ORIVX;   //!
   TBranch        *b_Kplus_IPCHI2_ORIVX;   //!
   TBranch        *b_Kplus_P;   //!
   TBranch        *b_Kplus_PT;   //!
   TBranch        *b_Kplus_PE;   //!
   TBranch        *b_Kplus_PX;   //!
   TBranch        *b_Kplus_PY;   //!
   TBranch        *b_Kplus_PZ;   //!
   TBranch        *b_Kplus_M;   //!
   TBranch        *b_Kplus_ID;   //!
   TBranch        *b_Kplus_PIDe;   //!
   TBranch        *b_Kplus_PIDmu;   //!
   TBranch        *b_Kplus_PIDK;   //!
   TBranch        *b_Kplus_PIDp;   //!
   TBranch        *b_Kplus_ProbNNe;   //!
   TBranch        *b_Kplus_ProbNNk;   //!
   TBranch        *b_Kplus_ProbNNp;   //!
   TBranch        *b_Kplus_ProbNNpi;   //!
   TBranch        *b_Kplus_ProbNNmu;   //!
   TBranch        *b_Kplus_ProbNNghost;   //!
   TBranch        *b_Kplus_hasMuon;   //!
   TBranch        *b_Kplus_isMuon;   //!
   TBranch        *b_Kplus_hasRich;   //!
   TBranch        *b_Kplus_hasCalo;   //!
   TBranch        *b_Kplus_TRACK_Type;   //!
   TBranch        *b_Kplus_TRACK_Key;   //!
   TBranch        *b_Kplus_TRACK_CHI2;   //!
   TBranch        *b_Kplus_TRACK_NDOF;   //!
   TBranch        *b_Kplus_TRACK_CHI2NDOF;   //!
   TBranch        *b_Kplus_TRACK_PCHI2;   //!
   TBranch        *b_Kplus_TRACK_VeloCHI2NDOF;   //!
   TBranch        *b_Kplus_TRACK_TCHI2NDOF;   //!
   TBranch        *b_Kplus_VELO_UTID;   //!
   TBranch        *b_Kplus_TRACK_FirstMeasurementX;   //!
   TBranch        *b_Kplus_TRACK_FirstMeasurementY;   //!
   TBranch        *b_Kplus_TRACK_FirstMeasurementZ;   //!
   TBranch        *b_Kplus_TRACK_MatchCHI2;   //!
   TBranch        *b_Kplus_TRACK_GhostProb;   //!
   TBranch        *b_Kplus_TRACK_CloneDist;   //!
   TBranch        *b_Kplus_TRACK_Likelihood;   //!
   TBranch        *b_Kplus_X;   //!
   TBranch        *b_Kplus_Y;   //!
   TBranch        *b_piminus_LOKI_ENERGY;   //!
   TBranch        *b_piminus_LOKI_ETA;   //!
   TBranch        *b_piminus_LOKI_PHI;   //!
   TBranch        *b_piminus_MINIP;   //!
   TBranch        *b_piminus_MINIPCHI2;   //!
   TBranch        *b_piminus_MINIPNEXTBEST;   //!
   TBranch        *b_piminus_MINIPCHI2NEXTBEST;   //!
   TBranch        *b_piminus_AllIP;   //!
   TBranch        *b_piminus_AllIPchi2;   //!
   TBranch        *b_piminus_OWNPV_X;   //!
   TBranch        *b_piminus_OWNPV_Y;   //!
   TBranch        *b_piminus_OWNPV_Z;   //!
   TBranch        *b_piminus_OWNPV_XERR;   //!
   TBranch        *b_piminus_OWNPV_YERR;   //!
   TBranch        *b_piminus_OWNPV_ZERR;   //!
   TBranch        *b_piminus_OWNPV_CHI2;   //!
   TBranch        *b_piminus_OWNPV_NDOF;   //!
   TBranch        *b_piminus_OWNPV_COV_;   //!
   TBranch        *b_piminus_IP_OWNPV;   //!
   TBranch        *b_piminus_IPCHI2_OWNPV;   //!
   TBranch        *b_piminus_TOPPV_X;   //!
   TBranch        *b_piminus_TOPPV_Y;   //!
   TBranch        *b_piminus_TOPPV_Z;   //!
   TBranch        *b_piminus_TOPPV_XERR;   //!
   TBranch        *b_piminus_TOPPV_YERR;   //!
   TBranch        *b_piminus_TOPPV_ZERR;   //!
   TBranch        *b_piminus_TOPPV_CHI2;   //!
   TBranch        *b_piminus_TOPPV_NDOF;   //!
   TBranch        *b_piminus_TOPPV_COV_;   //!
   TBranch        *b_piminus_IP_TOPPV;   //!
   TBranch        *b_piminus_IPCHI2_TOPPV;   //!
   TBranch        *b_piminus_ORIVX_X;   //!
   TBranch        *b_piminus_ORIVX_Y;   //!
   TBranch        *b_piminus_ORIVX_Z;   //!
   TBranch        *b_piminus_ORIVX_XERR;   //!
   TBranch        *b_piminus_ORIVX_YERR;   //!
   TBranch        *b_piminus_ORIVX_ZERR;   //!
   TBranch        *b_piminus_ORIVX_CHI2;   //!
   TBranch        *b_piminus_ORIVX_NDOF;   //!
   TBranch        *b_piminus_ORIVX_COV_;   //!
   TBranch        *b_piminus_IP_ORIVX;   //!
   TBranch        *b_piminus_IPCHI2_ORIVX;   //!
   TBranch        *b_piminus_P;   //!
   TBranch        *b_piminus_PT;   //!
   TBranch        *b_piminus_PE;   //!
   TBranch        *b_piminus_PX;   //!
   TBranch        *b_piminus_PY;   //!
   TBranch        *b_piminus_PZ;   //!
   TBranch        *b_piminus_M;   //!
   TBranch        *b_piminus_ID;   //!
   TBranch        *b_piminus_PIDe;   //!
   TBranch        *b_piminus_PIDmu;   //!
   TBranch        *b_piminus_PIDK;   //!
   TBranch        *b_piminus_PIDp;   //!
   TBranch        *b_piminus_ProbNNe;   //!
   TBranch        *b_piminus_ProbNNk;   //!
   TBranch        *b_piminus_ProbNNp;   //!
   TBranch        *b_piminus_ProbNNpi;   //!
   TBranch        *b_piminus_ProbNNmu;   //!
   TBranch        *b_piminus_ProbNNghost;   //!
   TBranch        *b_piminus_hasMuon;   //!
   TBranch        *b_piminus_isMuon;   //!
   TBranch        *b_piminus_hasRich;   //!
   TBranch        *b_piminus_hasCalo;   //!
   TBranch        *b_piminus_TRACK_Type;   //!
   TBranch        *b_piminus_TRACK_Key;   //!
   TBranch        *b_piminus_TRACK_CHI2;   //!
   TBranch        *b_piminus_TRACK_NDOF;   //!
   TBranch        *b_piminus_TRACK_CHI2NDOF;   //!
   TBranch        *b_piminus_TRACK_PCHI2;   //!
   TBranch        *b_piminus_TRACK_VeloCHI2NDOF;   //!
   TBranch        *b_piminus_TRACK_TCHI2NDOF;   //!
   TBranch        *b_piminus_VELO_UTID;   //!
   TBranch        *b_piminus_TRACK_FirstMeasurementX;   //!
   TBranch        *b_piminus_TRACK_FirstMeasurementY;   //!
   TBranch        *b_piminus_TRACK_FirstMeasurementZ;   //!
   TBranch        *b_piminus_TRACK_MatchCHI2;   //!
   TBranch        *b_piminus_TRACK_GhostProb;   //!
   TBranch        *b_piminus_TRACK_CloneDist;   //!
   TBranch        *b_piminus_TRACK_Likelihood;   //!
   TBranch        *b_piminus_X;   //!
   TBranch        *b_piminus_Y;   //!
   TBranch        *b_nCandidate;   //!
   TBranch        *b_totCandidates;   //!
   TBranch        *b_EventInSequence;   //!
   TBranch        *b_runNumber;   //!
   TBranch        *b_eventNumber;   //!
   TBranch        *b_BCID;   //!
   TBranch        *b_BCType;   //!
   TBranch        *b_OdinTCK;   //!
   TBranch        *b_L0DUTCK;   //!
   TBranch        *b_HLT1TCK;   //!
   TBranch        *b_HLT2TCK;   //!
   TBranch        *b_GpsTime;   //!
   TBranch        *b_GpsYear;   //!
   TBranch        *b_GpsMonth;   //!
   TBranch        *b_GpsDay;   //!
   TBranch        *b_GpsHour;   //!
   TBranch        *b_GpsMinute;   //!
   TBranch        *b_GpsSecond;   //!
   TBranch        *b_TriggerType;   //!
   TBranch        *b_Polarity;   //!
   TBranch        *b_PVX;   //!
   TBranch        *b_PVY;   //!
   TBranch        *b_PVZ;   //!
   TBranch        *b_PVXERR;   //!
   TBranch        *b_PVYERR;   //!
   TBranch        *b_PVZERR;   //!
   TBranch        *b_PVCHI2;   //!
   TBranch        *b_PVNDOF;   //!
   TBranch        *b_PVNTRACKS;   //!
   TBranch        *b_nPVs;   //!
   TBranch        *b_nTracks;   //!
   TBranch        *b_nLongTracks;   //!
   TBranch        *b_nDownstreamTracks;   //!
   TBranch        *b_nUpstreamTracks;   //!
   TBranch        *b_nVeloTracks;   //!
   TBranch        *b_nTTracks;   //!
   TBranch        *b_nBackTracks;   //!
   TBranch        *b_nRich1Hits;   //!
   TBranch        *b_nRich2Hits;   //!
   TBranch        *b_nVeloClusters;   //!
   TBranch        *b_nITClusters;   //!
   TBranch        *b_nTTClusters;   //!
   TBranch        *b_nOTClusters;   //!
   TBranch        *b_nSPDHits;   //!
   TBranch        *b_nMuonCoordsS0;   //!
   TBranch        *b_nMuonCoordsS1;   //!
   TBranch        *b_nMuonCoordsS2;   //!
   TBranch        *b_nMuonCoordsS3;   //!
   TBranch        *b_nMuonCoordsS4;   //!
   TBranch        *b_nMuonTracks;   //!
   TBranch        *b_StrippingBetaSBs2JpsiPhiDetachedLineDecision;   //!
   TBranch        *b_StrippingBetaSBd2JpsiKstarDetachedLineDecision;   //!
   TBranch        *b_StrippingBetaSBu2JpsiKDetachedLineDecision;   //!

   selection_time(TTree *tree=0);
   virtual ~selection_time();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop(TString decay);
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef selection_time_cxx
selection_time::selection_time(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("../datasets/data/root/WG/DTT_2012_Reco14Strip21_Down_DIMUON.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("../datasets/data/root/WG/DTT_2012_Reco14Strip21_Down_DIMUON.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("../datasets/data/root/WG/DTT_2012_Reco14Strip21_Down_DIMUON.root:/Bd2JpsiKstarDetached");
      dir->GetObject("DecayTree",tree);

   }
   Init(tree);
}

selection_time::~selection_time()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t selection_time::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t selection_time::LoadTree(Long64_t entry)
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

void selection_time::Init(TTree *tree)
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

   fChain->SetBranchAddress("B_LOKI_ENERGY", &B_LOKI_ENERGY, &b_B_LOKI_ENERGY);
   fChain->SetBranchAddress("B_LOKI_ETA", &B_LOKI_ETA, &b_B_LOKI_ETA);
   fChain->SetBranchAddress("B_LOKI_PHI", &B_LOKI_PHI, &b_B_LOKI_PHI);
   fChain->SetBranchAddress("B_MINIP", &B_MINIP, &b_B_MINIP);
   fChain->SetBranchAddress("B_MINIPCHI2", &B_MINIPCHI2, &b_B_MINIPCHI2);
   fChain->SetBranchAddress("B_MINIPNEXTBEST", &B_MINIPNEXTBEST, &b_B_MINIPNEXTBEST);
   fChain->SetBranchAddress("B_MINIPCHI2NEXTBEST", &B_MINIPCHI2NEXTBEST, &b_B_MINIPCHI2NEXTBEST);
   fChain->SetBranchAddress("nPV", &nPV, &b_nPV);
   fChain->SetBranchAddress("B_AllIP", B_AllIP, &b_B_AllIP);
   fChain->SetBranchAddress("B_AllIPchi2", B_AllIPchi2, &b_B_AllIPchi2);
   fChain->SetBranchAddress("B_AllDIRA", B_AllDIRA, &b_B_AllDIRA);
   fChain->SetBranchAddress("B_ENDVERTEX_X", &B_ENDVERTEX_X, &b_B_ENDVERTEX_X);
   fChain->SetBranchAddress("B_ENDVERTEX_Y", &B_ENDVERTEX_Y, &b_B_ENDVERTEX_Y);
   fChain->SetBranchAddress("B_ENDVERTEX_Z", &B_ENDVERTEX_Z, &b_B_ENDVERTEX_Z);
   fChain->SetBranchAddress("B_ENDVERTEX_XERR", &B_ENDVERTEX_XERR, &b_B_ENDVERTEX_XERR);
   fChain->SetBranchAddress("B_ENDVERTEX_YERR", &B_ENDVERTEX_YERR, &b_B_ENDVERTEX_YERR);
   fChain->SetBranchAddress("B_ENDVERTEX_ZERR", &B_ENDVERTEX_ZERR, &b_B_ENDVERTEX_ZERR);
   fChain->SetBranchAddress("B_ENDVERTEX_CHI2", &B_ENDVERTEX_CHI2, &b_B_ENDVERTEX_CHI2);
   fChain->SetBranchAddress("B_ENDVERTEX_NDOF", &B_ENDVERTEX_NDOF, &b_B_ENDVERTEX_NDOF);
   fChain->SetBranchAddress("B_ENDVERTEX_COV_", B_ENDVERTEX_COV_, &b_B_ENDVERTEX_COV_);
   fChain->SetBranchAddress("B_OWNPV_X", &B_OWNPV_X, &b_B_OWNPV_X);
   fChain->SetBranchAddress("B_OWNPV_Y", &B_OWNPV_Y, &b_B_OWNPV_Y);
   fChain->SetBranchAddress("B_OWNPV_Z", &B_OWNPV_Z, &b_B_OWNPV_Z);
   fChain->SetBranchAddress("B_OWNPV_XERR", &B_OWNPV_XERR, &b_B_OWNPV_XERR);
   fChain->SetBranchAddress("B_OWNPV_YERR", &B_OWNPV_YERR, &b_B_OWNPV_YERR);
   fChain->SetBranchAddress("B_OWNPV_ZERR", &B_OWNPV_ZERR, &b_B_OWNPV_ZERR);
   fChain->SetBranchAddress("B_OWNPV_CHI2", &B_OWNPV_CHI2, &b_B_OWNPV_CHI2);
   fChain->SetBranchAddress("B_OWNPV_NDOF", &B_OWNPV_NDOF, &b_B_OWNPV_NDOF);
   fChain->SetBranchAddress("B_OWNPV_COV_", B_OWNPV_COV_, &b_B_OWNPV_COV_);
   fChain->SetBranchAddress("B_IP_OWNPV", &B_IP_OWNPV, &b_B_IP_OWNPV);
   fChain->SetBranchAddress("B_IPCHI2_OWNPV", &B_IPCHI2_OWNPV, &b_B_IPCHI2_OWNPV);
   fChain->SetBranchAddress("B_FD_OWNPV", &B_FD_OWNPV, &b_B_FD_OWNPV);
   fChain->SetBranchAddress("B_FDCHI2_OWNPV", &B_FDCHI2_OWNPV, &b_B_FDCHI2_OWNPV);
   fChain->SetBranchAddress("B_DIRA_OWNPV", &B_DIRA_OWNPV, &b_B_DIRA_OWNPV);
   fChain->SetBranchAddress("B_TOPPV_X", &B_TOPPV_X, &b_B_TOPPV_X);
   fChain->SetBranchAddress("B_TOPPV_Y", &B_TOPPV_Y, &b_B_TOPPV_Y);
   fChain->SetBranchAddress("B_TOPPV_Z", &B_TOPPV_Z, &b_B_TOPPV_Z);
   fChain->SetBranchAddress("B_TOPPV_XERR", &B_TOPPV_XERR, &b_B_TOPPV_XERR);
   fChain->SetBranchAddress("B_TOPPV_YERR", &B_TOPPV_YERR, &b_B_TOPPV_YERR);
   fChain->SetBranchAddress("B_TOPPV_ZERR", &B_TOPPV_ZERR, &b_B_TOPPV_ZERR);
   fChain->SetBranchAddress("B_TOPPV_CHI2", &B_TOPPV_CHI2, &b_B_TOPPV_CHI2);
   fChain->SetBranchAddress("B_TOPPV_NDOF", &B_TOPPV_NDOF, &b_B_TOPPV_NDOF);
   fChain->SetBranchAddress("B_TOPPV_COV_", B_TOPPV_COV_, &b_B_TOPPV_COV_);
   fChain->SetBranchAddress("B_IP_TOPPV", &B_IP_TOPPV, &b_B_IP_TOPPV);
   fChain->SetBranchAddress("B_IPCHI2_TOPPV", &B_IPCHI2_TOPPV, &b_B_IPCHI2_TOPPV);
   fChain->SetBranchAddress("B_FD_TOPPV", &B_FD_TOPPV, &b_B_FD_TOPPV);
   fChain->SetBranchAddress("B_FDCHI2_TOPPV", &B_FDCHI2_TOPPV, &b_B_FDCHI2_TOPPV);
   fChain->SetBranchAddress("B_DIRA_TOPPV", &B_DIRA_TOPPV, &b_B_DIRA_TOPPV);
   fChain->SetBranchAddress("B_P", &B_P, &b_B_P);
   fChain->SetBranchAddress("B_PT", &B_PT, &b_B_PT);
   fChain->SetBranchAddress("B_PE", &B_PE, &b_B_PE);
   fChain->SetBranchAddress("B_PX", &B_PX, &b_B_PX);
   fChain->SetBranchAddress("B_PY", &B_PY, &b_B_PY);
   fChain->SetBranchAddress("B_PZ", &B_PZ, &b_B_PZ);
   fChain->SetBranchAddress("B_MM", &B_MM, &b_B_MM);
   fChain->SetBranchAddress("B_MMERR", &B_MMERR, &b_B_MMERR);
   fChain->SetBranchAddress("B_M", &B_M, &b_B_M);
   fChain->SetBranchAddress("B_ID", &B_ID, &b_B_ID);
   fChain->SetBranchAddress("B_TAU", &B_TAU, &b_B_TAU);
   fChain->SetBranchAddress("B_TAUERR", &B_TAUERR, &b_B_TAUERR);
   fChain->SetBranchAddress("B_TAUCHI2", &B_TAUCHI2, &b_B_TAUCHI2);
   fChain->SetBranchAddress("B_TAGDECISION", &B_TAGDECISION, &b_B_TAGDECISION);
   fChain->SetBranchAddress("B_TAGOMEGA", &B_TAGOMEGA, &b_B_TAGOMEGA);
   fChain->SetBranchAddress("B_TAGDECISION_OS", &B_TAGDECISION_OS, &b_B_TAGDECISION_OS);
   fChain->SetBranchAddress("B_TAGOMEGA_OS", &B_TAGOMEGA_OS, &b_B_TAGOMEGA_OS);
   fChain->SetBranchAddress("B_TAGGER", &B_TAGGER, &b_B_TAGGER);
   fChain->SetBranchAddress("B_OS_Muon_DEC", &B_OS_Muon_DEC, &b_B_OS_Muon_DEC);
   fChain->SetBranchAddress("B_OS_Muon_PROB", &B_OS_Muon_PROB, &b_B_OS_Muon_PROB);
   fChain->SetBranchAddress("B_OS_Muon_PARTICLES_NUM", &B_OS_Muon_PARTICLES_NUM, &b_B_OS_Muon_PARTICLES_NUM);
   fChain->SetBranchAddress("B_OS_Muon_PARTICLES_ID", B_OS_Muon_PARTICLES_ID, &b_B_OS_Muon_PARTICLES_ID);
   fChain->SetBranchAddress("B_OS_Muon_PARTICLES_P", B_OS_Muon_PARTICLES_P, &b_B_OS_Muon_PARTICLES_P);
   fChain->SetBranchAddress("B_OS_Muon_PARTICLES_PX", B_OS_Muon_PARTICLES_PX, &b_B_OS_Muon_PARTICLES_PX);
   fChain->SetBranchAddress("B_OS_Muon_PARTICLES_PY", B_OS_Muon_PARTICLES_PY, &b_B_OS_Muon_PARTICLES_PY);
   fChain->SetBranchAddress("B_OS_Muon_PARTICLES_PZ", B_OS_Muon_PARTICLES_PZ, &b_B_OS_Muon_PARTICLES_PZ);
   fChain->SetBranchAddress("B_OS_Muon_PARTICLES_PT", B_OS_Muon_PARTICLES_PT, &b_B_OS_Muon_PARTICLES_PT);
   fChain->SetBranchAddress("B_OS_Muon_PARTICLES_THETA", B_OS_Muon_PARTICLES_THETA, &b_B_OS_Muon_PARTICLES_THETA);
   fChain->SetBranchAddress("B_OS_Muon_PARTICLES_PHI", B_OS_Muon_PARTICLES_PHI, &b_B_OS_Muon_PARTICLES_PHI);
   fChain->SetBranchAddress("B_OS_Muon_PARTICLES_PIDe", B_OS_Muon_PARTICLES_PIDe, &b_B_OS_Muon_PARTICLES_PIDe);
   fChain->SetBranchAddress("B_OS_Muon_PARTICLES_PIDmu", B_OS_Muon_PARTICLES_PIDmu, &b_B_OS_Muon_PARTICLES_PIDmu);
   fChain->SetBranchAddress("B_OS_Muon_PARTICLES_PIDk", B_OS_Muon_PARTICLES_PIDk, &b_B_OS_Muon_PARTICLES_PIDk);
   fChain->SetBranchAddress("B_OS_Muon_PARTICLES_PIDp", B_OS_Muon_PARTICLES_PIDp, &b_B_OS_Muon_PARTICLES_PIDp);
   fChain->SetBranchAddress("B_OS_Muon_PARTICLES_IP_OWNPV", B_OS_Muon_PARTICLES_IP_OWNPV, &b_B_OS_Muon_PARTICLES_IP_OWNPV);
   fChain->SetBranchAddress("B_OS_Muon_PARTICLES_IPCHI2_OWNPV", B_OS_Muon_PARTICLES_IPCHI2_OWNPV, &b_B_OS_Muon_PARTICLES_IPCHI2_OWNPV);
   fChain->SetBranchAddress("B_OS_Muon_PARTICLES_IP_BVertex", B_OS_Muon_PARTICLES_IP_BVertex, &b_B_OS_Muon_PARTICLES_IP_BVertex);
   fChain->SetBranchAddress("B_OS_Muon_PARTICLES_IPCHI2_BVertex", B_OS_Muon_PARTICLES_IPCHI2_BVertex, &b_B_OS_Muon_PARTICLES_IPCHI2_BVertex);
   fChain->SetBranchAddress("B_OS_Muon_PARTICLES_CHI2_BpVertex", B_OS_Muon_PARTICLES_CHI2_BpVertex, &b_B_OS_Muon_PARTICLES_CHI2_BpVertex);
   fChain->SetBranchAddress("B_OS_Electron_DEC", &B_OS_Electron_DEC, &b_B_OS_Electron_DEC);
   fChain->SetBranchAddress("B_OS_Electron_PROB", &B_OS_Electron_PROB, &b_B_OS_Electron_PROB);
   fChain->SetBranchAddress("B_OS_Electron_PARTICLES_NUM", &B_OS_Electron_PARTICLES_NUM, &b_B_OS_Electron_PARTICLES_NUM);
   fChain->SetBranchAddress("B_OS_Electron_PARTICLES_ID", B_OS_Electron_PARTICLES_ID, &b_B_OS_Electron_PARTICLES_ID);
   fChain->SetBranchAddress("B_OS_Electron_PARTICLES_P", B_OS_Electron_PARTICLES_P, &b_B_OS_Electron_PARTICLES_P);
   fChain->SetBranchAddress("B_OS_Electron_PARTICLES_PX", B_OS_Electron_PARTICLES_PX, &b_B_OS_Electron_PARTICLES_PX);
   fChain->SetBranchAddress("B_OS_Electron_PARTICLES_PY", B_OS_Electron_PARTICLES_PY, &b_B_OS_Electron_PARTICLES_PY);
   fChain->SetBranchAddress("B_OS_Electron_PARTICLES_PZ", B_OS_Electron_PARTICLES_PZ, &b_B_OS_Electron_PARTICLES_PZ);
   fChain->SetBranchAddress("B_OS_Electron_PARTICLES_PT", B_OS_Electron_PARTICLES_PT, &b_B_OS_Electron_PARTICLES_PT);
   fChain->SetBranchAddress("B_OS_Electron_PARTICLES_THETA", B_OS_Electron_PARTICLES_THETA, &b_B_OS_Electron_PARTICLES_THETA);
   fChain->SetBranchAddress("B_OS_Electron_PARTICLES_PHI", B_OS_Electron_PARTICLES_PHI, &b_B_OS_Electron_PARTICLES_PHI);
   fChain->SetBranchAddress("B_OS_Electron_PARTICLES_PIDe", B_OS_Electron_PARTICLES_PIDe, &b_B_OS_Electron_PARTICLES_PIDe);
   fChain->SetBranchAddress("B_OS_Electron_PARTICLES_PIDmu", B_OS_Electron_PARTICLES_PIDmu, &b_B_OS_Electron_PARTICLES_PIDmu);
   fChain->SetBranchAddress("B_OS_Electron_PARTICLES_PIDk", B_OS_Electron_PARTICLES_PIDk, &b_B_OS_Electron_PARTICLES_PIDk);
   fChain->SetBranchAddress("B_OS_Electron_PARTICLES_PIDp", B_OS_Electron_PARTICLES_PIDp, &b_B_OS_Electron_PARTICLES_PIDp);
   fChain->SetBranchAddress("B_OS_Electron_PARTICLES_IP_OWNPV", B_OS_Electron_PARTICLES_IP_OWNPV, &b_B_OS_Electron_PARTICLES_IP_OWNPV);
   fChain->SetBranchAddress("B_OS_Electron_PARTICLES_IPCHI2_OWNPV", B_OS_Electron_PARTICLES_IPCHI2_OWNPV, &b_B_OS_Electron_PARTICLES_IPCHI2_OWNPV);
   fChain->SetBranchAddress("B_OS_Electron_PARTICLES_IP_BVertex", B_OS_Electron_PARTICLES_IP_BVertex, &b_B_OS_Electron_PARTICLES_IP_BVertex);
   fChain->SetBranchAddress("B_OS_Electron_PARTICLES_IPCHI2_BVertex", B_OS_Electron_PARTICLES_IPCHI2_BVertex, &b_B_OS_Electron_PARTICLES_IPCHI2_BVertex);
   fChain->SetBranchAddress("B_OS_Electron_PARTICLES_CHI2_BpVertex", B_OS_Electron_PARTICLES_CHI2_BpVertex, &b_B_OS_Electron_PARTICLES_CHI2_BpVertex);
   fChain->SetBranchAddress("B_OS_Kaon_DEC", &B_OS_Kaon_DEC, &b_B_OS_Kaon_DEC);
   fChain->SetBranchAddress("B_OS_Kaon_PROB", &B_OS_Kaon_PROB, &b_B_OS_Kaon_PROB);
   fChain->SetBranchAddress("B_OS_Kaon_PARTICLES_NUM", &B_OS_Kaon_PARTICLES_NUM, &b_B_OS_Kaon_PARTICLES_NUM);
   fChain->SetBranchAddress("B_OS_Kaon_PARTICLES_ID", B_OS_Kaon_PARTICLES_ID, &b_B_OS_Kaon_PARTICLES_ID);
   fChain->SetBranchAddress("B_OS_Kaon_PARTICLES_P", B_OS_Kaon_PARTICLES_P, &b_B_OS_Kaon_PARTICLES_P);
   fChain->SetBranchAddress("B_OS_Kaon_PARTICLES_PX", B_OS_Kaon_PARTICLES_PX, &b_B_OS_Kaon_PARTICLES_PX);
   fChain->SetBranchAddress("B_OS_Kaon_PARTICLES_PY", B_OS_Kaon_PARTICLES_PY, &b_B_OS_Kaon_PARTICLES_PY);
   fChain->SetBranchAddress("B_OS_Kaon_PARTICLES_PZ", B_OS_Kaon_PARTICLES_PZ, &b_B_OS_Kaon_PARTICLES_PZ);
   fChain->SetBranchAddress("B_OS_Kaon_PARTICLES_PT", B_OS_Kaon_PARTICLES_PT, &b_B_OS_Kaon_PARTICLES_PT);
   fChain->SetBranchAddress("B_OS_Kaon_PARTICLES_THETA", B_OS_Kaon_PARTICLES_THETA, &b_B_OS_Kaon_PARTICLES_THETA);
   fChain->SetBranchAddress("B_OS_Kaon_PARTICLES_PHI", B_OS_Kaon_PARTICLES_PHI, &b_B_OS_Kaon_PARTICLES_PHI);
   fChain->SetBranchAddress("B_OS_Kaon_PARTICLES_PIDe", B_OS_Kaon_PARTICLES_PIDe, &b_B_OS_Kaon_PARTICLES_PIDe);
   fChain->SetBranchAddress("B_OS_Kaon_PARTICLES_PIDmu", B_OS_Kaon_PARTICLES_PIDmu, &b_B_OS_Kaon_PARTICLES_PIDmu);
   fChain->SetBranchAddress("B_OS_Kaon_PARTICLES_PIDk", B_OS_Kaon_PARTICLES_PIDk, &b_B_OS_Kaon_PARTICLES_PIDk);
   fChain->SetBranchAddress("B_OS_Kaon_PARTICLES_PIDp", B_OS_Kaon_PARTICLES_PIDp, &b_B_OS_Kaon_PARTICLES_PIDp);
   fChain->SetBranchAddress("B_OS_Kaon_PARTICLES_IP_OWNPV", B_OS_Kaon_PARTICLES_IP_OWNPV, &b_B_OS_Kaon_PARTICLES_IP_OWNPV);
   fChain->SetBranchAddress("B_OS_Kaon_PARTICLES_IPCHI2_OWNPV", B_OS_Kaon_PARTICLES_IPCHI2_OWNPV, &b_B_OS_Kaon_PARTICLES_IPCHI2_OWNPV);
   fChain->SetBranchAddress("B_OS_Kaon_PARTICLES_IP_BVertex", B_OS_Kaon_PARTICLES_IP_BVertex, &b_B_OS_Kaon_PARTICLES_IP_BVertex);
   fChain->SetBranchAddress("B_OS_Kaon_PARTICLES_IPCHI2_BVertex", B_OS_Kaon_PARTICLES_IPCHI2_BVertex, &b_B_OS_Kaon_PARTICLES_IPCHI2_BVertex);
   fChain->SetBranchAddress("B_OS_Kaon_PARTICLES_CHI2_BpVertex", B_OS_Kaon_PARTICLES_CHI2_BpVertex, &b_B_OS_Kaon_PARTICLES_CHI2_BpVertex);
   fChain->SetBranchAddress("B_SS_Kaon_DEC", &B_SS_Kaon_DEC, &b_B_SS_Kaon_DEC);
   fChain->SetBranchAddress("B_SS_Kaon_PROB", &B_SS_Kaon_PROB, &b_B_SS_Kaon_PROB);
   fChain->SetBranchAddress("B_SS_Kaon_PARTICLES_NUM", &B_SS_Kaon_PARTICLES_NUM, &b_B_SS_Kaon_PARTICLES_NUM);
   fChain->SetBranchAddress("B_SS_Kaon_PARTICLES_ID", B_SS_Kaon_PARTICLES_ID, &b_B_SS_Kaon_PARTICLES_ID);
   fChain->SetBranchAddress("B_SS_Kaon_PARTICLES_P", B_SS_Kaon_PARTICLES_P, &b_B_SS_Kaon_PARTICLES_P);
   fChain->SetBranchAddress("B_SS_Kaon_PARTICLES_PX", B_SS_Kaon_PARTICLES_PX, &b_B_SS_Kaon_PARTICLES_PX);
   fChain->SetBranchAddress("B_SS_Kaon_PARTICLES_PY", B_SS_Kaon_PARTICLES_PY, &b_B_SS_Kaon_PARTICLES_PY);
   fChain->SetBranchAddress("B_SS_Kaon_PARTICLES_PZ", B_SS_Kaon_PARTICLES_PZ, &b_B_SS_Kaon_PARTICLES_PZ);
   fChain->SetBranchAddress("B_SS_Kaon_PARTICLES_PT", B_SS_Kaon_PARTICLES_PT, &b_B_SS_Kaon_PARTICLES_PT);
   fChain->SetBranchAddress("B_SS_Kaon_PARTICLES_THETA", B_SS_Kaon_PARTICLES_THETA, &b_B_SS_Kaon_PARTICLES_THETA);
   fChain->SetBranchAddress("B_SS_Kaon_PARTICLES_PHI", B_SS_Kaon_PARTICLES_PHI, &b_B_SS_Kaon_PARTICLES_PHI);
   fChain->SetBranchAddress("B_SS_Kaon_PARTICLES_PIDe", B_SS_Kaon_PARTICLES_PIDe, &b_B_SS_Kaon_PARTICLES_PIDe);
   fChain->SetBranchAddress("B_SS_Kaon_PARTICLES_PIDmu", B_SS_Kaon_PARTICLES_PIDmu, &b_B_SS_Kaon_PARTICLES_PIDmu);
   fChain->SetBranchAddress("B_SS_Kaon_PARTICLES_PIDk", B_SS_Kaon_PARTICLES_PIDk, &b_B_SS_Kaon_PARTICLES_PIDk);
   fChain->SetBranchAddress("B_SS_Kaon_PARTICLES_PIDp", B_SS_Kaon_PARTICLES_PIDp, &b_B_SS_Kaon_PARTICLES_PIDp);
   fChain->SetBranchAddress("B_SS_Kaon_PARTICLES_IP_OWNPV", B_SS_Kaon_PARTICLES_IP_OWNPV, &b_B_SS_Kaon_PARTICLES_IP_OWNPV);
   fChain->SetBranchAddress("B_SS_Kaon_PARTICLES_IPCHI2_OWNPV", B_SS_Kaon_PARTICLES_IPCHI2_OWNPV, &b_B_SS_Kaon_PARTICLES_IPCHI2_OWNPV);
   fChain->SetBranchAddress("B_SS_Kaon_PARTICLES_IP_BVertex", B_SS_Kaon_PARTICLES_IP_BVertex, &b_B_SS_Kaon_PARTICLES_IP_BVertex);
   fChain->SetBranchAddress("B_SS_Kaon_PARTICLES_IPCHI2_BVertex", B_SS_Kaon_PARTICLES_IPCHI2_BVertex, &b_B_SS_Kaon_PARTICLES_IPCHI2_BVertex);
   fChain->SetBranchAddress("B_SS_Kaon_PARTICLES_CHI2_BpVertex", B_SS_Kaon_PARTICLES_CHI2_BpVertex, &b_B_SS_Kaon_PARTICLES_CHI2_BpVertex);
   fChain->SetBranchAddress("B_SS_Pion_DEC", &B_SS_Pion_DEC, &b_B_SS_Pion_DEC);
   fChain->SetBranchAddress("B_SS_Pion_PROB", &B_SS_Pion_PROB, &b_B_SS_Pion_PROB);
   fChain->SetBranchAddress("B_SS_Pion_PARTICLES_NUM", &B_SS_Pion_PARTICLES_NUM, &b_B_SS_Pion_PARTICLES_NUM);
   fChain->SetBranchAddress("B_SS_Pion_PARTICLES_ID", B_SS_Pion_PARTICLES_ID, &b_B_SS_Pion_PARTICLES_ID);
   fChain->SetBranchAddress("B_SS_Pion_PARTICLES_P", B_SS_Pion_PARTICLES_P, &b_B_SS_Pion_PARTICLES_P);
   fChain->SetBranchAddress("B_SS_Pion_PARTICLES_PX", B_SS_Pion_PARTICLES_PX, &b_B_SS_Pion_PARTICLES_PX);
   fChain->SetBranchAddress("B_SS_Pion_PARTICLES_PY", B_SS_Pion_PARTICLES_PY, &b_B_SS_Pion_PARTICLES_PY);
   fChain->SetBranchAddress("B_SS_Pion_PARTICLES_PZ", B_SS_Pion_PARTICLES_PZ, &b_B_SS_Pion_PARTICLES_PZ);
   fChain->SetBranchAddress("B_SS_Pion_PARTICLES_PT", B_SS_Pion_PARTICLES_PT, &b_B_SS_Pion_PARTICLES_PT);
   fChain->SetBranchAddress("B_SS_Pion_PARTICLES_THETA", B_SS_Pion_PARTICLES_THETA, &b_B_SS_Pion_PARTICLES_THETA);
   fChain->SetBranchAddress("B_SS_Pion_PARTICLES_PHI", B_SS_Pion_PARTICLES_PHI, &b_B_SS_Pion_PARTICLES_PHI);
   fChain->SetBranchAddress("B_SS_Pion_PARTICLES_PIDe", B_SS_Pion_PARTICLES_PIDe, &b_B_SS_Pion_PARTICLES_PIDe);
   fChain->SetBranchAddress("B_SS_Pion_PARTICLES_PIDmu", B_SS_Pion_PARTICLES_PIDmu, &b_B_SS_Pion_PARTICLES_PIDmu);
   fChain->SetBranchAddress("B_SS_Pion_PARTICLES_PIDk", B_SS_Pion_PARTICLES_PIDk, &b_B_SS_Pion_PARTICLES_PIDk);
   fChain->SetBranchAddress("B_SS_Pion_PARTICLES_PIDp", B_SS_Pion_PARTICLES_PIDp, &b_B_SS_Pion_PARTICLES_PIDp);
   fChain->SetBranchAddress("B_SS_Pion_PARTICLES_IP_OWNPV", B_SS_Pion_PARTICLES_IP_OWNPV, &b_B_SS_Pion_PARTICLES_IP_OWNPV);
   fChain->SetBranchAddress("B_SS_Pion_PARTICLES_IPCHI2_OWNPV", B_SS_Pion_PARTICLES_IPCHI2_OWNPV, &b_B_SS_Pion_PARTICLES_IPCHI2_OWNPV);
   fChain->SetBranchAddress("B_SS_Pion_PARTICLES_IP_BVertex", B_SS_Pion_PARTICLES_IP_BVertex, &b_B_SS_Pion_PARTICLES_IP_BVertex);
   fChain->SetBranchAddress("B_SS_Pion_PARTICLES_IPCHI2_BVertex", B_SS_Pion_PARTICLES_IPCHI2_BVertex, &b_B_SS_Pion_PARTICLES_IPCHI2_BVertex);
   fChain->SetBranchAddress("B_SS_Pion_PARTICLES_CHI2_BpVertex", B_SS_Pion_PARTICLES_CHI2_BpVertex, &b_B_SS_Pion_PARTICLES_CHI2_BpVertex);
   fChain->SetBranchAddress("B_SS_PionBDT_DEC", &B_SS_PionBDT_DEC, &b_B_SS_PionBDT_DEC);
   fChain->SetBranchAddress("B_SS_PionBDT_PROB", &B_SS_PionBDT_PROB, &b_B_SS_PionBDT_PROB);
   fChain->SetBranchAddress("B_SS_PionBDT_PARTICLES_NUM", &B_SS_PionBDT_PARTICLES_NUM, &b_B_SS_PionBDT_PARTICLES_NUM);
   fChain->SetBranchAddress("B_SS_PionBDT_PARTICLES_ID", B_SS_PionBDT_PARTICLES_ID, &b_B_SS_PionBDT_PARTICLES_ID);
   fChain->SetBranchAddress("B_SS_PionBDT_PARTICLES_P", B_SS_PionBDT_PARTICLES_P, &b_B_SS_PionBDT_PARTICLES_P);
   fChain->SetBranchAddress("B_SS_PionBDT_PARTICLES_PX", B_SS_PionBDT_PARTICLES_PX, &b_B_SS_PionBDT_PARTICLES_PX);
   fChain->SetBranchAddress("B_SS_PionBDT_PARTICLES_PY", B_SS_PionBDT_PARTICLES_PY, &b_B_SS_PionBDT_PARTICLES_PY);
   fChain->SetBranchAddress("B_SS_PionBDT_PARTICLES_PZ", B_SS_PionBDT_PARTICLES_PZ, &b_B_SS_PionBDT_PARTICLES_PZ);
   fChain->SetBranchAddress("B_SS_PionBDT_PARTICLES_PT", B_SS_PionBDT_PARTICLES_PT, &b_B_SS_PionBDT_PARTICLES_PT);
   fChain->SetBranchAddress("B_SS_PionBDT_PARTICLES_THETA", B_SS_PionBDT_PARTICLES_THETA, &b_B_SS_PionBDT_PARTICLES_THETA);
   fChain->SetBranchAddress("B_SS_PionBDT_PARTICLES_PHI", B_SS_PionBDT_PARTICLES_PHI, &b_B_SS_PionBDT_PARTICLES_PHI);
   fChain->SetBranchAddress("B_SS_PionBDT_PARTICLES_PIDe", B_SS_PionBDT_PARTICLES_PIDe, &b_B_SS_PionBDT_PARTICLES_PIDe);
   fChain->SetBranchAddress("B_SS_PionBDT_PARTICLES_PIDmu", B_SS_PionBDT_PARTICLES_PIDmu, &b_B_SS_PionBDT_PARTICLES_PIDmu);
   fChain->SetBranchAddress("B_SS_PionBDT_PARTICLES_PIDk", B_SS_PionBDT_PARTICLES_PIDk, &b_B_SS_PionBDT_PARTICLES_PIDk);
   fChain->SetBranchAddress("B_SS_PionBDT_PARTICLES_PIDp", B_SS_PionBDT_PARTICLES_PIDp, &b_B_SS_PionBDT_PARTICLES_PIDp);
   fChain->SetBranchAddress("B_SS_PionBDT_PARTICLES_IP_OWNPV", B_SS_PionBDT_PARTICLES_IP_OWNPV, &b_B_SS_PionBDT_PARTICLES_IP_OWNPV);
   fChain->SetBranchAddress("B_SS_PionBDT_PARTICLES_IPCHI2_OWNPV", B_SS_PionBDT_PARTICLES_IPCHI2_OWNPV, &b_B_SS_PionBDT_PARTICLES_IPCHI2_OWNPV);
   fChain->SetBranchAddress("B_SS_PionBDT_PARTICLES_IP_BVertex", B_SS_PionBDT_PARTICLES_IP_BVertex, &b_B_SS_PionBDT_PARTICLES_IP_BVertex);
   fChain->SetBranchAddress("B_SS_PionBDT_PARTICLES_IPCHI2_BVertex", B_SS_PionBDT_PARTICLES_IPCHI2_BVertex, &b_B_SS_PionBDT_PARTICLES_IPCHI2_BVertex);
   fChain->SetBranchAddress("B_SS_PionBDT_PARTICLES_CHI2_BpVertex", B_SS_PionBDT_PARTICLES_CHI2_BpVertex, &b_B_SS_PionBDT_PARTICLES_CHI2_BpVertex);
   fChain->SetBranchAddress("B_VtxCharge_DEC", &B_VtxCharge_DEC, &b_B_VtxCharge_DEC);
   fChain->SetBranchAddress("B_VtxCharge_PROB", &B_VtxCharge_PROB, &b_B_VtxCharge_PROB);
   fChain->SetBranchAddress("B_VtxCharge_PARTICLES_NUM", &B_VtxCharge_PARTICLES_NUM, &b_B_VtxCharge_PARTICLES_NUM);
   fChain->SetBranchAddress("B_VtxCharge_PARTICLES_ID", B_VtxCharge_PARTICLES_ID, &b_B_VtxCharge_PARTICLES_ID);
   fChain->SetBranchAddress("B_VtxCharge_PARTICLES_P", B_VtxCharge_PARTICLES_P, &b_B_VtxCharge_PARTICLES_P);
   fChain->SetBranchAddress("B_VtxCharge_PARTICLES_PX", B_VtxCharge_PARTICLES_PX, &b_B_VtxCharge_PARTICLES_PX);
   fChain->SetBranchAddress("B_VtxCharge_PARTICLES_PY", B_VtxCharge_PARTICLES_PY, &b_B_VtxCharge_PARTICLES_PY);
   fChain->SetBranchAddress("B_VtxCharge_PARTICLES_PZ", B_VtxCharge_PARTICLES_PZ, &b_B_VtxCharge_PARTICLES_PZ);
   fChain->SetBranchAddress("B_VtxCharge_PARTICLES_PT", B_VtxCharge_PARTICLES_PT, &b_B_VtxCharge_PARTICLES_PT);
   fChain->SetBranchAddress("B_VtxCharge_PARTICLES_THETA", B_VtxCharge_PARTICLES_THETA, &b_B_VtxCharge_PARTICLES_THETA);
   fChain->SetBranchAddress("B_VtxCharge_PARTICLES_PHI", B_VtxCharge_PARTICLES_PHI, &b_B_VtxCharge_PARTICLES_PHI);
   fChain->SetBranchAddress("B_VtxCharge_PARTICLES_PIDe", B_VtxCharge_PARTICLES_PIDe, &b_B_VtxCharge_PARTICLES_PIDe);
   fChain->SetBranchAddress("B_VtxCharge_PARTICLES_PIDmu", B_VtxCharge_PARTICLES_PIDmu, &b_B_VtxCharge_PARTICLES_PIDmu);
   fChain->SetBranchAddress("B_VtxCharge_PARTICLES_PIDk", B_VtxCharge_PARTICLES_PIDk, &b_B_VtxCharge_PARTICLES_PIDk);
   fChain->SetBranchAddress("B_VtxCharge_PARTICLES_PIDp", B_VtxCharge_PARTICLES_PIDp, &b_B_VtxCharge_PARTICLES_PIDp);
   fChain->SetBranchAddress("B_VtxCharge_PARTICLES_IP_OWNPV", B_VtxCharge_PARTICLES_IP_OWNPV, &b_B_VtxCharge_PARTICLES_IP_OWNPV);
   fChain->SetBranchAddress("B_VtxCharge_PARTICLES_IPCHI2_OWNPV", B_VtxCharge_PARTICLES_IPCHI2_OWNPV, &b_B_VtxCharge_PARTICLES_IPCHI2_OWNPV);
   fChain->SetBranchAddress("B_VtxCharge_PARTICLES_IP_BVertex", B_VtxCharge_PARTICLES_IP_BVertex, &b_B_VtxCharge_PARTICLES_IP_BVertex);
   fChain->SetBranchAddress("B_VtxCharge_PARTICLES_IPCHI2_BVertex", B_VtxCharge_PARTICLES_IPCHI2_BVertex, &b_B_VtxCharge_PARTICLES_IPCHI2_BVertex);
   fChain->SetBranchAddress("B_VtxCharge_PARTICLES_CHI2_BpVertex", B_VtxCharge_PARTICLES_CHI2_BpVertex, &b_B_VtxCharge_PARTICLES_CHI2_BpVertex);
   fChain->SetBranchAddress("B_OS_nnetKaon_DEC", &B_OS_nnetKaon_DEC, &b_B_OS_nnetKaon_DEC);
   fChain->SetBranchAddress("B_OS_nnetKaon_PROB", &B_OS_nnetKaon_PROB, &b_B_OS_nnetKaon_PROB);
   fChain->SetBranchAddress("B_OS_nnetKaon_PARTICLES_NUM", &B_OS_nnetKaon_PARTICLES_NUM, &b_B_OS_nnetKaon_PARTICLES_NUM);
   fChain->SetBranchAddress("B_OS_nnetKaon_PARTICLES_ID", B_OS_nnetKaon_PARTICLES_ID, &b_B_OS_nnetKaon_PARTICLES_ID);
   fChain->SetBranchAddress("B_OS_nnetKaon_PARTICLES_P", B_OS_nnetKaon_PARTICLES_P, &b_B_OS_nnetKaon_PARTICLES_P);
   fChain->SetBranchAddress("B_OS_nnetKaon_PARTICLES_PX", B_OS_nnetKaon_PARTICLES_PX, &b_B_OS_nnetKaon_PARTICLES_PX);
   fChain->SetBranchAddress("B_OS_nnetKaon_PARTICLES_PY", B_OS_nnetKaon_PARTICLES_PY, &b_B_OS_nnetKaon_PARTICLES_PY);
   fChain->SetBranchAddress("B_OS_nnetKaon_PARTICLES_PZ", B_OS_nnetKaon_PARTICLES_PZ, &b_B_OS_nnetKaon_PARTICLES_PZ);
   fChain->SetBranchAddress("B_OS_nnetKaon_PARTICLES_PT", B_OS_nnetKaon_PARTICLES_PT, &b_B_OS_nnetKaon_PARTICLES_PT);
   fChain->SetBranchAddress("B_OS_nnetKaon_PARTICLES_THETA", B_OS_nnetKaon_PARTICLES_THETA, &b_B_OS_nnetKaon_PARTICLES_THETA);
   fChain->SetBranchAddress("B_OS_nnetKaon_PARTICLES_PHI", B_OS_nnetKaon_PARTICLES_PHI, &b_B_OS_nnetKaon_PARTICLES_PHI);
   fChain->SetBranchAddress("B_OS_nnetKaon_PARTICLES_PIDe", B_OS_nnetKaon_PARTICLES_PIDe, &b_B_OS_nnetKaon_PARTICLES_PIDe);
   fChain->SetBranchAddress("B_OS_nnetKaon_PARTICLES_PIDmu", B_OS_nnetKaon_PARTICLES_PIDmu, &b_B_OS_nnetKaon_PARTICLES_PIDmu);
   fChain->SetBranchAddress("B_OS_nnetKaon_PARTICLES_PIDk", B_OS_nnetKaon_PARTICLES_PIDk, &b_B_OS_nnetKaon_PARTICLES_PIDk);
   fChain->SetBranchAddress("B_OS_nnetKaon_PARTICLES_PIDp", B_OS_nnetKaon_PARTICLES_PIDp, &b_B_OS_nnetKaon_PARTICLES_PIDp);
   fChain->SetBranchAddress("B_OS_nnetKaon_PARTICLES_IP_OWNPV", B_OS_nnetKaon_PARTICLES_IP_OWNPV, &b_B_OS_nnetKaon_PARTICLES_IP_OWNPV);
   fChain->SetBranchAddress("B_OS_nnetKaon_PARTICLES_IPCHI2_OWNPV", B_OS_nnetKaon_PARTICLES_IPCHI2_OWNPV, &b_B_OS_nnetKaon_PARTICLES_IPCHI2_OWNPV);
   fChain->SetBranchAddress("B_OS_nnetKaon_PARTICLES_IP_BVertex", B_OS_nnetKaon_PARTICLES_IP_BVertex, &b_B_OS_nnetKaon_PARTICLES_IP_BVertex);
   fChain->SetBranchAddress("B_OS_nnetKaon_PARTICLES_IPCHI2_BVertex", B_OS_nnetKaon_PARTICLES_IPCHI2_BVertex, &b_B_OS_nnetKaon_PARTICLES_IPCHI2_BVertex);
   fChain->SetBranchAddress("B_OS_nnetKaon_PARTICLES_CHI2_BpVertex", B_OS_nnetKaon_PARTICLES_CHI2_BpVertex, &b_B_OS_nnetKaon_PARTICLES_CHI2_BpVertex);
   fChain->SetBranchAddress("B_SS_nnetKaon_DEC", &B_SS_nnetKaon_DEC, &b_B_SS_nnetKaon_DEC);
   fChain->SetBranchAddress("B_SS_nnetKaon_PROB", &B_SS_nnetKaon_PROB, &b_B_SS_nnetKaon_PROB);
   fChain->SetBranchAddress("B_SS_nnetKaon_PARTICLES_NUM", &B_SS_nnetKaon_PARTICLES_NUM, &b_B_SS_nnetKaon_PARTICLES_NUM);
   fChain->SetBranchAddress("B_SS_nnetKaon_PARTICLES_ID", B_SS_nnetKaon_PARTICLES_ID, &b_B_SS_nnetKaon_PARTICLES_ID);
   fChain->SetBranchAddress("B_SS_nnetKaon_PARTICLES_P", B_SS_nnetKaon_PARTICLES_P, &b_B_SS_nnetKaon_PARTICLES_P);
   fChain->SetBranchAddress("B_SS_nnetKaon_PARTICLES_PX", B_SS_nnetKaon_PARTICLES_PX, &b_B_SS_nnetKaon_PARTICLES_PX);
   fChain->SetBranchAddress("B_SS_nnetKaon_PARTICLES_PY", B_SS_nnetKaon_PARTICLES_PY, &b_B_SS_nnetKaon_PARTICLES_PY);
   fChain->SetBranchAddress("B_SS_nnetKaon_PARTICLES_PZ", B_SS_nnetKaon_PARTICLES_PZ, &b_B_SS_nnetKaon_PARTICLES_PZ);
   fChain->SetBranchAddress("B_SS_nnetKaon_PARTICLES_PT", B_SS_nnetKaon_PARTICLES_PT, &b_B_SS_nnetKaon_PARTICLES_PT);
   fChain->SetBranchAddress("B_SS_nnetKaon_PARTICLES_THETA", B_SS_nnetKaon_PARTICLES_THETA, &b_B_SS_nnetKaon_PARTICLES_THETA);
   fChain->SetBranchAddress("B_SS_nnetKaon_PARTICLES_PHI", B_SS_nnetKaon_PARTICLES_PHI, &b_B_SS_nnetKaon_PARTICLES_PHI);
   fChain->SetBranchAddress("B_SS_nnetKaon_PARTICLES_PIDe", B_SS_nnetKaon_PARTICLES_PIDe, &b_B_SS_nnetKaon_PARTICLES_PIDe);
   fChain->SetBranchAddress("B_SS_nnetKaon_PARTICLES_PIDmu", B_SS_nnetKaon_PARTICLES_PIDmu, &b_B_SS_nnetKaon_PARTICLES_PIDmu);
   fChain->SetBranchAddress("B_SS_nnetKaon_PARTICLES_PIDk", B_SS_nnetKaon_PARTICLES_PIDk, &b_B_SS_nnetKaon_PARTICLES_PIDk);
   fChain->SetBranchAddress("B_SS_nnetKaon_PARTICLES_PIDp", B_SS_nnetKaon_PARTICLES_PIDp, &b_B_SS_nnetKaon_PARTICLES_PIDp);
   fChain->SetBranchAddress("B_SS_nnetKaon_PARTICLES_IP_OWNPV", B_SS_nnetKaon_PARTICLES_IP_OWNPV, &b_B_SS_nnetKaon_PARTICLES_IP_OWNPV);
   fChain->SetBranchAddress("B_SS_nnetKaon_PARTICLES_IPCHI2_OWNPV", B_SS_nnetKaon_PARTICLES_IPCHI2_OWNPV, &b_B_SS_nnetKaon_PARTICLES_IPCHI2_OWNPV);
   fChain->SetBranchAddress("B_SS_nnetKaon_PARTICLES_IP_BVertex", B_SS_nnetKaon_PARTICLES_IP_BVertex, &b_B_SS_nnetKaon_PARTICLES_IP_BVertex);
   fChain->SetBranchAddress("B_SS_nnetKaon_PARTICLES_IPCHI2_BVertex", B_SS_nnetKaon_PARTICLES_IPCHI2_BVertex, &b_B_SS_nnetKaon_PARTICLES_IPCHI2_BVertex);
   fChain->SetBranchAddress("B_SS_nnetKaon_PARTICLES_CHI2_BpVertex", B_SS_nnetKaon_PARTICLES_CHI2_BpVertex, &b_B_SS_nnetKaon_PARTICLES_CHI2_BpVertex);
   fChain->SetBranchAddress("B_SS_Proton_DEC", &B_SS_Proton_DEC, &b_B_SS_Proton_DEC);
   fChain->SetBranchAddress("B_SS_Proton_PROB", &B_SS_Proton_PROB, &b_B_SS_Proton_PROB);
   fChain->SetBranchAddress("B_SS_Proton_PARTICLES_NUM", &B_SS_Proton_PARTICLES_NUM, &b_B_SS_Proton_PARTICLES_NUM);
   fChain->SetBranchAddress("B_SS_Proton_PARTICLES_ID", B_SS_Proton_PARTICLES_ID, &b_B_SS_Proton_PARTICLES_ID);
   fChain->SetBranchAddress("B_SS_Proton_PARTICLES_P", B_SS_Proton_PARTICLES_P, &b_B_SS_Proton_PARTICLES_P);
   fChain->SetBranchAddress("B_SS_Proton_PARTICLES_PX", B_SS_Proton_PARTICLES_PX, &b_B_SS_Proton_PARTICLES_PX);
   fChain->SetBranchAddress("B_SS_Proton_PARTICLES_PY", B_SS_Proton_PARTICLES_PY, &b_B_SS_Proton_PARTICLES_PY);
   fChain->SetBranchAddress("B_SS_Proton_PARTICLES_PZ", B_SS_Proton_PARTICLES_PZ, &b_B_SS_Proton_PARTICLES_PZ);
   fChain->SetBranchAddress("B_SS_Proton_PARTICLES_PT", B_SS_Proton_PARTICLES_PT, &b_B_SS_Proton_PARTICLES_PT);
   fChain->SetBranchAddress("B_SS_Proton_PARTICLES_THETA", B_SS_Proton_PARTICLES_THETA, &b_B_SS_Proton_PARTICLES_THETA);
   fChain->SetBranchAddress("B_SS_Proton_PARTICLES_PHI", B_SS_Proton_PARTICLES_PHI, &b_B_SS_Proton_PARTICLES_PHI);
   fChain->SetBranchAddress("B_SS_Proton_PARTICLES_PIDe", B_SS_Proton_PARTICLES_PIDe, &b_B_SS_Proton_PARTICLES_PIDe);
   fChain->SetBranchAddress("B_SS_Proton_PARTICLES_PIDmu", B_SS_Proton_PARTICLES_PIDmu, &b_B_SS_Proton_PARTICLES_PIDmu);
   fChain->SetBranchAddress("B_SS_Proton_PARTICLES_PIDk", B_SS_Proton_PARTICLES_PIDk, &b_B_SS_Proton_PARTICLES_PIDk);
   fChain->SetBranchAddress("B_SS_Proton_PARTICLES_PIDp", B_SS_Proton_PARTICLES_PIDp, &b_B_SS_Proton_PARTICLES_PIDp);
   fChain->SetBranchAddress("B_SS_Proton_PARTICLES_IP_OWNPV", B_SS_Proton_PARTICLES_IP_OWNPV, &b_B_SS_Proton_PARTICLES_IP_OWNPV);
   fChain->SetBranchAddress("B_SS_Proton_PARTICLES_IPCHI2_OWNPV", B_SS_Proton_PARTICLES_IPCHI2_OWNPV, &b_B_SS_Proton_PARTICLES_IPCHI2_OWNPV);
   fChain->SetBranchAddress("B_SS_Proton_PARTICLES_IP_BVertex", B_SS_Proton_PARTICLES_IP_BVertex, &b_B_SS_Proton_PARTICLES_IP_BVertex);
   fChain->SetBranchAddress("B_SS_Proton_PARTICLES_IPCHI2_BVertex", B_SS_Proton_PARTICLES_IPCHI2_BVertex, &b_B_SS_Proton_PARTICLES_IPCHI2_BVertex);
   fChain->SetBranchAddress("B_SS_Proton_PARTICLES_CHI2_BpVertex", B_SS_Proton_PARTICLES_CHI2_BpVertex, &b_B_SS_Proton_PARTICLES_CHI2_BpVertex);
   fChain->SetBranchAddress("B_OS_Charm_DEC", &B_OS_Charm_DEC, &b_B_OS_Charm_DEC);
   fChain->SetBranchAddress("B_OS_Charm_PROB", &B_OS_Charm_PROB, &b_B_OS_Charm_PROB);
   fChain->SetBranchAddress("B_OS_Charm_PARTICLES_NUM", &B_OS_Charm_PARTICLES_NUM, &b_B_OS_Charm_PARTICLES_NUM);
   fChain->SetBranchAddress("B_OS_Charm_PARTICLES_ID", B_OS_Charm_PARTICLES_ID, &b_B_OS_Charm_PARTICLES_ID);
   fChain->SetBranchAddress("B_OS_Charm_PARTICLES_P", B_OS_Charm_PARTICLES_P, &b_B_OS_Charm_PARTICLES_P);
   fChain->SetBranchAddress("B_OS_Charm_PARTICLES_PX", B_OS_Charm_PARTICLES_PX, &b_B_OS_Charm_PARTICLES_PX);
   fChain->SetBranchAddress("B_OS_Charm_PARTICLES_PY", B_OS_Charm_PARTICLES_PY, &b_B_OS_Charm_PARTICLES_PY);
   fChain->SetBranchAddress("B_OS_Charm_PARTICLES_PZ", B_OS_Charm_PARTICLES_PZ, &b_B_OS_Charm_PARTICLES_PZ);
   fChain->SetBranchAddress("B_OS_Charm_PARTICLES_PT", B_OS_Charm_PARTICLES_PT, &b_B_OS_Charm_PARTICLES_PT);
   fChain->SetBranchAddress("B_OS_Charm_PARTICLES_THETA", B_OS_Charm_PARTICLES_THETA, &b_B_OS_Charm_PARTICLES_THETA);
   fChain->SetBranchAddress("B_OS_Charm_PARTICLES_PHI", B_OS_Charm_PARTICLES_PHI, &b_B_OS_Charm_PARTICLES_PHI);
   fChain->SetBranchAddress("B_OS_Charm_PARTICLES_PIDe", B_OS_Charm_PARTICLES_PIDe, &b_B_OS_Charm_PARTICLES_PIDe);
   fChain->SetBranchAddress("B_OS_Charm_PARTICLES_PIDmu", B_OS_Charm_PARTICLES_PIDmu, &b_B_OS_Charm_PARTICLES_PIDmu);
   fChain->SetBranchAddress("B_OS_Charm_PARTICLES_PIDk", B_OS_Charm_PARTICLES_PIDk, &b_B_OS_Charm_PARTICLES_PIDk);
   fChain->SetBranchAddress("B_OS_Charm_PARTICLES_PIDp", B_OS_Charm_PARTICLES_PIDp, &b_B_OS_Charm_PARTICLES_PIDp);
   fChain->SetBranchAddress("B_OS_Charm_PARTICLES_IP_OWNPV", B_OS_Charm_PARTICLES_IP_OWNPV, &b_B_OS_Charm_PARTICLES_IP_OWNPV);
   fChain->SetBranchAddress("B_OS_Charm_PARTICLES_IPCHI2_OWNPV", B_OS_Charm_PARTICLES_IPCHI2_OWNPV, &b_B_OS_Charm_PARTICLES_IPCHI2_OWNPV);
   fChain->SetBranchAddress("B_OS_Charm_PARTICLES_IP_BVertex", B_OS_Charm_PARTICLES_IP_BVertex, &b_B_OS_Charm_PARTICLES_IP_BVertex);
   fChain->SetBranchAddress("B_OS_Charm_PARTICLES_IPCHI2_BVertex", B_OS_Charm_PARTICLES_IPCHI2_BVertex, &b_B_OS_Charm_PARTICLES_IPCHI2_BVertex);
   fChain->SetBranchAddress("B_OS_Charm_PARTICLES_CHI2_BpVertex", B_OS_Charm_PARTICLES_CHI2_BpVertex, &b_B_OS_Charm_PARTICLES_CHI2_BpVertex);
   fChain->SetBranchAddress("B_X", &B_X, &b_B_X);
   fChain->SetBranchAddress("B_Y", &B_Y, &b_B_Y);
   fChain->SetBranchAddress("B_LOKI_DIRA", &B_LOKI_DIRA, &b_B_LOKI_DIRA);
   fChain->SetBranchAddress("B_LOKI_DOCA_1_2", &B_LOKI_DOCA_1_2, &b_B_LOKI_DOCA_1_2);
   fChain->SetBranchAddress("B_LOKI_DTF_CHI2NDOF", &B_LOKI_DTF_CHI2NDOF, &b_B_LOKI_DTF_CHI2NDOF);
   fChain->SetBranchAddress("B_LOKI_DTF_CTAU", &B_LOKI_DTF_CTAU, &b_B_LOKI_DTF_CTAU);
   fChain->SetBranchAddress("B_LOKI_DTF_CTAUERR", &B_LOKI_DTF_CTAUERR, &b_B_LOKI_DTF_CTAUERR);
   fChain->SetBranchAddress("B_LOKI_DTF_CTAUERR_D1", &B_LOKI_DTF_CTAUERR_D1, &b_B_LOKI_DTF_CTAUERR_D1);
   fChain->SetBranchAddress("B_LOKI_DTF_CTAUERR_D2", &B_LOKI_DTF_CTAUERR_D2, &b_B_LOKI_DTF_CTAUERR_D2);
   fChain->SetBranchAddress("B_LOKI_DTF_CTAUERR_NOPV", &B_LOKI_DTF_CTAUERR_NOPV, &b_B_LOKI_DTF_CTAUERR_NOPV);
   fChain->SetBranchAddress("B_LOKI_DTF_CTAUS", &B_LOKI_DTF_CTAUS, &b_B_LOKI_DTF_CTAUS);
   fChain->SetBranchAddress("B_LOKI_DTF_CTAU_D1", &B_LOKI_DTF_CTAU_D1, &b_B_LOKI_DTF_CTAU_D1);
   fChain->SetBranchAddress("B_LOKI_DTF_CTAU_D2", &B_LOKI_DTF_CTAU_D2, &b_B_LOKI_DTF_CTAU_D2);
   fChain->SetBranchAddress("B_LOKI_DTF_CTAU_NOPV", &B_LOKI_DTF_CTAU_NOPV, &b_B_LOKI_DTF_CTAU_NOPV);
   fChain->SetBranchAddress("B_LOKI_DTF_VCHI2NDOF", &B_LOKI_DTF_VCHI2NDOF, &b_B_LOKI_DTF_VCHI2NDOF);
   fChain->SetBranchAddress("B_LOKI_FDCHI2", &B_LOKI_FDCHI2, &b_B_LOKI_FDCHI2);
   fChain->SetBranchAddress("B_LOKI_FDS", &B_LOKI_FDS, &b_B_LOKI_FDS);
   fChain->SetBranchAddress("B_LOKI_MASSERR_JpsiConstr", &B_LOKI_MASSERR_JpsiConstr, &b_B_LOKI_MASSERR_JpsiConstr);
   fChain->SetBranchAddress("B_LOKI_MASS_JpsiConstr", &B_LOKI_MASS_JpsiConstr, &b_B_LOKI_MASS_JpsiConstr);
   fChain->SetBranchAddress("B_LOKI_MASS_JpsiConstr_NoPVConstr", &B_LOKI_MASS_JpsiConstr_NoPVConstr, &b_B_LOKI_MASS_JpsiConstr_NoPVConstr);
   fChain->SetBranchAddress("B_FitDaughtersConst_nPV", &B_FitDaughtersConst_nPV, &b_B_FitDaughtersConst_nPV);
   fChain->SetBranchAddress("B_FitDaughtersConst_J_psi_1S_M", B_FitDaughtersConst_J_psi_1S_M, &b_B_FitDaughtersConst_J_psi_1S_M);
   fChain->SetBranchAddress("B_FitDaughtersConst_J_psi_1S_MERR", B_FitDaughtersConst_J_psi_1S_MERR, &b_B_FitDaughtersConst_J_psi_1S_MERR);
   fChain->SetBranchAddress("B_FitDaughtersConst_J_psi_1S_P", B_FitDaughtersConst_J_psi_1S_P, &b_B_FitDaughtersConst_J_psi_1S_P);
   fChain->SetBranchAddress("B_FitDaughtersConst_J_psi_1S_PERR", B_FitDaughtersConst_J_psi_1S_PERR, &b_B_FitDaughtersConst_J_psi_1S_PERR);
   fChain->SetBranchAddress("B_FitDaughtersConst_J_psi_1S_ctau", B_FitDaughtersConst_J_psi_1S_ctau, &b_B_FitDaughtersConst_J_psi_1S_ctau);
   fChain->SetBranchAddress("B_FitDaughtersConst_J_psi_1S_ctauErr", B_FitDaughtersConst_J_psi_1S_ctauErr, &b_B_FitDaughtersConst_J_psi_1S_ctauErr);
   fChain->SetBranchAddress("B_FitDaughtersConst_J_psi_1S_decayLength", B_FitDaughtersConst_J_psi_1S_decayLength, &b_B_FitDaughtersConst_J_psi_1S_decayLength);
   fChain->SetBranchAddress("B_FitDaughtersConst_J_psi_1S_decayLengthErr", B_FitDaughtersConst_J_psi_1S_decayLengthErr, &b_B_FitDaughtersConst_J_psi_1S_decayLengthErr);
   fChain->SetBranchAddress("B_FitDaughtersConst_J_psi_1S_muminus_0_ID", B_FitDaughtersConst_J_psi_1S_muminus_0_ID, &b_B_FitDaughtersConst_J_psi_1S_muminus_0_ID);
   fChain->SetBranchAddress("B_FitDaughtersConst_J_psi_1S_muminus_0_PE", B_FitDaughtersConst_J_psi_1S_muminus_0_PE, &b_B_FitDaughtersConst_J_psi_1S_muminus_0_PE);
   fChain->SetBranchAddress("B_FitDaughtersConst_J_psi_1S_muminus_0_PX", B_FitDaughtersConst_J_psi_1S_muminus_0_PX, &b_B_FitDaughtersConst_J_psi_1S_muminus_0_PX);
   fChain->SetBranchAddress("B_FitDaughtersConst_J_psi_1S_muminus_0_PY", B_FitDaughtersConst_J_psi_1S_muminus_0_PY, &b_B_FitDaughtersConst_J_psi_1S_muminus_0_PY);
   fChain->SetBranchAddress("B_FitDaughtersConst_J_psi_1S_muminus_0_PZ", B_FitDaughtersConst_J_psi_1S_muminus_0_PZ, &b_B_FitDaughtersConst_J_psi_1S_muminus_0_PZ);
   fChain->SetBranchAddress("B_FitDaughtersConst_J_psi_1S_muminus_ID", B_FitDaughtersConst_J_psi_1S_muminus_ID, &b_B_FitDaughtersConst_J_psi_1S_muminus_ID);
   fChain->SetBranchAddress("B_FitDaughtersConst_J_psi_1S_muminus_PE", B_FitDaughtersConst_J_psi_1S_muminus_PE, &b_B_FitDaughtersConst_J_psi_1S_muminus_PE);
   fChain->SetBranchAddress("B_FitDaughtersConst_J_psi_1S_muminus_PX", B_FitDaughtersConst_J_psi_1S_muminus_PX, &b_B_FitDaughtersConst_J_psi_1S_muminus_PX);
   fChain->SetBranchAddress("B_FitDaughtersConst_J_psi_1S_muminus_PY", B_FitDaughtersConst_J_psi_1S_muminus_PY, &b_B_FitDaughtersConst_J_psi_1S_muminus_PY);
   fChain->SetBranchAddress("B_FitDaughtersConst_J_psi_1S_muminus_PZ", B_FitDaughtersConst_J_psi_1S_muminus_PZ, &b_B_FitDaughtersConst_J_psi_1S_muminus_PZ);
   fChain->SetBranchAddress("B_FitDaughtersConst_Kst_892_0_Kplus_ID", B_FitDaughtersConst_Kst_892_0_Kplus_ID, &b_B_FitDaughtersConst_Kst_892_0_Kplus_ID);
   fChain->SetBranchAddress("B_FitDaughtersConst_Kst_892_0_Kplus_PE", B_FitDaughtersConst_Kst_892_0_Kplus_PE, &b_B_FitDaughtersConst_Kst_892_0_Kplus_PE);
   fChain->SetBranchAddress("B_FitDaughtersConst_Kst_892_0_Kplus_PX", B_FitDaughtersConst_Kst_892_0_Kplus_PX, &b_B_FitDaughtersConst_Kst_892_0_Kplus_PX);
   fChain->SetBranchAddress("B_FitDaughtersConst_Kst_892_0_Kplus_PY", B_FitDaughtersConst_Kst_892_0_Kplus_PY, &b_B_FitDaughtersConst_Kst_892_0_Kplus_PY);
   fChain->SetBranchAddress("B_FitDaughtersConst_Kst_892_0_Kplus_PZ", B_FitDaughtersConst_Kst_892_0_Kplus_PZ, &b_B_FitDaughtersConst_Kst_892_0_Kplus_PZ);
   fChain->SetBranchAddress("B_FitDaughtersConst_Kst_892_0_M", B_FitDaughtersConst_Kst_892_0_M, &b_B_FitDaughtersConst_Kst_892_0_M);
   fChain->SetBranchAddress("B_FitDaughtersConst_Kst_892_0_MERR", B_FitDaughtersConst_Kst_892_0_MERR, &b_B_FitDaughtersConst_Kst_892_0_MERR);
   fChain->SetBranchAddress("B_FitDaughtersConst_Kst_892_0_P", B_FitDaughtersConst_Kst_892_0_P, &b_B_FitDaughtersConst_Kst_892_0_P);
   fChain->SetBranchAddress("B_FitDaughtersConst_Kst_892_0_PERR", B_FitDaughtersConst_Kst_892_0_PERR, &b_B_FitDaughtersConst_Kst_892_0_PERR);
   fChain->SetBranchAddress("B_FitDaughtersConst_Kst_892_0_ctau", B_FitDaughtersConst_Kst_892_0_ctau, &b_B_FitDaughtersConst_Kst_892_0_ctau);
   fChain->SetBranchAddress("B_FitDaughtersConst_Kst_892_0_ctauErr", B_FitDaughtersConst_Kst_892_0_ctauErr, &b_B_FitDaughtersConst_Kst_892_0_ctauErr);
   fChain->SetBranchAddress("B_FitDaughtersConst_Kst_892_0_decayLength", B_FitDaughtersConst_Kst_892_0_decayLength, &b_B_FitDaughtersConst_Kst_892_0_decayLength);
   fChain->SetBranchAddress("B_FitDaughtersConst_Kst_892_0_decayLengthErr", B_FitDaughtersConst_Kst_892_0_decayLengthErr, &b_B_FitDaughtersConst_Kst_892_0_decayLengthErr);
   fChain->SetBranchAddress("B_FitDaughtersConst_Kst_892_0_piplus_ID", B_FitDaughtersConst_Kst_892_0_piplus_ID, &b_B_FitDaughtersConst_Kst_892_0_piplus_ID);
   fChain->SetBranchAddress("B_FitDaughtersConst_Kst_892_0_piplus_PE", B_FitDaughtersConst_Kst_892_0_piplus_PE, &b_B_FitDaughtersConst_Kst_892_0_piplus_PE);
   fChain->SetBranchAddress("B_FitDaughtersConst_Kst_892_0_piplus_PX", B_FitDaughtersConst_Kst_892_0_piplus_PX, &b_B_FitDaughtersConst_Kst_892_0_piplus_PX);
   fChain->SetBranchAddress("B_FitDaughtersConst_Kst_892_0_piplus_PY", B_FitDaughtersConst_Kst_892_0_piplus_PY, &b_B_FitDaughtersConst_Kst_892_0_piplus_PY);
   fChain->SetBranchAddress("B_FitDaughtersConst_Kst_892_0_piplus_PZ", B_FitDaughtersConst_Kst_892_0_piplus_PZ, &b_B_FitDaughtersConst_Kst_892_0_piplus_PZ);
   fChain->SetBranchAddress("B_FitDaughtersConst_M", B_FitDaughtersConst_M, &b_B_FitDaughtersConst_M);
   fChain->SetBranchAddress("B_FitDaughtersConst_MERR", B_FitDaughtersConst_MERR, &b_B_FitDaughtersConst_MERR);
   fChain->SetBranchAddress("B_FitDaughtersConst_P", B_FitDaughtersConst_P, &b_B_FitDaughtersConst_P);
   fChain->SetBranchAddress("B_FitDaughtersConst_PERR", B_FitDaughtersConst_PERR, &b_B_FitDaughtersConst_PERR);
   fChain->SetBranchAddress("B_FitDaughtersConst_chi2", B_FitDaughtersConst_chi2, &b_B_FitDaughtersConst_chi2);
   fChain->SetBranchAddress("B_FitDaughtersConst_nDOF", B_FitDaughtersConst_nDOF, &b_B_FitDaughtersConst_nDOF);
   fChain->SetBranchAddress("B_FitDaughtersConst_nIter", B_FitDaughtersConst_nIter, &b_B_FitDaughtersConst_nIter);
   fChain->SetBranchAddress("B_FitDaughtersConst_status", B_FitDaughtersConst_status, &b_B_FitDaughtersConst_status);
   fChain->SetBranchAddress("B_FitDaughtersPVConst_nPV", &B_FitDaughtersPVConst_nPV, &b_B_FitDaughtersPVConst_nPV);
   fChain->SetBranchAddress("B_FitDaughtersPVConst_J_psi_1S_M", B_FitDaughtersPVConst_J_psi_1S_M, &b_B_FitDaughtersPVConst_J_psi_1S_M);
   fChain->SetBranchAddress("B_FitDaughtersPVConst_J_psi_1S_MERR", B_FitDaughtersPVConst_J_psi_1S_MERR, &b_B_FitDaughtersPVConst_J_psi_1S_MERR);
   fChain->SetBranchAddress("B_FitDaughtersPVConst_J_psi_1S_P", B_FitDaughtersPVConst_J_psi_1S_P, &b_B_FitDaughtersPVConst_J_psi_1S_P);
   fChain->SetBranchAddress("B_FitDaughtersPVConst_J_psi_1S_PERR", B_FitDaughtersPVConst_J_psi_1S_PERR, &b_B_FitDaughtersPVConst_J_psi_1S_PERR);
   fChain->SetBranchAddress("B_FitDaughtersPVConst_J_psi_1S_ctau", B_FitDaughtersPVConst_J_psi_1S_ctau, &b_B_FitDaughtersPVConst_J_psi_1S_ctau);
   fChain->SetBranchAddress("B_FitDaughtersPVConst_J_psi_1S_ctauErr", B_FitDaughtersPVConst_J_psi_1S_ctauErr, &b_B_FitDaughtersPVConst_J_psi_1S_ctauErr);
   fChain->SetBranchAddress("B_FitDaughtersPVConst_J_psi_1S_decayLength", B_FitDaughtersPVConst_J_psi_1S_decayLength, &b_B_FitDaughtersPVConst_J_psi_1S_decayLength);
   fChain->SetBranchAddress("B_FitDaughtersPVConst_J_psi_1S_decayLengthErr", B_FitDaughtersPVConst_J_psi_1S_decayLengthErr, &b_B_FitDaughtersPVConst_J_psi_1S_decayLengthErr);
   fChain->SetBranchAddress("B_FitDaughtersPVConst_J_psi_1S_muminus_0_ID", B_FitDaughtersPVConst_J_psi_1S_muminus_0_ID, &b_B_FitDaughtersPVConst_J_psi_1S_muminus_0_ID);
   fChain->SetBranchAddress("B_FitDaughtersPVConst_J_psi_1S_muminus_0_PE", B_FitDaughtersPVConst_J_psi_1S_muminus_0_PE, &b_B_FitDaughtersPVConst_J_psi_1S_muminus_0_PE);
   fChain->SetBranchAddress("B_FitDaughtersPVConst_J_psi_1S_muminus_0_PX", B_FitDaughtersPVConst_J_psi_1S_muminus_0_PX, &b_B_FitDaughtersPVConst_J_psi_1S_muminus_0_PX);
   fChain->SetBranchAddress("B_FitDaughtersPVConst_J_psi_1S_muminus_0_PY", B_FitDaughtersPVConst_J_psi_1S_muminus_0_PY, &b_B_FitDaughtersPVConst_J_psi_1S_muminus_0_PY);
   fChain->SetBranchAddress("B_FitDaughtersPVConst_J_psi_1S_muminus_0_PZ", B_FitDaughtersPVConst_J_psi_1S_muminus_0_PZ, &b_B_FitDaughtersPVConst_J_psi_1S_muminus_0_PZ);
   fChain->SetBranchAddress("B_FitDaughtersPVConst_J_psi_1S_muminus_ID", B_FitDaughtersPVConst_J_psi_1S_muminus_ID, &b_B_FitDaughtersPVConst_J_psi_1S_muminus_ID);
   fChain->SetBranchAddress("B_FitDaughtersPVConst_J_psi_1S_muminus_PE", B_FitDaughtersPVConst_J_psi_1S_muminus_PE, &b_B_FitDaughtersPVConst_J_psi_1S_muminus_PE);
   fChain->SetBranchAddress("B_FitDaughtersPVConst_J_psi_1S_muminus_PX", B_FitDaughtersPVConst_J_psi_1S_muminus_PX, &b_B_FitDaughtersPVConst_J_psi_1S_muminus_PX);
   fChain->SetBranchAddress("B_FitDaughtersPVConst_J_psi_1S_muminus_PY", B_FitDaughtersPVConst_J_psi_1S_muminus_PY, &b_B_FitDaughtersPVConst_J_psi_1S_muminus_PY);
   fChain->SetBranchAddress("B_FitDaughtersPVConst_J_psi_1S_muminus_PZ", B_FitDaughtersPVConst_J_psi_1S_muminus_PZ, &b_B_FitDaughtersPVConst_J_psi_1S_muminus_PZ);
   fChain->SetBranchAddress("B_FitDaughtersPVConst_Kst_892_0_Kplus_ID", B_FitDaughtersPVConst_Kst_892_0_Kplus_ID, &b_B_FitDaughtersPVConst_Kst_892_0_Kplus_ID);
   fChain->SetBranchAddress("B_FitDaughtersPVConst_Kst_892_0_Kplus_PE", B_FitDaughtersPVConst_Kst_892_0_Kplus_PE, &b_B_FitDaughtersPVConst_Kst_892_0_Kplus_PE);
   fChain->SetBranchAddress("B_FitDaughtersPVConst_Kst_892_0_Kplus_PX", B_FitDaughtersPVConst_Kst_892_0_Kplus_PX, &b_B_FitDaughtersPVConst_Kst_892_0_Kplus_PX);
   fChain->SetBranchAddress("B_FitDaughtersPVConst_Kst_892_0_Kplus_PY", B_FitDaughtersPVConst_Kst_892_0_Kplus_PY, &b_B_FitDaughtersPVConst_Kst_892_0_Kplus_PY);
   fChain->SetBranchAddress("B_FitDaughtersPVConst_Kst_892_0_Kplus_PZ", B_FitDaughtersPVConst_Kst_892_0_Kplus_PZ, &b_B_FitDaughtersPVConst_Kst_892_0_Kplus_PZ);
   fChain->SetBranchAddress("B_FitDaughtersPVConst_Kst_892_0_M", B_FitDaughtersPVConst_Kst_892_0_M, &b_B_FitDaughtersPVConst_Kst_892_0_M);
   fChain->SetBranchAddress("B_FitDaughtersPVConst_Kst_892_0_MERR", B_FitDaughtersPVConst_Kst_892_0_MERR, &b_B_FitDaughtersPVConst_Kst_892_0_MERR);
   fChain->SetBranchAddress("B_FitDaughtersPVConst_Kst_892_0_P", B_FitDaughtersPVConst_Kst_892_0_P, &b_B_FitDaughtersPVConst_Kst_892_0_P);
   fChain->SetBranchAddress("B_FitDaughtersPVConst_Kst_892_0_PERR", B_FitDaughtersPVConst_Kst_892_0_PERR, &b_B_FitDaughtersPVConst_Kst_892_0_PERR);
   fChain->SetBranchAddress("B_FitDaughtersPVConst_Kst_892_0_ctau", B_FitDaughtersPVConst_Kst_892_0_ctau, &b_B_FitDaughtersPVConst_Kst_892_0_ctau);
   fChain->SetBranchAddress("B_FitDaughtersPVConst_Kst_892_0_ctauErr", B_FitDaughtersPVConst_Kst_892_0_ctauErr, &b_B_FitDaughtersPVConst_Kst_892_0_ctauErr);
   fChain->SetBranchAddress("B_FitDaughtersPVConst_Kst_892_0_decayLength", B_FitDaughtersPVConst_Kst_892_0_decayLength, &b_B_FitDaughtersPVConst_Kst_892_0_decayLength);
   fChain->SetBranchAddress("B_FitDaughtersPVConst_Kst_892_0_decayLengthErr", B_FitDaughtersPVConst_Kst_892_0_decayLengthErr, &b_B_FitDaughtersPVConst_Kst_892_0_decayLengthErr);
   fChain->SetBranchAddress("B_FitDaughtersPVConst_Kst_892_0_piplus_ID", B_FitDaughtersPVConst_Kst_892_0_piplus_ID, &b_B_FitDaughtersPVConst_Kst_892_0_piplus_ID);
   fChain->SetBranchAddress("B_FitDaughtersPVConst_Kst_892_0_piplus_PE", B_FitDaughtersPVConst_Kst_892_0_piplus_PE, &b_B_FitDaughtersPVConst_Kst_892_0_piplus_PE);
   fChain->SetBranchAddress("B_FitDaughtersPVConst_Kst_892_0_piplus_PX", B_FitDaughtersPVConst_Kst_892_0_piplus_PX, &b_B_FitDaughtersPVConst_Kst_892_0_piplus_PX);
   fChain->SetBranchAddress("B_FitDaughtersPVConst_Kst_892_0_piplus_PY", B_FitDaughtersPVConst_Kst_892_0_piplus_PY, &b_B_FitDaughtersPVConst_Kst_892_0_piplus_PY);
   fChain->SetBranchAddress("B_FitDaughtersPVConst_Kst_892_0_piplus_PZ", B_FitDaughtersPVConst_Kst_892_0_piplus_PZ, &b_B_FitDaughtersPVConst_Kst_892_0_piplus_PZ);
   fChain->SetBranchAddress("B_FitDaughtersPVConst_M", B_FitDaughtersPVConst_M, &b_B_FitDaughtersPVConst_M);
   fChain->SetBranchAddress("B_FitDaughtersPVConst_MERR", B_FitDaughtersPVConst_MERR, &b_B_FitDaughtersPVConst_MERR);
   fChain->SetBranchAddress("B_FitDaughtersPVConst_P", B_FitDaughtersPVConst_P, &b_B_FitDaughtersPVConst_P);
   fChain->SetBranchAddress("B_FitDaughtersPVConst_PERR", B_FitDaughtersPVConst_PERR, &b_B_FitDaughtersPVConst_PERR);
   fChain->SetBranchAddress("B_FitDaughtersPVConst_PV_X", B_FitDaughtersPVConst_PV_X, &b_B_FitDaughtersPVConst_PV_X);
   fChain->SetBranchAddress("B_FitDaughtersPVConst_PV_Y", B_FitDaughtersPVConst_PV_Y, &b_B_FitDaughtersPVConst_PV_Y);
   fChain->SetBranchAddress("B_FitDaughtersPVConst_PV_Z", B_FitDaughtersPVConst_PV_Z, &b_B_FitDaughtersPVConst_PV_Z);
   fChain->SetBranchAddress("B_FitDaughtersPVConst_PV_key", B_FitDaughtersPVConst_PV_key, &b_B_FitDaughtersPVConst_PV_key);
   fChain->SetBranchAddress("B_FitDaughtersPVConst_chi2", B_FitDaughtersPVConst_chi2, &b_B_FitDaughtersPVConst_chi2);
   fChain->SetBranchAddress("B_FitDaughtersPVConst_ctau", B_FitDaughtersPVConst_ctau, &b_B_FitDaughtersPVConst_ctau);
   fChain->SetBranchAddress("B_FitDaughtersPVConst_ctauErr", B_FitDaughtersPVConst_ctauErr, &b_B_FitDaughtersPVConst_ctauErr);
   fChain->SetBranchAddress("B_FitDaughtersPVConst_decayLength", B_FitDaughtersPVConst_decayLength, &b_B_FitDaughtersPVConst_decayLength);
   fChain->SetBranchAddress("B_FitDaughtersPVConst_decayLengthErr", B_FitDaughtersPVConst_decayLengthErr, &b_B_FitDaughtersPVConst_decayLengthErr);
   fChain->SetBranchAddress("B_FitDaughtersPVConst_nDOF", B_FitDaughtersPVConst_nDOF, &b_B_FitDaughtersPVConst_nDOF);
   fChain->SetBranchAddress("B_FitDaughtersPVConst_nIter", B_FitDaughtersPVConst_nIter, &b_B_FitDaughtersPVConst_nIter);
   fChain->SetBranchAddress("B_FitDaughtersPVConst_status", B_FitDaughtersPVConst_status, &b_B_FitDaughtersPVConst_status);
   fChain->SetBranchAddress("B_FitPVConst_nPV", &B_FitPVConst_nPV, &b_B_FitPVConst_nPV);
   fChain->SetBranchAddress("B_FitPVConst_J_psi_1S_M", B_FitPVConst_J_psi_1S_M, &b_B_FitPVConst_J_psi_1S_M);
   fChain->SetBranchAddress("B_FitPVConst_J_psi_1S_MERR", B_FitPVConst_J_psi_1S_MERR, &b_B_FitPVConst_J_psi_1S_MERR);
   fChain->SetBranchAddress("B_FitPVConst_J_psi_1S_P", B_FitPVConst_J_psi_1S_P, &b_B_FitPVConst_J_psi_1S_P);
   fChain->SetBranchAddress("B_FitPVConst_J_psi_1S_PERR", B_FitPVConst_J_psi_1S_PERR, &b_B_FitPVConst_J_psi_1S_PERR);
   fChain->SetBranchAddress("B_FitPVConst_J_psi_1S_ctau", B_FitPVConst_J_psi_1S_ctau, &b_B_FitPVConst_J_psi_1S_ctau);
   fChain->SetBranchAddress("B_FitPVConst_J_psi_1S_ctauErr", B_FitPVConst_J_psi_1S_ctauErr, &b_B_FitPVConst_J_psi_1S_ctauErr);
   fChain->SetBranchAddress("B_FitPVConst_J_psi_1S_decayLength", B_FitPVConst_J_psi_1S_decayLength, &b_B_FitPVConst_J_psi_1S_decayLength);
   fChain->SetBranchAddress("B_FitPVConst_J_psi_1S_decayLengthErr", B_FitPVConst_J_psi_1S_decayLengthErr, &b_B_FitPVConst_J_psi_1S_decayLengthErr);
   fChain->SetBranchAddress("B_FitPVConst_J_psi_1S_muminus_0_ID", B_FitPVConst_J_psi_1S_muminus_0_ID, &b_B_FitPVConst_J_psi_1S_muminus_0_ID);
   fChain->SetBranchAddress("B_FitPVConst_J_psi_1S_muminus_0_PE", B_FitPVConst_J_psi_1S_muminus_0_PE, &b_B_FitPVConst_J_psi_1S_muminus_0_PE);
   fChain->SetBranchAddress("B_FitPVConst_J_psi_1S_muminus_0_PX", B_FitPVConst_J_psi_1S_muminus_0_PX, &b_B_FitPVConst_J_psi_1S_muminus_0_PX);
   fChain->SetBranchAddress("B_FitPVConst_J_psi_1S_muminus_0_PY", B_FitPVConst_J_psi_1S_muminus_0_PY, &b_B_FitPVConst_J_psi_1S_muminus_0_PY);
   fChain->SetBranchAddress("B_FitPVConst_J_psi_1S_muminus_0_PZ", B_FitPVConst_J_psi_1S_muminus_0_PZ, &b_B_FitPVConst_J_psi_1S_muminus_0_PZ);
   fChain->SetBranchAddress("B_FitPVConst_J_psi_1S_muminus_ID", B_FitPVConst_J_psi_1S_muminus_ID, &b_B_FitPVConst_J_psi_1S_muminus_ID);
   fChain->SetBranchAddress("B_FitPVConst_J_psi_1S_muminus_PE", B_FitPVConst_J_psi_1S_muminus_PE, &b_B_FitPVConst_J_psi_1S_muminus_PE);
   fChain->SetBranchAddress("B_FitPVConst_J_psi_1S_muminus_PX", B_FitPVConst_J_psi_1S_muminus_PX, &b_B_FitPVConst_J_psi_1S_muminus_PX);
   fChain->SetBranchAddress("B_FitPVConst_J_psi_1S_muminus_PY", B_FitPVConst_J_psi_1S_muminus_PY, &b_B_FitPVConst_J_psi_1S_muminus_PY);
   fChain->SetBranchAddress("B_FitPVConst_J_psi_1S_muminus_PZ", B_FitPVConst_J_psi_1S_muminus_PZ, &b_B_FitPVConst_J_psi_1S_muminus_PZ);
   fChain->SetBranchAddress("B_FitPVConst_Kst_892_0_Kplus_ID", B_FitPVConst_Kst_892_0_Kplus_ID, &b_B_FitPVConst_Kst_892_0_Kplus_ID);
   fChain->SetBranchAddress("B_FitPVConst_Kst_892_0_Kplus_PE", B_FitPVConst_Kst_892_0_Kplus_PE, &b_B_FitPVConst_Kst_892_0_Kplus_PE);
   fChain->SetBranchAddress("B_FitPVConst_Kst_892_0_Kplus_PX", B_FitPVConst_Kst_892_0_Kplus_PX, &b_B_FitPVConst_Kst_892_0_Kplus_PX);
   fChain->SetBranchAddress("B_FitPVConst_Kst_892_0_Kplus_PY", B_FitPVConst_Kst_892_0_Kplus_PY, &b_B_FitPVConst_Kst_892_0_Kplus_PY);
   fChain->SetBranchAddress("B_FitPVConst_Kst_892_0_Kplus_PZ", B_FitPVConst_Kst_892_0_Kplus_PZ, &b_B_FitPVConst_Kst_892_0_Kplus_PZ);
   fChain->SetBranchAddress("B_FitPVConst_Kst_892_0_M", B_FitPVConst_Kst_892_0_M, &b_B_FitPVConst_Kst_892_0_M);
   fChain->SetBranchAddress("B_FitPVConst_Kst_892_0_MERR", B_FitPVConst_Kst_892_0_MERR, &b_B_FitPVConst_Kst_892_0_MERR);
   fChain->SetBranchAddress("B_FitPVConst_Kst_892_0_P", B_FitPVConst_Kst_892_0_P, &b_B_FitPVConst_Kst_892_0_P);
   fChain->SetBranchAddress("B_FitPVConst_Kst_892_0_PERR", B_FitPVConst_Kst_892_0_PERR, &b_B_FitPVConst_Kst_892_0_PERR);
   fChain->SetBranchAddress("B_FitPVConst_Kst_892_0_ctau", B_FitPVConst_Kst_892_0_ctau, &b_B_FitPVConst_Kst_892_0_ctau);
   fChain->SetBranchAddress("B_FitPVConst_Kst_892_0_ctauErr", B_FitPVConst_Kst_892_0_ctauErr, &b_B_FitPVConst_Kst_892_0_ctauErr);
   fChain->SetBranchAddress("B_FitPVConst_Kst_892_0_decayLength", B_FitPVConst_Kst_892_0_decayLength, &b_B_FitPVConst_Kst_892_0_decayLength);
   fChain->SetBranchAddress("B_FitPVConst_Kst_892_0_decayLengthErr", B_FitPVConst_Kst_892_0_decayLengthErr, &b_B_FitPVConst_Kst_892_0_decayLengthErr);
   fChain->SetBranchAddress("B_FitPVConst_Kst_892_0_piplus_ID", B_FitPVConst_Kst_892_0_piplus_ID, &b_B_FitPVConst_Kst_892_0_piplus_ID);
   fChain->SetBranchAddress("B_FitPVConst_Kst_892_0_piplus_PE", B_FitPVConst_Kst_892_0_piplus_PE, &b_B_FitPVConst_Kst_892_0_piplus_PE);
   fChain->SetBranchAddress("B_FitPVConst_Kst_892_0_piplus_PX", B_FitPVConst_Kst_892_0_piplus_PX, &b_B_FitPVConst_Kst_892_0_piplus_PX);
   fChain->SetBranchAddress("B_FitPVConst_Kst_892_0_piplus_PY", B_FitPVConst_Kst_892_0_piplus_PY, &b_B_FitPVConst_Kst_892_0_piplus_PY);
   fChain->SetBranchAddress("B_FitPVConst_Kst_892_0_piplus_PZ", B_FitPVConst_Kst_892_0_piplus_PZ, &b_B_FitPVConst_Kst_892_0_piplus_PZ);
   fChain->SetBranchAddress("B_FitPVConst_M", B_FitPVConst_M, &b_B_FitPVConst_M);
   fChain->SetBranchAddress("B_FitPVConst_MERR", B_FitPVConst_MERR, &b_B_FitPVConst_MERR);
   fChain->SetBranchAddress("B_FitPVConst_P", B_FitPVConst_P, &b_B_FitPVConst_P);
   fChain->SetBranchAddress("B_FitPVConst_PERR", B_FitPVConst_PERR, &b_B_FitPVConst_PERR);
   fChain->SetBranchAddress("B_FitPVConst_PV_X", B_FitPVConst_PV_X, &b_B_FitPVConst_PV_X);
   fChain->SetBranchAddress("B_FitPVConst_PV_Y", B_FitPVConst_PV_Y, &b_B_FitPVConst_PV_Y);
   fChain->SetBranchAddress("B_FitPVConst_PV_Z", B_FitPVConst_PV_Z, &b_B_FitPVConst_PV_Z);
   fChain->SetBranchAddress("B_FitPVConst_PV_key", B_FitPVConst_PV_key, &b_B_FitPVConst_PV_key);
   fChain->SetBranchAddress("B_FitPVConst_chi2", B_FitPVConst_chi2, &b_B_FitPVConst_chi2);
   fChain->SetBranchAddress("B_FitPVConst_ctau", B_FitPVConst_ctau, &b_B_FitPVConst_ctau);
   fChain->SetBranchAddress("B_FitPVConst_ctauErr", B_FitPVConst_ctauErr, &b_B_FitPVConst_ctauErr);
   fChain->SetBranchAddress("B_FitPVConst_decayLength", B_FitPVConst_decayLength, &b_B_FitPVConst_decayLength);
   fChain->SetBranchAddress("B_FitPVConst_decayLengthErr", B_FitPVConst_decayLengthErr, &b_B_FitPVConst_decayLengthErr);
   fChain->SetBranchAddress("B_FitPVConst_nDOF", B_FitPVConst_nDOF, &b_B_FitPVConst_nDOF);
   fChain->SetBranchAddress("B_FitPVConst_nIter", B_FitPVConst_nIter, &b_B_FitPVConst_nIter);
   fChain->SetBranchAddress("B_FitPVConst_status", B_FitPVConst_status, &b_B_FitPVConst_status);
   fChain->SetBranchAddress("B_FitwithoutConst_nPV", &B_FitwithoutConst_nPV, &b_B_FitwithoutConst_nPV);
   fChain->SetBranchAddress("B_FitwithoutConst_J_psi_1S_M", B_FitwithoutConst_J_psi_1S_M, &b_B_FitwithoutConst_J_psi_1S_M);
   fChain->SetBranchAddress("B_FitwithoutConst_J_psi_1S_MERR", B_FitwithoutConst_J_psi_1S_MERR, &b_B_FitwithoutConst_J_psi_1S_MERR);
   fChain->SetBranchAddress("B_FitwithoutConst_J_psi_1S_P", B_FitwithoutConst_J_psi_1S_P, &b_B_FitwithoutConst_J_psi_1S_P);
   fChain->SetBranchAddress("B_FitwithoutConst_J_psi_1S_PERR", B_FitwithoutConst_J_psi_1S_PERR, &b_B_FitwithoutConst_J_psi_1S_PERR);
   fChain->SetBranchAddress("B_FitwithoutConst_J_psi_1S_ctau", B_FitwithoutConst_J_psi_1S_ctau, &b_B_FitwithoutConst_J_psi_1S_ctau);
   fChain->SetBranchAddress("B_FitwithoutConst_J_psi_1S_ctauErr", B_FitwithoutConst_J_psi_1S_ctauErr, &b_B_FitwithoutConst_J_psi_1S_ctauErr);
   fChain->SetBranchAddress("B_FitwithoutConst_J_psi_1S_decayLength", B_FitwithoutConst_J_psi_1S_decayLength, &b_B_FitwithoutConst_J_psi_1S_decayLength);
   fChain->SetBranchAddress("B_FitwithoutConst_J_psi_1S_decayLengthErr", B_FitwithoutConst_J_psi_1S_decayLengthErr, &b_B_FitwithoutConst_J_psi_1S_decayLengthErr);
   fChain->SetBranchAddress("B_FitwithoutConst_J_psi_1S_muminus_0_ID", B_FitwithoutConst_J_psi_1S_muminus_0_ID, &b_B_FitwithoutConst_J_psi_1S_muminus_0_ID);
   fChain->SetBranchAddress("B_FitwithoutConst_J_psi_1S_muminus_0_PE", B_FitwithoutConst_J_psi_1S_muminus_0_PE, &b_B_FitwithoutConst_J_psi_1S_muminus_0_PE);
   fChain->SetBranchAddress("B_FitwithoutConst_J_psi_1S_muminus_0_PX", B_FitwithoutConst_J_psi_1S_muminus_0_PX, &b_B_FitwithoutConst_J_psi_1S_muminus_0_PX);
   fChain->SetBranchAddress("B_FitwithoutConst_J_psi_1S_muminus_0_PY", B_FitwithoutConst_J_psi_1S_muminus_0_PY, &b_B_FitwithoutConst_J_psi_1S_muminus_0_PY);
   fChain->SetBranchAddress("B_FitwithoutConst_J_psi_1S_muminus_0_PZ", B_FitwithoutConst_J_psi_1S_muminus_0_PZ, &b_B_FitwithoutConst_J_psi_1S_muminus_0_PZ);
   fChain->SetBranchAddress("B_FitwithoutConst_J_psi_1S_muminus_ID", B_FitwithoutConst_J_psi_1S_muminus_ID, &b_B_FitwithoutConst_J_psi_1S_muminus_ID);
   fChain->SetBranchAddress("B_FitwithoutConst_J_psi_1S_muminus_PE", B_FitwithoutConst_J_psi_1S_muminus_PE, &b_B_FitwithoutConst_J_psi_1S_muminus_PE);
   fChain->SetBranchAddress("B_FitwithoutConst_J_psi_1S_muminus_PX", B_FitwithoutConst_J_psi_1S_muminus_PX, &b_B_FitwithoutConst_J_psi_1S_muminus_PX);
   fChain->SetBranchAddress("B_FitwithoutConst_J_psi_1S_muminus_PY", B_FitwithoutConst_J_psi_1S_muminus_PY, &b_B_FitwithoutConst_J_psi_1S_muminus_PY);
   fChain->SetBranchAddress("B_FitwithoutConst_J_psi_1S_muminus_PZ", B_FitwithoutConst_J_psi_1S_muminus_PZ, &b_B_FitwithoutConst_J_psi_1S_muminus_PZ);
   fChain->SetBranchAddress("B_FitwithoutConst_Kst_892_0_Kplus_ID", B_FitwithoutConst_Kst_892_0_Kplus_ID, &b_B_FitwithoutConst_Kst_892_0_Kplus_ID);
   fChain->SetBranchAddress("B_FitwithoutConst_Kst_892_0_Kplus_PE", B_FitwithoutConst_Kst_892_0_Kplus_PE, &b_B_FitwithoutConst_Kst_892_0_Kplus_PE);
   fChain->SetBranchAddress("B_FitwithoutConst_Kst_892_0_Kplus_PX", B_FitwithoutConst_Kst_892_0_Kplus_PX, &b_B_FitwithoutConst_Kst_892_0_Kplus_PX);
   fChain->SetBranchAddress("B_FitwithoutConst_Kst_892_0_Kplus_PY", B_FitwithoutConst_Kst_892_0_Kplus_PY, &b_B_FitwithoutConst_Kst_892_0_Kplus_PY);
   fChain->SetBranchAddress("B_FitwithoutConst_Kst_892_0_Kplus_PZ", B_FitwithoutConst_Kst_892_0_Kplus_PZ, &b_B_FitwithoutConst_Kst_892_0_Kplus_PZ);
   fChain->SetBranchAddress("B_FitwithoutConst_Kst_892_0_M", B_FitwithoutConst_Kst_892_0_M, &b_B_FitwithoutConst_Kst_892_0_M);
   fChain->SetBranchAddress("B_FitwithoutConst_Kst_892_0_MERR", B_FitwithoutConst_Kst_892_0_MERR, &b_B_FitwithoutConst_Kst_892_0_MERR);
   fChain->SetBranchAddress("B_FitwithoutConst_Kst_892_0_P", B_FitwithoutConst_Kst_892_0_P, &b_B_FitwithoutConst_Kst_892_0_P);
   fChain->SetBranchAddress("B_FitwithoutConst_Kst_892_0_PERR", B_FitwithoutConst_Kst_892_0_PERR, &b_B_FitwithoutConst_Kst_892_0_PERR);
   fChain->SetBranchAddress("B_FitwithoutConst_Kst_892_0_ctau", B_FitwithoutConst_Kst_892_0_ctau, &b_B_FitwithoutConst_Kst_892_0_ctau);
   fChain->SetBranchAddress("B_FitwithoutConst_Kst_892_0_ctauErr", B_FitwithoutConst_Kst_892_0_ctauErr, &b_B_FitwithoutConst_Kst_892_0_ctauErr);
   fChain->SetBranchAddress("B_FitwithoutConst_Kst_892_0_decayLength", B_FitwithoutConst_Kst_892_0_decayLength, &b_B_FitwithoutConst_Kst_892_0_decayLength);
   fChain->SetBranchAddress("B_FitwithoutConst_Kst_892_0_decayLengthErr", B_FitwithoutConst_Kst_892_0_decayLengthErr, &b_B_FitwithoutConst_Kst_892_0_decayLengthErr);
   fChain->SetBranchAddress("B_FitwithoutConst_Kst_892_0_piplus_ID", B_FitwithoutConst_Kst_892_0_piplus_ID, &b_B_FitwithoutConst_Kst_892_0_piplus_ID);
   fChain->SetBranchAddress("B_FitwithoutConst_Kst_892_0_piplus_PE", B_FitwithoutConst_Kst_892_0_piplus_PE, &b_B_FitwithoutConst_Kst_892_0_piplus_PE);
   fChain->SetBranchAddress("B_FitwithoutConst_Kst_892_0_piplus_PX", B_FitwithoutConst_Kst_892_0_piplus_PX, &b_B_FitwithoutConst_Kst_892_0_piplus_PX);
   fChain->SetBranchAddress("B_FitwithoutConst_Kst_892_0_piplus_PY", B_FitwithoutConst_Kst_892_0_piplus_PY, &b_B_FitwithoutConst_Kst_892_0_piplus_PY);
   fChain->SetBranchAddress("B_FitwithoutConst_Kst_892_0_piplus_PZ", B_FitwithoutConst_Kst_892_0_piplus_PZ, &b_B_FitwithoutConst_Kst_892_0_piplus_PZ);
   fChain->SetBranchAddress("B_FitwithoutConst_M", B_FitwithoutConst_M, &b_B_FitwithoutConst_M);
   fChain->SetBranchAddress("B_FitwithoutConst_MERR", B_FitwithoutConst_MERR, &b_B_FitwithoutConst_MERR);
   fChain->SetBranchAddress("B_FitwithoutConst_P", B_FitwithoutConst_P, &b_B_FitwithoutConst_P);
   fChain->SetBranchAddress("B_FitwithoutConst_PERR", B_FitwithoutConst_PERR, &b_B_FitwithoutConst_PERR);
   fChain->SetBranchAddress("B_FitwithoutConst_chi2", B_FitwithoutConst_chi2, &b_B_FitwithoutConst_chi2);
   fChain->SetBranchAddress("B_FitwithoutConst_nDOF", B_FitwithoutConst_nDOF, &b_B_FitwithoutConst_nDOF);
   fChain->SetBranchAddress("B_FitwithoutConst_nIter", B_FitwithoutConst_nIter, &b_B_FitwithoutConst_nIter);
   fChain->SetBranchAddress("B_FitwithoutConst_status", B_FitwithoutConst_status, &b_B_FitwithoutConst_status);
   fChain->SetBranchAddress("B_L0Global_Dec", &B_L0Global_Dec, &b_B_L0Global_Dec);
   fChain->SetBranchAddress("B_L0Global_TIS", &B_L0Global_TIS, &b_B_L0Global_TIS);
   fChain->SetBranchAddress("B_L0Global_TOS", &B_L0Global_TOS, &b_B_L0Global_TOS);
   fChain->SetBranchAddress("B_Hlt1Global_Dec", &B_Hlt1Global_Dec, &b_B_Hlt1Global_Dec);
   fChain->SetBranchAddress("B_Hlt1Global_TIS", &B_Hlt1Global_TIS, &b_B_Hlt1Global_TIS);
   fChain->SetBranchAddress("B_Hlt1Global_TOS", &B_Hlt1Global_TOS, &b_B_Hlt1Global_TOS);
   fChain->SetBranchAddress("B_Hlt1Phys_Dec", &B_Hlt1Phys_Dec, &b_B_Hlt1Phys_Dec);
   fChain->SetBranchAddress("B_Hlt1Phys_TIS", &B_Hlt1Phys_TIS, &b_B_Hlt1Phys_TIS);
   fChain->SetBranchAddress("B_Hlt1Phys_TOS", &B_Hlt1Phys_TOS, &b_B_Hlt1Phys_TOS);
   fChain->SetBranchAddress("B_Hlt2Global_Dec", &B_Hlt2Global_Dec, &b_B_Hlt2Global_Dec);
   fChain->SetBranchAddress("B_Hlt2Global_TIS", &B_Hlt2Global_TIS, &b_B_Hlt2Global_TIS);
   fChain->SetBranchAddress("B_Hlt2Global_TOS", &B_Hlt2Global_TOS, &b_B_Hlt2Global_TOS);
   fChain->SetBranchAddress("B_Hlt2Phys_Dec", &B_Hlt2Phys_Dec, &b_B_Hlt2Phys_Dec);
   fChain->SetBranchAddress("B_Hlt2Phys_TIS", &B_Hlt2Phys_TIS, &b_B_Hlt2Phys_TIS);
   fChain->SetBranchAddress("B_Hlt2Phys_TOS", &B_Hlt2Phys_TOS, &b_B_Hlt2Phys_TOS);
   fChain->SetBranchAddress("B_L0PhysicsDecision_Dec", &B_L0PhysicsDecision_Dec, &b_B_L0PhysicsDecision_Dec);
   fChain->SetBranchAddress("B_L0PhysicsDecision_TIS", &B_L0PhysicsDecision_TIS, &b_B_L0PhysicsDecision_TIS);
   fChain->SetBranchAddress("B_L0PhysicsDecision_TOS", &B_L0PhysicsDecision_TOS, &b_B_L0PhysicsDecision_TOS);
   fChain->SetBranchAddress("B_L0MuonDecision_Dec", &B_L0MuonDecision_Dec, &b_B_L0MuonDecision_Dec);
   fChain->SetBranchAddress("B_L0MuonDecision_TIS", &B_L0MuonDecision_TIS, &b_B_L0MuonDecision_TIS);
   fChain->SetBranchAddress("B_L0MuonDecision_TOS", &B_L0MuonDecision_TOS, &b_B_L0MuonDecision_TOS);
   fChain->SetBranchAddress("B_L0DiMuonDecision_Dec", &B_L0DiMuonDecision_Dec, &b_B_L0DiMuonDecision_Dec);
   fChain->SetBranchAddress("B_L0DiMuonDecision_TIS", &B_L0DiMuonDecision_TIS, &b_B_L0DiMuonDecision_TIS);
   fChain->SetBranchAddress("B_L0DiMuonDecision_TOS", &B_L0DiMuonDecision_TOS, &b_B_L0DiMuonDecision_TOS);
   fChain->SetBranchAddress("B_L0MuonHighDecision_Dec", &B_L0MuonHighDecision_Dec, &b_B_L0MuonHighDecision_Dec);
   fChain->SetBranchAddress("B_L0MuonHighDecision_TIS", &B_L0MuonHighDecision_TIS, &b_B_L0MuonHighDecision_TIS);
   fChain->SetBranchAddress("B_L0MuonHighDecision_TOS", &B_L0MuonHighDecision_TOS, &b_B_L0MuonHighDecision_TOS);
   fChain->SetBranchAddress("B_L0HadronDecision_Dec", &B_L0HadronDecision_Dec, &b_B_L0HadronDecision_Dec);
   fChain->SetBranchAddress("B_L0HadronDecision_TIS", &B_L0HadronDecision_TIS, &b_B_L0HadronDecision_TIS);
   fChain->SetBranchAddress("B_L0HadronDecision_TOS", &B_L0HadronDecision_TOS, &b_B_L0HadronDecision_TOS);
   fChain->SetBranchAddress("B_L0ElectronDecision_Dec", &B_L0ElectronDecision_Dec, &b_B_L0ElectronDecision_Dec);
   fChain->SetBranchAddress("B_L0ElectronDecision_TIS", &B_L0ElectronDecision_TIS, &b_B_L0ElectronDecision_TIS);
   fChain->SetBranchAddress("B_L0ElectronDecision_TOS", &B_L0ElectronDecision_TOS, &b_B_L0ElectronDecision_TOS);
   fChain->SetBranchAddress("B_L0PhotonDecision_Dec", &B_L0PhotonDecision_Dec, &b_B_L0PhotonDecision_Dec);
   fChain->SetBranchAddress("B_L0PhotonDecision_TIS", &B_L0PhotonDecision_TIS, &b_B_L0PhotonDecision_TIS);
   fChain->SetBranchAddress("B_L0PhotonDecision_TOS", &B_L0PhotonDecision_TOS, &b_B_L0PhotonDecision_TOS);
   fChain->SetBranchAddress("B_L0MuonNoSPDDecision_Dec", &B_L0MuonNoSPDDecision_Dec, &b_B_L0MuonNoSPDDecision_Dec);
   fChain->SetBranchAddress("B_L0MuonNoSPDDecision_TIS", &B_L0MuonNoSPDDecision_TIS, &b_B_L0MuonNoSPDDecision_TIS);
   fChain->SetBranchAddress("B_L0MuonNoSPDDecision_TOS", &B_L0MuonNoSPDDecision_TOS, &b_B_L0MuonNoSPDDecision_TOS);
   fChain->SetBranchAddress("B_Hlt1DiMuonHighMassDecision_Dec", &B_Hlt1DiMuonHighMassDecision_Dec, &b_B_Hlt1DiMuonHighMassDecision_Dec);
   fChain->SetBranchAddress("B_Hlt1DiMuonHighMassDecision_TIS", &B_Hlt1DiMuonHighMassDecision_TIS, &b_B_Hlt1DiMuonHighMassDecision_TIS);
   fChain->SetBranchAddress("B_Hlt1DiMuonHighMassDecision_TOS", &B_Hlt1DiMuonHighMassDecision_TOS, &b_B_Hlt1DiMuonHighMassDecision_TOS);
   fChain->SetBranchAddress("B_Hlt1DiMuonLowMassDecision_Dec", &B_Hlt1DiMuonLowMassDecision_Dec, &b_B_Hlt1DiMuonLowMassDecision_Dec);
   fChain->SetBranchAddress("B_Hlt1DiMuonLowMassDecision_TIS", &B_Hlt1DiMuonLowMassDecision_TIS, &b_B_Hlt1DiMuonLowMassDecision_TIS);
   fChain->SetBranchAddress("B_Hlt1DiMuonLowMassDecision_TOS", &B_Hlt1DiMuonLowMassDecision_TOS, &b_B_Hlt1DiMuonLowMassDecision_TOS);
   fChain->SetBranchAddress("B_Hlt1SingleMuonNoIPDecision_Dec", &B_Hlt1SingleMuonNoIPDecision_Dec, &b_B_Hlt1SingleMuonNoIPDecision_Dec);
   fChain->SetBranchAddress("B_Hlt1SingleMuonNoIPDecision_TIS", &B_Hlt1SingleMuonNoIPDecision_TIS, &b_B_Hlt1SingleMuonNoIPDecision_TIS);
   fChain->SetBranchAddress("B_Hlt1SingleMuonNoIPDecision_TOS", &B_Hlt1SingleMuonNoIPDecision_TOS, &b_B_Hlt1SingleMuonNoIPDecision_TOS);
   fChain->SetBranchAddress("B_Hlt1SingleMuonHighPTDecision_Dec", &B_Hlt1SingleMuonHighPTDecision_Dec, &b_B_Hlt1SingleMuonHighPTDecision_Dec);
   fChain->SetBranchAddress("B_Hlt1SingleMuonHighPTDecision_TIS", &B_Hlt1SingleMuonHighPTDecision_TIS, &b_B_Hlt1SingleMuonHighPTDecision_TIS);
   fChain->SetBranchAddress("B_Hlt1SingleMuonHighPTDecision_TOS", &B_Hlt1SingleMuonHighPTDecision_TOS, &b_B_Hlt1SingleMuonHighPTDecision_TOS);
   fChain->SetBranchAddress("B_Hlt1SingleElectronNoIPDecision_Dec", &B_Hlt1SingleElectronNoIPDecision_Dec, &b_B_Hlt1SingleElectronNoIPDecision_Dec);
   fChain->SetBranchAddress("B_Hlt1SingleElectronNoIPDecision_TIS", &B_Hlt1SingleElectronNoIPDecision_TIS, &b_B_Hlt1SingleElectronNoIPDecision_TIS);
   fChain->SetBranchAddress("B_Hlt1SingleElectronNoIPDecision_TOS", &B_Hlt1SingleElectronNoIPDecision_TOS, &b_B_Hlt1SingleElectronNoIPDecision_TOS);
   fChain->SetBranchAddress("B_Hlt1TrackAllL0Decision_Dec", &B_Hlt1TrackAllL0Decision_Dec, &b_B_Hlt1TrackAllL0Decision_Dec);
   fChain->SetBranchAddress("B_Hlt1TrackAllL0Decision_TIS", &B_Hlt1TrackAllL0Decision_TIS, &b_B_Hlt1TrackAllL0Decision_TIS);
   fChain->SetBranchAddress("B_Hlt1TrackAllL0Decision_TOS", &B_Hlt1TrackAllL0Decision_TOS, &b_B_Hlt1TrackAllL0Decision_TOS);
   fChain->SetBranchAddress("B_Hlt1TrackAllL0TightDecision_Dec", &B_Hlt1TrackAllL0TightDecision_Dec, &b_B_Hlt1TrackAllL0TightDecision_Dec);
   fChain->SetBranchAddress("B_Hlt1TrackAllL0TightDecision_TIS", &B_Hlt1TrackAllL0TightDecision_TIS, &b_B_Hlt1TrackAllL0TightDecision_TIS);
   fChain->SetBranchAddress("B_Hlt1TrackAllL0TightDecision_TOS", &B_Hlt1TrackAllL0TightDecision_TOS, &b_B_Hlt1TrackAllL0TightDecision_TOS);
   fChain->SetBranchAddress("B_Hlt1TrackMuonDecision_Dec", &B_Hlt1TrackMuonDecision_Dec, &b_B_Hlt1TrackMuonDecision_Dec);
   fChain->SetBranchAddress("B_Hlt1TrackMuonDecision_TIS", &B_Hlt1TrackMuonDecision_TIS, &b_B_Hlt1TrackMuonDecision_TIS);
   fChain->SetBranchAddress("B_Hlt1TrackMuonDecision_TOS", &B_Hlt1TrackMuonDecision_TOS, &b_B_Hlt1TrackMuonDecision_TOS);
   fChain->SetBranchAddress("B_Hlt1TrackPhotonDecision_Dec", &B_Hlt1TrackPhotonDecision_Dec, &b_B_Hlt1TrackPhotonDecision_Dec);
   fChain->SetBranchAddress("B_Hlt1TrackPhotonDecision_TIS", &B_Hlt1TrackPhotonDecision_TIS, &b_B_Hlt1TrackPhotonDecision_TIS);
   fChain->SetBranchAddress("B_Hlt1TrackPhotonDecision_TOS", &B_Hlt1TrackPhotonDecision_TOS, &b_B_Hlt1TrackPhotonDecision_TOS);
   fChain->SetBranchAddress("B_Hlt1TrackForwardPassThroughDecision_Dec", &B_Hlt1TrackForwardPassThroughDecision_Dec, &b_B_Hlt1TrackForwardPassThroughDecision_Dec);
   fChain->SetBranchAddress("B_Hlt1TrackForwardPassThroughDecision_TIS", &B_Hlt1TrackForwardPassThroughDecision_TIS, &b_B_Hlt1TrackForwardPassThroughDecision_TIS);
   fChain->SetBranchAddress("B_Hlt1TrackForwardPassThroughDecision_TOS", &B_Hlt1TrackForwardPassThroughDecision_TOS, &b_B_Hlt1TrackForwardPassThroughDecision_TOS);
   fChain->SetBranchAddress("B_Hlt1TrackForwardPassThroughLooseDecision_Dec", &B_Hlt1TrackForwardPassThroughLooseDecision_Dec, &b_B_Hlt1TrackForwardPassThroughLooseDecision_Dec);
   fChain->SetBranchAddress("B_Hlt1TrackForwardPassThroughLooseDecision_TIS", &B_Hlt1TrackForwardPassThroughLooseDecision_TIS, &b_B_Hlt1TrackForwardPassThroughLooseDecision_TIS);
   fChain->SetBranchAddress("B_Hlt1TrackForwardPassThroughLooseDecision_TOS", &B_Hlt1TrackForwardPassThroughLooseDecision_TOS, &b_B_Hlt1TrackForwardPassThroughLooseDecision_TOS);
   fChain->SetBranchAddress("B_Hlt1LumiDecision_Dec", &B_Hlt1LumiDecision_Dec, &b_B_Hlt1LumiDecision_Dec);
   fChain->SetBranchAddress("B_Hlt1LumiDecision_TIS", &B_Hlt1LumiDecision_TIS, &b_B_Hlt1LumiDecision_TIS);
   fChain->SetBranchAddress("B_Hlt1LumiDecision_TOS", &B_Hlt1LumiDecision_TOS, &b_B_Hlt1LumiDecision_TOS);
   fChain->SetBranchAddress("B_Hlt1LumiMidBeamCrossingDecision_Dec", &B_Hlt1LumiMidBeamCrossingDecision_Dec, &b_B_Hlt1LumiMidBeamCrossingDecision_Dec);
   fChain->SetBranchAddress("B_Hlt1LumiMidBeamCrossingDecision_TIS", &B_Hlt1LumiMidBeamCrossingDecision_TIS, &b_B_Hlt1LumiMidBeamCrossingDecision_TIS);
   fChain->SetBranchAddress("B_Hlt1LumiMidBeamCrossingDecision_TOS", &B_Hlt1LumiMidBeamCrossingDecision_TOS, &b_B_Hlt1LumiMidBeamCrossingDecision_TOS);
   fChain->SetBranchAddress("B_Hlt1MBNoBiasDecision_Dec", &B_Hlt1MBNoBiasDecision_Dec, &b_B_Hlt1MBNoBiasDecision_Dec);
   fChain->SetBranchAddress("B_Hlt1MBNoBiasDecision_TIS", &B_Hlt1MBNoBiasDecision_TIS, &b_B_Hlt1MBNoBiasDecision_TIS);
   fChain->SetBranchAddress("B_Hlt1MBNoBiasDecision_TOS", &B_Hlt1MBNoBiasDecision_TOS, &b_B_Hlt1MBNoBiasDecision_TOS);
   fChain->SetBranchAddress("B_Hlt1CharmCalibrationNoBiasDecision_Dec", &B_Hlt1CharmCalibrationNoBiasDecision_Dec, &b_B_Hlt1CharmCalibrationNoBiasDecision_Dec);
   fChain->SetBranchAddress("B_Hlt1CharmCalibrationNoBiasDecision_TIS", &B_Hlt1CharmCalibrationNoBiasDecision_TIS, &b_B_Hlt1CharmCalibrationNoBiasDecision_TIS);
   fChain->SetBranchAddress("B_Hlt1CharmCalibrationNoBiasDecision_TOS", &B_Hlt1CharmCalibrationNoBiasDecision_TOS, &b_B_Hlt1CharmCalibrationNoBiasDecision_TOS);
   fChain->SetBranchAddress("B_Hlt1MBMicroBiasVeloDecision_Dec", &B_Hlt1MBMicroBiasVeloDecision_Dec, &b_B_Hlt1MBMicroBiasVeloDecision_Dec);
   fChain->SetBranchAddress("B_Hlt1MBMicroBiasVeloDecision_TIS", &B_Hlt1MBMicroBiasVeloDecision_TIS, &b_B_Hlt1MBMicroBiasVeloDecision_TIS);
   fChain->SetBranchAddress("B_Hlt1MBMicroBiasVeloDecision_TOS", &B_Hlt1MBMicroBiasVeloDecision_TOS, &b_B_Hlt1MBMicroBiasVeloDecision_TOS);
   fChain->SetBranchAddress("B_Hlt1MBMicroBiasTStationDecision_Dec", &B_Hlt1MBMicroBiasTStationDecision_Dec, &b_B_Hlt1MBMicroBiasTStationDecision_Dec);
   fChain->SetBranchAddress("B_Hlt1MBMicroBiasTStationDecision_TIS", &B_Hlt1MBMicroBiasTStationDecision_TIS, &b_B_Hlt1MBMicroBiasTStationDecision_TIS);
   fChain->SetBranchAddress("B_Hlt1MBMicroBiasTStationDecision_TOS", &B_Hlt1MBMicroBiasTStationDecision_TOS, &b_B_Hlt1MBMicroBiasTStationDecision_TOS);
   fChain->SetBranchAddress("B_Hlt1L0AnyDecision_Dec", &B_Hlt1L0AnyDecision_Dec, &b_B_Hlt1L0AnyDecision_Dec);
   fChain->SetBranchAddress("B_Hlt1L0AnyDecision_TIS", &B_Hlt1L0AnyDecision_TIS, &b_B_Hlt1L0AnyDecision_TIS);
   fChain->SetBranchAddress("B_Hlt1L0AnyDecision_TOS", &B_Hlt1L0AnyDecision_TOS, &b_B_Hlt1L0AnyDecision_TOS);
   fChain->SetBranchAddress("B_Hlt1L0AnyNoSPDDecision_Dec", &B_Hlt1L0AnyNoSPDDecision_Dec, &b_B_Hlt1L0AnyNoSPDDecision_Dec);
   fChain->SetBranchAddress("B_Hlt1L0AnyNoSPDDecision_TIS", &B_Hlt1L0AnyNoSPDDecision_TIS, &b_B_Hlt1L0AnyNoSPDDecision_TIS);
   fChain->SetBranchAddress("B_Hlt1L0AnyNoSPDDecision_TOS", &B_Hlt1L0AnyNoSPDDecision_TOS, &b_B_Hlt1L0AnyNoSPDDecision_TOS);
   fChain->SetBranchAddress("B_Hlt1L0HighSumETJetDecision_Dec", &B_Hlt1L0HighSumETJetDecision_Dec, &b_B_Hlt1L0HighSumETJetDecision_Dec);
   fChain->SetBranchAddress("B_Hlt1L0HighSumETJetDecision_TIS", &B_Hlt1L0HighSumETJetDecision_TIS, &b_B_Hlt1L0HighSumETJetDecision_TIS);
   fChain->SetBranchAddress("B_Hlt1L0HighSumETJetDecision_TOS", &B_Hlt1L0HighSumETJetDecision_TOS, &b_B_Hlt1L0HighSumETJetDecision_TOS);
   fChain->SetBranchAddress("B_Hlt1NoPVPassThroughDecision_Dec", &B_Hlt1NoPVPassThroughDecision_Dec, &b_B_Hlt1NoPVPassThroughDecision_Dec);
   fChain->SetBranchAddress("B_Hlt1NoPVPassThroughDecision_TIS", &B_Hlt1NoPVPassThroughDecision_TIS, &b_B_Hlt1NoPVPassThroughDecision_TIS);
   fChain->SetBranchAddress("B_Hlt1NoPVPassThroughDecision_TOS", &B_Hlt1NoPVPassThroughDecision_TOS, &b_B_Hlt1NoPVPassThroughDecision_TOS);
   fChain->SetBranchAddress("B_Hlt1DiProtonDecision_Dec", &B_Hlt1DiProtonDecision_Dec, &b_B_Hlt1DiProtonDecision_Dec);
   fChain->SetBranchAddress("B_Hlt1DiProtonDecision_TIS", &B_Hlt1DiProtonDecision_TIS, &b_B_Hlt1DiProtonDecision_TIS);
   fChain->SetBranchAddress("B_Hlt1DiProtonDecision_TOS", &B_Hlt1DiProtonDecision_TOS, &b_B_Hlt1DiProtonDecision_TOS);
   fChain->SetBranchAddress("B_Hlt1DiProtonLowMultDecision_Dec", &B_Hlt1DiProtonLowMultDecision_Dec, &b_B_Hlt1DiProtonLowMultDecision_Dec);
   fChain->SetBranchAddress("B_Hlt1DiProtonLowMultDecision_TIS", &B_Hlt1DiProtonLowMultDecision_TIS, &b_B_Hlt1DiProtonLowMultDecision_TIS);
   fChain->SetBranchAddress("B_Hlt1DiProtonLowMultDecision_TOS", &B_Hlt1DiProtonLowMultDecision_TOS, &b_B_Hlt1DiProtonLowMultDecision_TOS);
   fChain->SetBranchAddress("B_Hlt1BeamGasNoBeamBeam1Decision_Dec", &B_Hlt1BeamGasNoBeamBeam1Decision_Dec, &b_B_Hlt1BeamGasNoBeamBeam1Decision_Dec);
   fChain->SetBranchAddress("B_Hlt1BeamGasNoBeamBeam1Decision_TIS", &B_Hlt1BeamGasNoBeamBeam1Decision_TIS, &b_B_Hlt1BeamGasNoBeamBeam1Decision_TIS);
   fChain->SetBranchAddress("B_Hlt1BeamGasNoBeamBeam1Decision_TOS", &B_Hlt1BeamGasNoBeamBeam1Decision_TOS, &b_B_Hlt1BeamGasNoBeamBeam1Decision_TOS);
   fChain->SetBranchAddress("B_Hlt1BeamGasNoBeamBeam2Decision_Dec", &B_Hlt1BeamGasNoBeamBeam2Decision_Dec, &b_B_Hlt1BeamGasNoBeamBeam2Decision_Dec);
   fChain->SetBranchAddress("B_Hlt1BeamGasNoBeamBeam2Decision_TIS", &B_Hlt1BeamGasNoBeamBeam2Decision_TIS, &b_B_Hlt1BeamGasNoBeamBeam2Decision_TIS);
   fChain->SetBranchAddress("B_Hlt1BeamGasNoBeamBeam2Decision_TOS", &B_Hlt1BeamGasNoBeamBeam2Decision_TOS, &b_B_Hlt1BeamGasNoBeamBeam2Decision_TOS);
   fChain->SetBranchAddress("B_Hlt1BeamGasBeam1Decision_Dec", &B_Hlt1BeamGasBeam1Decision_Dec, &b_B_Hlt1BeamGasBeam1Decision_Dec);
   fChain->SetBranchAddress("B_Hlt1BeamGasBeam1Decision_TIS", &B_Hlt1BeamGasBeam1Decision_TIS, &b_B_Hlt1BeamGasBeam1Decision_TIS);
   fChain->SetBranchAddress("B_Hlt1BeamGasBeam1Decision_TOS", &B_Hlt1BeamGasBeam1Decision_TOS, &b_B_Hlt1BeamGasBeam1Decision_TOS);
   fChain->SetBranchAddress("B_Hlt1BeamGasBeam2Decision_Dec", &B_Hlt1BeamGasBeam2Decision_Dec, &b_B_Hlt1BeamGasBeam2Decision_Dec);
   fChain->SetBranchAddress("B_Hlt1BeamGasBeam2Decision_TIS", &B_Hlt1BeamGasBeam2Decision_TIS, &b_B_Hlt1BeamGasBeam2Decision_TIS);
   fChain->SetBranchAddress("B_Hlt1BeamGasBeam2Decision_TOS", &B_Hlt1BeamGasBeam2Decision_TOS, &b_B_Hlt1BeamGasBeam2Decision_TOS);
   fChain->SetBranchAddress("B_Hlt1BeamGasCrossingEnhancedBeam1Decision_Dec", &B_Hlt1BeamGasCrossingEnhancedBeam1Decision_Dec, &b_B_Hlt1BeamGasCrossingEnhancedBeam1Decision_Dec);
   fChain->SetBranchAddress("B_Hlt1BeamGasCrossingEnhancedBeam1Decision_TIS", &B_Hlt1BeamGasCrossingEnhancedBeam1Decision_TIS, &b_B_Hlt1BeamGasCrossingEnhancedBeam1Decision_TIS);
   fChain->SetBranchAddress("B_Hlt1BeamGasCrossingEnhancedBeam1Decision_TOS", &B_Hlt1BeamGasCrossingEnhancedBeam1Decision_TOS, &b_B_Hlt1BeamGasCrossingEnhancedBeam1Decision_TOS);
   fChain->SetBranchAddress("B_Hlt1BeamGasCrossingEnhancedBeam2Decision_Dec", &B_Hlt1BeamGasCrossingEnhancedBeam2Decision_Dec, &b_B_Hlt1BeamGasCrossingEnhancedBeam2Decision_Dec);
   fChain->SetBranchAddress("B_Hlt1BeamGasCrossingEnhancedBeam2Decision_TIS", &B_Hlt1BeamGasCrossingEnhancedBeam2Decision_TIS, &b_B_Hlt1BeamGasCrossingEnhancedBeam2Decision_TIS);
   fChain->SetBranchAddress("B_Hlt1BeamGasCrossingEnhancedBeam2Decision_TOS", &B_Hlt1BeamGasCrossingEnhancedBeam2Decision_TOS, &b_B_Hlt1BeamGasCrossingEnhancedBeam2Decision_TOS);
   fChain->SetBranchAddress("B_Hlt1BeamGasCrossingForcedRecoDecision_Dec", &B_Hlt1BeamGasCrossingForcedRecoDecision_Dec, &b_B_Hlt1BeamGasCrossingForcedRecoDecision_Dec);
   fChain->SetBranchAddress("B_Hlt1BeamGasCrossingForcedRecoDecision_TIS", &B_Hlt1BeamGasCrossingForcedRecoDecision_TIS, &b_B_Hlt1BeamGasCrossingForcedRecoDecision_TIS);
   fChain->SetBranchAddress("B_Hlt1BeamGasCrossingForcedRecoDecision_TOS", &B_Hlt1BeamGasCrossingForcedRecoDecision_TOS, &b_B_Hlt1BeamGasCrossingForcedRecoDecision_TOS);
   fChain->SetBranchAddress("B_Hlt1BeamGasCrossingForcedRecoFullZDecision_Dec", &B_Hlt1BeamGasCrossingForcedRecoFullZDecision_Dec, &b_B_Hlt1BeamGasCrossingForcedRecoFullZDecision_Dec);
   fChain->SetBranchAddress("B_Hlt1BeamGasCrossingForcedRecoFullZDecision_TIS", &B_Hlt1BeamGasCrossingForcedRecoFullZDecision_TIS, &b_B_Hlt1BeamGasCrossingForcedRecoFullZDecision_TIS);
   fChain->SetBranchAddress("B_Hlt1BeamGasCrossingForcedRecoFullZDecision_TOS", &B_Hlt1BeamGasCrossingForcedRecoFullZDecision_TOS, &b_B_Hlt1BeamGasCrossingForcedRecoFullZDecision_TOS);
   fChain->SetBranchAddress("B_Hlt1BeamGasHighRhoVerticesDecision_Dec", &B_Hlt1BeamGasHighRhoVerticesDecision_Dec, &b_B_Hlt1BeamGasHighRhoVerticesDecision_Dec);
   fChain->SetBranchAddress("B_Hlt1BeamGasHighRhoVerticesDecision_TIS", &B_Hlt1BeamGasHighRhoVerticesDecision_TIS, &b_B_Hlt1BeamGasHighRhoVerticesDecision_TIS);
   fChain->SetBranchAddress("B_Hlt1BeamGasHighRhoVerticesDecision_TOS", &B_Hlt1BeamGasHighRhoVerticesDecision_TOS, &b_B_Hlt1BeamGasHighRhoVerticesDecision_TOS);
   fChain->SetBranchAddress("B_Hlt1ODINTechnicalDecision_Dec", &B_Hlt1ODINTechnicalDecision_Dec, &b_B_Hlt1ODINTechnicalDecision_Dec);
   fChain->SetBranchAddress("B_Hlt1ODINTechnicalDecision_TIS", &B_Hlt1ODINTechnicalDecision_TIS, &b_B_Hlt1ODINTechnicalDecision_TIS);
   fChain->SetBranchAddress("B_Hlt1ODINTechnicalDecision_TOS", &B_Hlt1ODINTechnicalDecision_TOS, &b_B_Hlt1ODINTechnicalDecision_TOS);
   fChain->SetBranchAddress("B_Hlt1Tell1ErrorDecision_Dec", &B_Hlt1Tell1ErrorDecision_Dec, &b_B_Hlt1Tell1ErrorDecision_Dec);
   fChain->SetBranchAddress("B_Hlt1Tell1ErrorDecision_TIS", &B_Hlt1Tell1ErrorDecision_TIS, &b_B_Hlt1Tell1ErrorDecision_TIS);
   fChain->SetBranchAddress("B_Hlt1Tell1ErrorDecision_TOS", &B_Hlt1Tell1ErrorDecision_TOS, &b_B_Hlt1Tell1ErrorDecision_TOS);
   fChain->SetBranchAddress("B_Hlt1VeloClosingMicroBiasDecision_Dec", &B_Hlt1VeloClosingMicroBiasDecision_Dec, &b_B_Hlt1VeloClosingMicroBiasDecision_Dec);
   fChain->SetBranchAddress("B_Hlt1VeloClosingMicroBiasDecision_TIS", &B_Hlt1VeloClosingMicroBiasDecision_TIS, &b_B_Hlt1VeloClosingMicroBiasDecision_TIS);
   fChain->SetBranchAddress("B_Hlt1VeloClosingMicroBiasDecision_TOS", &B_Hlt1VeloClosingMicroBiasDecision_TOS, &b_B_Hlt1VeloClosingMicroBiasDecision_TOS);
   fChain->SetBranchAddress("B_Hlt1VertexDisplVertexDecision_Dec", &B_Hlt1VertexDisplVertexDecision_Dec, &b_B_Hlt1VertexDisplVertexDecision_Dec);
   fChain->SetBranchAddress("B_Hlt1VertexDisplVertexDecision_TIS", &B_Hlt1VertexDisplVertexDecision_TIS, &b_B_Hlt1VertexDisplVertexDecision_TIS);
   fChain->SetBranchAddress("B_Hlt1VertexDisplVertexDecision_TOS", &B_Hlt1VertexDisplVertexDecision_TOS, &b_B_Hlt1VertexDisplVertexDecision_TOS);
   fChain->SetBranchAddress("B_Hlt1BeamGasCrossingParasiticDecision_Dec", &B_Hlt1BeamGasCrossingParasiticDecision_Dec, &b_B_Hlt1BeamGasCrossingParasiticDecision_Dec);
   fChain->SetBranchAddress("B_Hlt1BeamGasCrossingParasiticDecision_TIS", &B_Hlt1BeamGasCrossingParasiticDecision_TIS, &b_B_Hlt1BeamGasCrossingParasiticDecision_TIS);
   fChain->SetBranchAddress("B_Hlt1BeamGasCrossingParasiticDecision_TOS", &B_Hlt1BeamGasCrossingParasiticDecision_TOS, &b_B_Hlt1BeamGasCrossingParasiticDecision_TOS);
   fChain->SetBranchAddress("B_Hlt1ErrorEventDecision_Dec", &B_Hlt1ErrorEventDecision_Dec, &b_B_Hlt1ErrorEventDecision_Dec);
   fChain->SetBranchAddress("B_Hlt1ErrorEventDecision_TIS", &B_Hlt1ErrorEventDecision_TIS, &b_B_Hlt1ErrorEventDecision_TIS);
   fChain->SetBranchAddress("B_Hlt1ErrorEventDecision_TOS", &B_Hlt1ErrorEventDecision_TOS, &b_B_Hlt1ErrorEventDecision_TOS);
   fChain->SetBranchAddress("B_Hlt1GlobalDecision_Dec", &B_Hlt1GlobalDecision_Dec, &b_B_Hlt1GlobalDecision_Dec);
   fChain->SetBranchAddress("B_Hlt1GlobalDecision_TIS", &B_Hlt1GlobalDecision_TIS, &b_B_Hlt1GlobalDecision_TIS);
   fChain->SetBranchAddress("B_Hlt1GlobalDecision_TOS", &B_Hlt1GlobalDecision_TOS, &b_B_Hlt1GlobalDecision_TOS);
   fChain->SetBranchAddress("B_Hlt1TrackMuonNoSPDDecision_Dec", &B_Hlt1TrackMuonNoSPDDecision_Dec, &b_B_Hlt1TrackMuonNoSPDDecision_Dec);
   fChain->SetBranchAddress("B_Hlt1TrackMuonNoSPDDecision_TIS", &B_Hlt1TrackMuonNoSPDDecision_TIS, &b_B_Hlt1TrackMuonNoSPDDecision_TIS);
   fChain->SetBranchAddress("B_Hlt1TrackMuonNoSPDDecision_TOS", &B_Hlt1TrackMuonNoSPDDecision_TOS, &b_B_Hlt1TrackMuonNoSPDDecision_TOS);
   fChain->SetBranchAddress("B_Hlt1TrackMVADecision_Dec", &B_Hlt1TrackMVADecision_Dec, &b_B_Hlt1TrackMVADecision_Dec);
   fChain->SetBranchAddress("B_Hlt1TrackMVADecision_TIS", &B_Hlt1TrackMVADecision_TIS, &b_B_Hlt1TrackMVADecision_TIS);
   fChain->SetBranchAddress("B_Hlt1TrackMVADecision_TOS", &B_Hlt1TrackMVADecision_TOS, &b_B_Hlt1TrackMVADecision_TOS);
   fChain->SetBranchAddress("B_Hlt1TwoTrackMVADecision_Dec", &B_Hlt1TwoTrackMVADecision_Dec, &b_B_Hlt1TwoTrackMVADecision_Dec);
   fChain->SetBranchAddress("B_Hlt1TwoTrackMVADecision_TIS", &B_Hlt1TwoTrackMVADecision_TIS, &b_B_Hlt1TwoTrackMVADecision_TIS);
   fChain->SetBranchAddress("B_Hlt1TwoTrackMVADecision_TOS", &B_Hlt1TwoTrackMVADecision_TOS, &b_B_Hlt1TwoTrackMVADecision_TOS);
   fChain->SetBranchAddress("B_Hlt2SingleMuonNoSPDDecision_Dec", &B_Hlt2SingleMuonNoSPDDecision_Dec, &b_B_Hlt2SingleMuonNoSPDDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2SingleMuonNoSPDDecision_TIS", &B_Hlt2SingleMuonNoSPDDecision_TIS, &b_B_Hlt2SingleMuonNoSPDDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2SingleMuonNoSPDDecision_TOS", &B_Hlt2SingleMuonNoSPDDecision_TOS, &b_B_Hlt2SingleMuonNoSPDDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2SingleElectronTFLowPtDecision_Dec", &B_Hlt2SingleElectronTFLowPtDecision_Dec, &b_B_Hlt2SingleElectronTFLowPtDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2SingleElectronTFLowPtDecision_TIS", &B_Hlt2SingleElectronTFLowPtDecision_TIS, &b_B_Hlt2SingleElectronTFLowPtDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2SingleElectronTFLowPtDecision_TOS", &B_Hlt2SingleElectronTFLowPtDecision_TOS, &b_B_Hlt2SingleElectronTFLowPtDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2SingleElectronTFHighPtDecision_Dec", &B_Hlt2SingleElectronTFHighPtDecision_Dec, &b_B_Hlt2SingleElectronTFHighPtDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2SingleElectronTFHighPtDecision_TIS", &B_Hlt2SingleElectronTFHighPtDecision_TIS, &b_B_Hlt2SingleElectronTFHighPtDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2SingleElectronTFHighPtDecision_TOS", &B_Hlt2SingleElectronTFHighPtDecision_TOS, &b_B_Hlt2SingleElectronTFHighPtDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2DiElectronHighMassDecision_Dec", &B_Hlt2DiElectronHighMassDecision_Dec, &b_B_Hlt2DiElectronHighMassDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2DiElectronHighMassDecision_TIS", &B_Hlt2DiElectronHighMassDecision_TIS, &b_B_Hlt2DiElectronHighMassDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2DiElectronHighMassDecision_TOS", &B_Hlt2DiElectronHighMassDecision_TOS, &b_B_Hlt2DiElectronHighMassDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2DiElectronBDecision_Dec", &B_Hlt2DiElectronBDecision_Dec, &b_B_Hlt2DiElectronBDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2DiElectronBDecision_TIS", &B_Hlt2DiElectronBDecision_TIS, &b_B_Hlt2DiElectronBDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2DiElectronBDecision_TOS", &B_Hlt2DiElectronBDecision_TOS, &b_B_Hlt2DiElectronBDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2B2HHLTUnbiasedDecision_Dec", &B_Hlt2B2HHLTUnbiasedDecision_Dec, &b_B_Hlt2B2HHLTUnbiasedDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2B2HHLTUnbiasedDecision_TIS", &B_Hlt2B2HHLTUnbiasedDecision_TIS, &b_B_Hlt2B2HHLTUnbiasedDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2B2HHLTUnbiasedDecision_TOS", &B_Hlt2B2HHLTUnbiasedDecision_TOS, &b_B_Hlt2B2HHLTUnbiasedDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2Topo2BodySimpleDecision_Dec", &B_Hlt2Topo2BodySimpleDecision_Dec, &b_B_Hlt2Topo2BodySimpleDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2Topo2BodySimpleDecision_TIS", &B_Hlt2Topo2BodySimpleDecision_TIS, &b_B_Hlt2Topo2BodySimpleDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2Topo2BodySimpleDecision_TOS", &B_Hlt2Topo2BodySimpleDecision_TOS, &b_B_Hlt2Topo2BodySimpleDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2Topo3BodySimpleDecision_Dec", &B_Hlt2Topo3BodySimpleDecision_Dec, &b_B_Hlt2Topo3BodySimpleDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2Topo3BodySimpleDecision_TIS", &B_Hlt2Topo3BodySimpleDecision_TIS, &b_B_Hlt2Topo3BodySimpleDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2Topo3BodySimpleDecision_TOS", &B_Hlt2Topo3BodySimpleDecision_TOS, &b_B_Hlt2Topo3BodySimpleDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2Topo4BodySimpleDecision_Dec", &B_Hlt2Topo4BodySimpleDecision_Dec, &b_B_Hlt2Topo4BodySimpleDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2Topo4BodySimpleDecision_TIS", &B_Hlt2Topo4BodySimpleDecision_TIS, &b_B_Hlt2Topo4BodySimpleDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2Topo4BodySimpleDecision_TOS", &B_Hlt2Topo4BodySimpleDecision_TOS, &b_B_Hlt2Topo4BodySimpleDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2Topo2BodyBBDTDecision_Dec", &B_Hlt2Topo2BodyBBDTDecision_Dec, &b_B_Hlt2Topo2BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2Topo2BodyBBDTDecision_TIS", &B_Hlt2Topo2BodyBBDTDecision_TIS, &b_B_Hlt2Topo2BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2Topo2BodyBBDTDecision_TOS", &B_Hlt2Topo2BodyBBDTDecision_TOS, &b_B_Hlt2Topo2BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2Topo3BodyBBDTDecision_Dec", &B_Hlt2Topo3BodyBBDTDecision_Dec, &b_B_Hlt2Topo3BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2Topo3BodyBBDTDecision_TIS", &B_Hlt2Topo3BodyBBDTDecision_TIS, &b_B_Hlt2Topo3BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2Topo3BodyBBDTDecision_TOS", &B_Hlt2Topo3BodyBBDTDecision_TOS, &b_B_Hlt2Topo3BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2Topo4BodyBBDTDecision_Dec", &B_Hlt2Topo4BodyBBDTDecision_Dec, &b_B_Hlt2Topo4BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2Topo4BodyBBDTDecision_TIS", &B_Hlt2Topo4BodyBBDTDecision_TIS, &b_B_Hlt2Topo4BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2Topo4BodyBBDTDecision_TOS", &B_Hlt2Topo4BodyBBDTDecision_TOS, &b_B_Hlt2Topo4BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2TopoMu2BodyBBDTDecision_Dec", &B_Hlt2TopoMu2BodyBBDTDecision_Dec, &b_B_Hlt2TopoMu2BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2TopoMu2BodyBBDTDecision_TIS", &B_Hlt2TopoMu2BodyBBDTDecision_TIS, &b_B_Hlt2TopoMu2BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2TopoMu2BodyBBDTDecision_TOS", &B_Hlt2TopoMu2BodyBBDTDecision_TOS, &b_B_Hlt2TopoMu2BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2TopoMu3BodyBBDTDecision_Dec", &B_Hlt2TopoMu3BodyBBDTDecision_Dec, &b_B_Hlt2TopoMu3BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2TopoMu3BodyBBDTDecision_TIS", &B_Hlt2TopoMu3BodyBBDTDecision_TIS, &b_B_Hlt2TopoMu3BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2TopoMu3BodyBBDTDecision_TOS", &B_Hlt2TopoMu3BodyBBDTDecision_TOS, &b_B_Hlt2TopoMu3BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2TopoMu4BodyBBDTDecision_Dec", &B_Hlt2TopoMu4BodyBBDTDecision_Dec, &b_B_Hlt2TopoMu4BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2TopoMu4BodyBBDTDecision_TIS", &B_Hlt2TopoMu4BodyBBDTDecision_TIS, &b_B_Hlt2TopoMu4BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2TopoMu4BodyBBDTDecision_TOS", &B_Hlt2TopoMu4BodyBBDTDecision_TOS, &b_B_Hlt2TopoMu4BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2TopoE2BodyBBDTDecision_Dec", &B_Hlt2TopoE2BodyBBDTDecision_Dec, &b_B_Hlt2TopoE2BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2TopoE2BodyBBDTDecision_TIS", &B_Hlt2TopoE2BodyBBDTDecision_TIS, &b_B_Hlt2TopoE2BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2TopoE2BodyBBDTDecision_TOS", &B_Hlt2TopoE2BodyBBDTDecision_TOS, &b_B_Hlt2TopoE2BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2TopoE3BodyBBDTDecision_Dec", &B_Hlt2TopoE3BodyBBDTDecision_Dec, &b_B_Hlt2TopoE3BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2TopoE3BodyBBDTDecision_TIS", &B_Hlt2TopoE3BodyBBDTDecision_TIS, &b_B_Hlt2TopoE3BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2TopoE3BodyBBDTDecision_TOS", &B_Hlt2TopoE3BodyBBDTDecision_TOS, &b_B_Hlt2TopoE3BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2TopoE4BodyBBDTDecision_Dec", &B_Hlt2TopoE4BodyBBDTDecision_Dec, &b_B_Hlt2TopoE4BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2TopoE4BodyBBDTDecision_TIS", &B_Hlt2TopoE4BodyBBDTDecision_TIS, &b_B_Hlt2TopoE4BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2TopoE4BodyBBDTDecision_TOS", &B_Hlt2TopoE4BodyBBDTDecision_TOS, &b_B_Hlt2TopoE4BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2IncPhiDecision_Dec", &B_Hlt2IncPhiDecision_Dec, &b_B_Hlt2IncPhiDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2IncPhiDecision_TIS", &B_Hlt2IncPhiDecision_TIS, &b_B_Hlt2IncPhiDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2IncPhiDecision_TOS", &B_Hlt2IncPhiDecision_TOS, &b_B_Hlt2IncPhiDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2IncPhiSidebandsDecision_Dec", &B_Hlt2IncPhiSidebandsDecision_Dec, &b_B_Hlt2IncPhiSidebandsDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2IncPhiSidebandsDecision_TIS", &B_Hlt2IncPhiSidebandsDecision_TIS, &b_B_Hlt2IncPhiSidebandsDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2IncPhiSidebandsDecision_TOS", &B_Hlt2IncPhiSidebandsDecision_TOS, &b_B_Hlt2IncPhiSidebandsDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2MuonFromHLT1Decision_Dec", &B_Hlt2MuonFromHLT1Decision_Dec, &b_B_Hlt2MuonFromHLT1Decision_Dec);
   fChain->SetBranchAddress("B_Hlt2MuonFromHLT1Decision_TIS", &B_Hlt2MuonFromHLT1Decision_TIS, &b_B_Hlt2MuonFromHLT1Decision_TIS);
   fChain->SetBranchAddress("B_Hlt2MuonFromHLT1Decision_TOS", &B_Hlt2MuonFromHLT1Decision_TOS, &b_B_Hlt2MuonFromHLT1Decision_TOS);
   fChain->SetBranchAddress("B_Hlt2SingleMuonDecision_Dec", &B_Hlt2SingleMuonDecision_Dec, &b_B_Hlt2SingleMuonDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2SingleMuonDecision_TIS", &B_Hlt2SingleMuonDecision_TIS, &b_B_Hlt2SingleMuonDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2SingleMuonDecision_TOS", &B_Hlt2SingleMuonDecision_TOS, &b_B_Hlt2SingleMuonDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2SingleMuonHighPTDecision_Dec", &B_Hlt2SingleMuonHighPTDecision_Dec, &b_B_Hlt2SingleMuonHighPTDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2SingleMuonHighPTDecision_TIS", &B_Hlt2SingleMuonHighPTDecision_TIS, &b_B_Hlt2SingleMuonHighPTDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2SingleMuonHighPTDecision_TOS", &B_Hlt2SingleMuonHighPTDecision_TOS, &b_B_Hlt2SingleMuonHighPTDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2SingleMuonLowPTDecision_Dec", &B_Hlt2SingleMuonLowPTDecision_Dec, &b_B_Hlt2SingleMuonLowPTDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2SingleMuonLowPTDecision_TIS", &B_Hlt2SingleMuonLowPTDecision_TIS, &b_B_Hlt2SingleMuonLowPTDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2SingleMuonLowPTDecision_TOS", &B_Hlt2SingleMuonLowPTDecision_TOS, &b_B_Hlt2SingleMuonLowPTDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2DiMuonDecision_Dec", &B_Hlt2DiMuonDecision_Dec, &b_B_Hlt2DiMuonDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2DiMuonDecision_TIS", &B_Hlt2DiMuonDecision_TIS, &b_B_Hlt2DiMuonDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2DiMuonDecision_TOS", &B_Hlt2DiMuonDecision_TOS, &b_B_Hlt2DiMuonDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2DiMuonLowMassDecision_Dec", &B_Hlt2DiMuonLowMassDecision_Dec, &b_B_Hlt2DiMuonLowMassDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2DiMuonLowMassDecision_TIS", &B_Hlt2DiMuonLowMassDecision_TIS, &b_B_Hlt2DiMuonLowMassDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2DiMuonLowMassDecision_TOS", &B_Hlt2DiMuonLowMassDecision_TOS, &b_B_Hlt2DiMuonLowMassDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2DiMuonJPsiDecision_Dec", &B_Hlt2DiMuonJPsiDecision_Dec, &b_B_Hlt2DiMuonJPsiDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2DiMuonJPsiDecision_TIS", &B_Hlt2DiMuonJPsiDecision_TIS, &b_B_Hlt2DiMuonJPsiDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2DiMuonJPsiDecision_TOS", &B_Hlt2DiMuonJPsiDecision_TOS, &b_B_Hlt2DiMuonJPsiDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2DiMuonJPsiHighPTDecision_Dec", &B_Hlt2DiMuonJPsiHighPTDecision_Dec, &b_B_Hlt2DiMuonJPsiHighPTDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2DiMuonJPsiHighPTDecision_TIS", &B_Hlt2DiMuonJPsiHighPTDecision_TIS, &b_B_Hlt2DiMuonJPsiHighPTDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2DiMuonJPsiHighPTDecision_TOS", &B_Hlt2DiMuonJPsiHighPTDecision_TOS, &b_B_Hlt2DiMuonJPsiHighPTDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2DiMuonPsi2SDecision_Dec", &B_Hlt2DiMuonPsi2SDecision_Dec, &b_B_Hlt2DiMuonPsi2SDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2DiMuonPsi2SDecision_TIS", &B_Hlt2DiMuonPsi2SDecision_TIS, &b_B_Hlt2DiMuonPsi2SDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2DiMuonPsi2SDecision_TOS", &B_Hlt2DiMuonPsi2SDecision_TOS, &b_B_Hlt2DiMuonPsi2SDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2DiMuonBDecision_Dec", &B_Hlt2DiMuonBDecision_Dec, &b_B_Hlt2DiMuonBDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2DiMuonBDecision_TIS", &B_Hlt2DiMuonBDecision_TIS, &b_B_Hlt2DiMuonBDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2DiMuonBDecision_TOS", &B_Hlt2DiMuonBDecision_TOS, &b_B_Hlt2DiMuonBDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2DiMuonZDecision_Dec", &B_Hlt2DiMuonZDecision_Dec, &b_B_Hlt2DiMuonZDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2DiMuonZDecision_TIS", &B_Hlt2DiMuonZDecision_TIS, &b_B_Hlt2DiMuonZDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2DiMuonZDecision_TOS", &B_Hlt2DiMuonZDecision_TOS, &b_B_Hlt2DiMuonZDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2DiMuonDY1Decision_Dec", &B_Hlt2DiMuonDY1Decision_Dec, &b_B_Hlt2DiMuonDY1Decision_Dec);
   fChain->SetBranchAddress("B_Hlt2DiMuonDY1Decision_TIS", &B_Hlt2DiMuonDY1Decision_TIS, &b_B_Hlt2DiMuonDY1Decision_TIS);
   fChain->SetBranchAddress("B_Hlt2DiMuonDY1Decision_TOS", &B_Hlt2DiMuonDY1Decision_TOS, &b_B_Hlt2DiMuonDY1Decision_TOS);
   fChain->SetBranchAddress("B_Hlt2DiMuonDY2Decision_Dec", &B_Hlt2DiMuonDY2Decision_Dec, &b_B_Hlt2DiMuonDY2Decision_Dec);
   fChain->SetBranchAddress("B_Hlt2DiMuonDY2Decision_TIS", &B_Hlt2DiMuonDY2Decision_TIS, &b_B_Hlt2DiMuonDY2Decision_TIS);
   fChain->SetBranchAddress("B_Hlt2DiMuonDY2Decision_TOS", &B_Hlt2DiMuonDY2Decision_TOS, &b_B_Hlt2DiMuonDY2Decision_TOS);
   fChain->SetBranchAddress("B_Hlt2DiMuonDY3Decision_Dec", &B_Hlt2DiMuonDY3Decision_Dec, &b_B_Hlt2DiMuonDY3Decision_Dec);
   fChain->SetBranchAddress("B_Hlt2DiMuonDY3Decision_TIS", &B_Hlt2DiMuonDY3Decision_TIS, &b_B_Hlt2DiMuonDY3Decision_TIS);
   fChain->SetBranchAddress("B_Hlt2DiMuonDY3Decision_TOS", &B_Hlt2DiMuonDY3Decision_TOS, &b_B_Hlt2DiMuonDY3Decision_TOS);
   fChain->SetBranchAddress("B_Hlt2DiMuonDY4Decision_Dec", &B_Hlt2DiMuonDY4Decision_Dec, &b_B_Hlt2DiMuonDY4Decision_Dec);
   fChain->SetBranchAddress("B_Hlt2DiMuonDY4Decision_TIS", &B_Hlt2DiMuonDY4Decision_TIS, &b_B_Hlt2DiMuonDY4Decision_TIS);
   fChain->SetBranchAddress("B_Hlt2DiMuonDY4Decision_TOS", &B_Hlt2DiMuonDY4Decision_TOS, &b_B_Hlt2DiMuonDY4Decision_TOS);
   fChain->SetBranchAddress("B_Hlt2DiMuonDetachedDecision_Dec", &B_Hlt2DiMuonDetachedDecision_Dec, &b_B_Hlt2DiMuonDetachedDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2DiMuonDetachedDecision_TIS", &B_Hlt2DiMuonDetachedDecision_TIS, &b_B_Hlt2DiMuonDetachedDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2DiMuonDetachedDecision_TOS", &B_Hlt2DiMuonDetachedDecision_TOS, &b_B_Hlt2DiMuonDetachedDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2DiMuonDetachedHeavyDecision_Dec", &B_Hlt2DiMuonDetachedHeavyDecision_Dec, &b_B_Hlt2DiMuonDetachedHeavyDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2DiMuonDetachedHeavyDecision_TIS", &B_Hlt2DiMuonDetachedHeavyDecision_TIS, &b_B_Hlt2DiMuonDetachedHeavyDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2DiMuonDetachedHeavyDecision_TOS", &B_Hlt2DiMuonDetachedHeavyDecision_TOS, &b_B_Hlt2DiMuonDetachedHeavyDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2DiMuonDetachedJPsiDecision_Dec", &B_Hlt2DiMuonDetachedJPsiDecision_Dec, &b_B_Hlt2DiMuonDetachedJPsiDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2DiMuonDetachedJPsiDecision_TIS", &B_Hlt2DiMuonDetachedJPsiDecision_TIS, &b_B_Hlt2DiMuonDetachedJPsiDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2DiMuonDetachedJPsiDecision_TOS", &B_Hlt2DiMuonDetachedJPsiDecision_TOS, &b_B_Hlt2DiMuonDetachedJPsiDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2DiMuonNoPVDecision_Dec", &B_Hlt2DiMuonNoPVDecision_Dec, &b_B_Hlt2DiMuonNoPVDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2DiMuonNoPVDecision_TIS", &B_Hlt2DiMuonNoPVDecision_TIS, &b_B_Hlt2DiMuonNoPVDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2DiMuonNoPVDecision_TOS", &B_Hlt2DiMuonNoPVDecision_TOS, &b_B_Hlt2DiMuonNoPVDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2TriMuonDetachedDecision_Dec", &B_Hlt2TriMuonDetachedDecision_Dec, &b_B_Hlt2TriMuonDetachedDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2TriMuonDetachedDecision_TIS", &B_Hlt2TriMuonDetachedDecision_TIS, &b_B_Hlt2TriMuonDetachedDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2TriMuonDetachedDecision_TOS", &B_Hlt2TriMuonDetachedDecision_TOS, &b_B_Hlt2TriMuonDetachedDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2TriMuonTauDecision_Dec", &B_Hlt2TriMuonTauDecision_Dec, &b_B_Hlt2TriMuonTauDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2TriMuonTauDecision_TIS", &B_Hlt2TriMuonTauDecision_TIS, &b_B_Hlt2TriMuonTauDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2TriMuonTauDecision_TOS", &B_Hlt2TriMuonTauDecision_TOS, &b_B_Hlt2TriMuonTauDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2Topo2BodyDecision_Dec", &B_Hlt2Topo2BodyDecision_Dec, &b_B_Hlt2Topo2BodyDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2Topo2BodyDecision_TIS", &B_Hlt2Topo2BodyDecision_TIS, &b_B_Hlt2Topo2BodyDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2Topo2BodyDecision_TOS", &B_Hlt2Topo2BodyDecision_TOS, &b_B_Hlt2Topo2BodyDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2Topo3BodyDecision_Dec", &B_Hlt2Topo3BodyDecision_Dec, &b_B_Hlt2Topo3BodyDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2Topo3BodyDecision_TIS", &B_Hlt2Topo3BodyDecision_TIS, &b_B_Hlt2Topo3BodyDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2Topo3BodyDecision_TOS", &B_Hlt2Topo3BodyDecision_TOS, &b_B_Hlt2Topo3BodyDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2Topo4BodyDecision_Dec", &B_Hlt2Topo4BodyDecision_Dec, &b_B_Hlt2Topo4BodyDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2Topo4BodyDecision_TIS", &B_Hlt2Topo4BodyDecision_TIS, &b_B_Hlt2Topo4BodyDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2Topo4BodyDecision_TOS", &B_Hlt2Topo4BodyDecision_TOS, &b_B_Hlt2Topo4BodyDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2TopoMu2BodyDecision_Dec", &B_Hlt2TopoMu2BodyDecision_Dec, &b_B_Hlt2TopoMu2BodyDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2TopoMu2BodyDecision_TIS", &B_Hlt2TopoMu2BodyDecision_TIS, &b_B_Hlt2TopoMu2BodyDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2TopoMu2BodyDecision_TOS", &B_Hlt2TopoMu2BodyDecision_TOS, &b_B_Hlt2TopoMu2BodyDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2TopoMu3BodyDecision_Dec", &B_Hlt2TopoMu3BodyDecision_Dec, &b_B_Hlt2TopoMu3BodyDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2TopoMu3BodyDecision_TIS", &B_Hlt2TopoMu3BodyDecision_TIS, &b_B_Hlt2TopoMu3BodyDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2TopoMu3BodyDecision_TOS", &B_Hlt2TopoMu3BodyDecision_TOS, &b_B_Hlt2TopoMu3BodyDecision_TOS);
   fChain->SetBranchAddress("B_Hlt2TopoMu4BodyDecision_Dec", &B_Hlt2TopoMu4BodyDecision_Dec, &b_B_Hlt2TopoMu4BodyDecision_Dec);
   fChain->SetBranchAddress("B_Hlt2TopoMu4BodyDecision_TIS", &B_Hlt2TopoMu4BodyDecision_TIS, &b_B_Hlt2TopoMu4BodyDecision_TIS);
   fChain->SetBranchAddress("B_Hlt2TopoMu4BodyDecision_TOS", &B_Hlt2TopoMu4BodyDecision_TOS, &b_B_Hlt2TopoMu4BodyDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_LOKI_ENERGY", &J_psi_1S_LOKI_ENERGY, &b_J_psi_1S_LOKI_ENERGY);
   fChain->SetBranchAddress("J_psi_1S_LOKI_ETA", &J_psi_1S_LOKI_ETA, &b_J_psi_1S_LOKI_ETA);
   fChain->SetBranchAddress("J_psi_1S_LOKI_PHI", &J_psi_1S_LOKI_PHI, &b_J_psi_1S_LOKI_PHI);
   fChain->SetBranchAddress("J_psi_1S_MINIP", &J_psi_1S_MINIP, &b_J_psi_1S_MINIP);
   fChain->SetBranchAddress("J_psi_1S_MINIPCHI2", &J_psi_1S_MINIPCHI2, &b_J_psi_1S_MINIPCHI2);
   fChain->SetBranchAddress("J_psi_1S_MINIPNEXTBEST", &J_psi_1S_MINIPNEXTBEST, &b_J_psi_1S_MINIPNEXTBEST);
   fChain->SetBranchAddress("J_psi_1S_MINIPCHI2NEXTBEST", &J_psi_1S_MINIPCHI2NEXTBEST, &b_J_psi_1S_MINIPCHI2NEXTBEST);
   fChain->SetBranchAddress("J_psi_1S_AllIP", J_psi_1S_AllIP, &b_J_psi_1S_AllIP);
   fChain->SetBranchAddress("J_psi_1S_AllIPchi2", J_psi_1S_AllIPchi2, &b_J_psi_1S_AllIPchi2);
   fChain->SetBranchAddress("J_psi_1S_AllDIRA", J_psi_1S_AllDIRA, &b_J_psi_1S_AllDIRA);
   fChain->SetBranchAddress("J_psi_1S_ENDVERTEX_X", &J_psi_1S_ENDVERTEX_X, &b_J_psi_1S_ENDVERTEX_X);
   fChain->SetBranchAddress("J_psi_1S_ENDVERTEX_Y", &J_psi_1S_ENDVERTEX_Y, &b_J_psi_1S_ENDVERTEX_Y);
   fChain->SetBranchAddress("J_psi_1S_ENDVERTEX_Z", &J_psi_1S_ENDVERTEX_Z, &b_J_psi_1S_ENDVERTEX_Z);
   fChain->SetBranchAddress("J_psi_1S_ENDVERTEX_XERR", &J_psi_1S_ENDVERTEX_XERR, &b_J_psi_1S_ENDVERTEX_XERR);
   fChain->SetBranchAddress("J_psi_1S_ENDVERTEX_YERR", &J_psi_1S_ENDVERTEX_YERR, &b_J_psi_1S_ENDVERTEX_YERR);
   fChain->SetBranchAddress("J_psi_1S_ENDVERTEX_ZERR", &J_psi_1S_ENDVERTEX_ZERR, &b_J_psi_1S_ENDVERTEX_ZERR);
   fChain->SetBranchAddress("J_psi_1S_ENDVERTEX_CHI2", &J_psi_1S_ENDVERTEX_CHI2, &b_J_psi_1S_ENDVERTEX_CHI2);
   fChain->SetBranchAddress("J_psi_1S_ENDVERTEX_NDOF", &J_psi_1S_ENDVERTEX_NDOF, &b_J_psi_1S_ENDVERTEX_NDOF);
   fChain->SetBranchAddress("J_psi_1S_ENDVERTEX_COV_", J_psi_1S_ENDVERTEX_COV_, &b_J_psi_1S_ENDVERTEX_COV_);
   fChain->SetBranchAddress("J_psi_1S_OWNPV_X", &J_psi_1S_OWNPV_X, &b_J_psi_1S_OWNPV_X);
   fChain->SetBranchAddress("J_psi_1S_OWNPV_Y", &J_psi_1S_OWNPV_Y, &b_J_psi_1S_OWNPV_Y);
   fChain->SetBranchAddress("J_psi_1S_OWNPV_Z", &J_psi_1S_OWNPV_Z, &b_J_psi_1S_OWNPV_Z);
   fChain->SetBranchAddress("J_psi_1S_OWNPV_XERR", &J_psi_1S_OWNPV_XERR, &b_J_psi_1S_OWNPV_XERR);
   fChain->SetBranchAddress("J_psi_1S_OWNPV_YERR", &J_psi_1S_OWNPV_YERR, &b_J_psi_1S_OWNPV_YERR);
   fChain->SetBranchAddress("J_psi_1S_OWNPV_ZERR", &J_psi_1S_OWNPV_ZERR, &b_J_psi_1S_OWNPV_ZERR);
   fChain->SetBranchAddress("J_psi_1S_OWNPV_CHI2", &J_psi_1S_OWNPV_CHI2, &b_J_psi_1S_OWNPV_CHI2);
   fChain->SetBranchAddress("J_psi_1S_OWNPV_NDOF", &J_psi_1S_OWNPV_NDOF, &b_J_psi_1S_OWNPV_NDOF);
   fChain->SetBranchAddress("J_psi_1S_OWNPV_COV_", J_psi_1S_OWNPV_COV_, &b_J_psi_1S_OWNPV_COV_);
   fChain->SetBranchAddress("J_psi_1S_IP_OWNPV", &J_psi_1S_IP_OWNPV, &b_J_psi_1S_IP_OWNPV);
   fChain->SetBranchAddress("J_psi_1S_IPCHI2_OWNPV", &J_psi_1S_IPCHI2_OWNPV, &b_J_psi_1S_IPCHI2_OWNPV);
   fChain->SetBranchAddress("J_psi_1S_FD_OWNPV", &J_psi_1S_FD_OWNPV, &b_J_psi_1S_FD_OWNPV);
   fChain->SetBranchAddress("J_psi_1S_FDCHI2_OWNPV", &J_psi_1S_FDCHI2_OWNPV, &b_J_psi_1S_FDCHI2_OWNPV);
   fChain->SetBranchAddress("J_psi_1S_DIRA_OWNPV", &J_psi_1S_DIRA_OWNPV, &b_J_psi_1S_DIRA_OWNPV);
   fChain->SetBranchAddress("J_psi_1S_TOPPV_X", &J_psi_1S_TOPPV_X, &b_J_psi_1S_TOPPV_X);
   fChain->SetBranchAddress("J_psi_1S_TOPPV_Y", &J_psi_1S_TOPPV_Y, &b_J_psi_1S_TOPPV_Y);
   fChain->SetBranchAddress("J_psi_1S_TOPPV_Z", &J_psi_1S_TOPPV_Z, &b_J_psi_1S_TOPPV_Z);
   fChain->SetBranchAddress("J_psi_1S_TOPPV_XERR", &J_psi_1S_TOPPV_XERR, &b_J_psi_1S_TOPPV_XERR);
   fChain->SetBranchAddress("J_psi_1S_TOPPV_YERR", &J_psi_1S_TOPPV_YERR, &b_J_psi_1S_TOPPV_YERR);
   fChain->SetBranchAddress("J_psi_1S_TOPPV_ZERR", &J_psi_1S_TOPPV_ZERR, &b_J_psi_1S_TOPPV_ZERR);
   fChain->SetBranchAddress("J_psi_1S_TOPPV_CHI2", &J_psi_1S_TOPPV_CHI2, &b_J_psi_1S_TOPPV_CHI2);
   fChain->SetBranchAddress("J_psi_1S_TOPPV_NDOF", &J_psi_1S_TOPPV_NDOF, &b_J_psi_1S_TOPPV_NDOF);
   fChain->SetBranchAddress("J_psi_1S_TOPPV_COV_", J_psi_1S_TOPPV_COV_, &b_J_psi_1S_TOPPV_COV_);
   fChain->SetBranchAddress("J_psi_1S_IP_TOPPV", &J_psi_1S_IP_TOPPV, &b_J_psi_1S_IP_TOPPV);
   fChain->SetBranchAddress("J_psi_1S_IPCHI2_TOPPV", &J_psi_1S_IPCHI2_TOPPV, &b_J_psi_1S_IPCHI2_TOPPV);
   fChain->SetBranchAddress("J_psi_1S_FD_TOPPV", &J_psi_1S_FD_TOPPV, &b_J_psi_1S_FD_TOPPV);
   fChain->SetBranchAddress("J_psi_1S_FDCHI2_TOPPV", &J_psi_1S_FDCHI2_TOPPV, &b_J_psi_1S_FDCHI2_TOPPV);
   fChain->SetBranchAddress("J_psi_1S_DIRA_TOPPV", &J_psi_1S_DIRA_TOPPV, &b_J_psi_1S_DIRA_TOPPV);
   fChain->SetBranchAddress("J_psi_1S_ORIVX_X", &J_psi_1S_ORIVX_X, &b_J_psi_1S_ORIVX_X);
   fChain->SetBranchAddress("J_psi_1S_ORIVX_Y", &J_psi_1S_ORIVX_Y, &b_J_psi_1S_ORIVX_Y);
   fChain->SetBranchAddress("J_psi_1S_ORIVX_Z", &J_psi_1S_ORIVX_Z, &b_J_psi_1S_ORIVX_Z);
   fChain->SetBranchAddress("J_psi_1S_ORIVX_XERR", &J_psi_1S_ORIVX_XERR, &b_J_psi_1S_ORIVX_XERR);
   fChain->SetBranchAddress("J_psi_1S_ORIVX_YERR", &J_psi_1S_ORIVX_YERR, &b_J_psi_1S_ORIVX_YERR);
   fChain->SetBranchAddress("J_psi_1S_ORIVX_ZERR", &J_psi_1S_ORIVX_ZERR, &b_J_psi_1S_ORIVX_ZERR);
   fChain->SetBranchAddress("J_psi_1S_ORIVX_CHI2", &J_psi_1S_ORIVX_CHI2, &b_J_psi_1S_ORIVX_CHI2);
   fChain->SetBranchAddress("J_psi_1S_ORIVX_NDOF", &J_psi_1S_ORIVX_NDOF, &b_J_psi_1S_ORIVX_NDOF);
   fChain->SetBranchAddress("J_psi_1S_ORIVX_COV_", J_psi_1S_ORIVX_COV_, &b_J_psi_1S_ORIVX_COV_);
   fChain->SetBranchAddress("J_psi_1S_IP_ORIVX", &J_psi_1S_IP_ORIVX, &b_J_psi_1S_IP_ORIVX);
   fChain->SetBranchAddress("J_psi_1S_IPCHI2_ORIVX", &J_psi_1S_IPCHI2_ORIVX, &b_J_psi_1S_IPCHI2_ORIVX);
   fChain->SetBranchAddress("J_psi_1S_FD_ORIVX", &J_psi_1S_FD_ORIVX, &b_J_psi_1S_FD_ORIVX);
   fChain->SetBranchAddress("J_psi_1S_FDCHI2_ORIVX", &J_psi_1S_FDCHI2_ORIVX, &b_J_psi_1S_FDCHI2_ORIVX);
   fChain->SetBranchAddress("J_psi_1S_DIRA_ORIVX", &J_psi_1S_DIRA_ORIVX, &b_J_psi_1S_DIRA_ORIVX);
   fChain->SetBranchAddress("J_psi_1S_P", &J_psi_1S_P, &b_J_psi_1S_P);
   fChain->SetBranchAddress("J_psi_1S_PT", &J_psi_1S_PT, &b_J_psi_1S_PT);
   fChain->SetBranchAddress("J_psi_1S_PE", &J_psi_1S_PE, &b_J_psi_1S_PE);
   fChain->SetBranchAddress("J_psi_1S_PX", &J_psi_1S_PX, &b_J_psi_1S_PX);
   fChain->SetBranchAddress("J_psi_1S_PY", &J_psi_1S_PY, &b_J_psi_1S_PY);
   fChain->SetBranchAddress("J_psi_1S_PZ", &J_psi_1S_PZ, &b_J_psi_1S_PZ);
   fChain->SetBranchAddress("J_psi_1S_MM", &J_psi_1S_MM, &b_J_psi_1S_MM);
   fChain->SetBranchAddress("J_psi_1S_MMERR", &J_psi_1S_MMERR, &b_J_psi_1S_MMERR);
   fChain->SetBranchAddress("J_psi_1S_M", &J_psi_1S_M, &b_J_psi_1S_M);
   fChain->SetBranchAddress("J_psi_1S_ID", &J_psi_1S_ID, &b_J_psi_1S_ID);
   fChain->SetBranchAddress("J_psi_1S_TAU", &J_psi_1S_TAU, &b_J_psi_1S_TAU);
   fChain->SetBranchAddress("J_psi_1S_TAUERR", &J_psi_1S_TAUERR, &b_J_psi_1S_TAUERR);
   fChain->SetBranchAddress("J_psi_1S_TAUCHI2", &J_psi_1S_TAUCHI2, &b_J_psi_1S_TAUCHI2);
   fChain->SetBranchAddress("J_psi_1S_X", &J_psi_1S_X, &b_J_psi_1S_X);
   fChain->SetBranchAddress("J_psi_1S_Y", &J_psi_1S_Y, &b_J_psi_1S_Y);
   fChain->SetBranchAddress("J_psi_1S_L0Global_Dec", &J_psi_1S_L0Global_Dec, &b_J_psi_1S_L0Global_Dec);
   fChain->SetBranchAddress("J_psi_1S_L0Global_TIS", &J_psi_1S_L0Global_TIS, &b_J_psi_1S_L0Global_TIS);
   fChain->SetBranchAddress("J_psi_1S_L0Global_TOS", &J_psi_1S_L0Global_TOS, &b_J_psi_1S_L0Global_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1Global_Dec", &J_psi_1S_Hlt1Global_Dec, &b_J_psi_1S_Hlt1Global_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt1Global_TIS", &J_psi_1S_Hlt1Global_TIS, &b_J_psi_1S_Hlt1Global_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1Global_TOS", &J_psi_1S_Hlt1Global_TOS, &b_J_psi_1S_Hlt1Global_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1Phys_Dec", &J_psi_1S_Hlt1Phys_Dec, &b_J_psi_1S_Hlt1Phys_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt1Phys_TIS", &J_psi_1S_Hlt1Phys_TIS, &b_J_psi_1S_Hlt1Phys_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1Phys_TOS", &J_psi_1S_Hlt1Phys_TOS, &b_J_psi_1S_Hlt1Phys_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2Global_Dec", &J_psi_1S_Hlt2Global_Dec, &b_J_psi_1S_Hlt2Global_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt2Global_TIS", &J_psi_1S_Hlt2Global_TIS, &b_J_psi_1S_Hlt2Global_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2Global_TOS", &J_psi_1S_Hlt2Global_TOS, &b_J_psi_1S_Hlt2Global_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2Phys_Dec", &J_psi_1S_Hlt2Phys_Dec, &b_J_psi_1S_Hlt2Phys_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt2Phys_TIS", &J_psi_1S_Hlt2Phys_TIS, &b_J_psi_1S_Hlt2Phys_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2Phys_TOS", &J_psi_1S_Hlt2Phys_TOS, &b_J_psi_1S_Hlt2Phys_TOS);
   fChain->SetBranchAddress("J_psi_1S_L0PhysicsDecision_Dec", &J_psi_1S_L0PhysicsDecision_Dec, &b_J_psi_1S_L0PhysicsDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_L0PhysicsDecision_TIS", &J_psi_1S_L0PhysicsDecision_TIS, &b_J_psi_1S_L0PhysicsDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_L0PhysicsDecision_TOS", &J_psi_1S_L0PhysicsDecision_TOS, &b_J_psi_1S_L0PhysicsDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_L0MuonDecision_Dec", &J_psi_1S_L0MuonDecision_Dec, &b_J_psi_1S_L0MuonDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_L0MuonDecision_TIS", &J_psi_1S_L0MuonDecision_TIS, &b_J_psi_1S_L0MuonDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_L0MuonDecision_TOS", &J_psi_1S_L0MuonDecision_TOS, &b_J_psi_1S_L0MuonDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_L0DiMuonDecision_Dec", &J_psi_1S_L0DiMuonDecision_Dec, &b_J_psi_1S_L0DiMuonDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_L0DiMuonDecision_TIS", &J_psi_1S_L0DiMuonDecision_TIS, &b_J_psi_1S_L0DiMuonDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_L0DiMuonDecision_TOS", &J_psi_1S_L0DiMuonDecision_TOS, &b_J_psi_1S_L0DiMuonDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_L0MuonHighDecision_Dec", &J_psi_1S_L0MuonHighDecision_Dec, &b_J_psi_1S_L0MuonHighDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_L0MuonHighDecision_TIS", &J_psi_1S_L0MuonHighDecision_TIS, &b_J_psi_1S_L0MuonHighDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_L0MuonHighDecision_TOS", &J_psi_1S_L0MuonHighDecision_TOS, &b_J_psi_1S_L0MuonHighDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_L0HadronDecision_Dec", &J_psi_1S_L0HadronDecision_Dec, &b_J_psi_1S_L0HadronDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_L0HadronDecision_TIS", &J_psi_1S_L0HadronDecision_TIS, &b_J_psi_1S_L0HadronDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_L0HadronDecision_TOS", &J_psi_1S_L0HadronDecision_TOS, &b_J_psi_1S_L0HadronDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_L0ElectronDecision_Dec", &J_psi_1S_L0ElectronDecision_Dec, &b_J_psi_1S_L0ElectronDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_L0ElectronDecision_TIS", &J_psi_1S_L0ElectronDecision_TIS, &b_J_psi_1S_L0ElectronDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_L0ElectronDecision_TOS", &J_psi_1S_L0ElectronDecision_TOS, &b_J_psi_1S_L0ElectronDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_L0PhotonDecision_Dec", &J_psi_1S_L0PhotonDecision_Dec, &b_J_psi_1S_L0PhotonDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_L0PhotonDecision_TIS", &J_psi_1S_L0PhotonDecision_TIS, &b_J_psi_1S_L0PhotonDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_L0PhotonDecision_TOS", &J_psi_1S_L0PhotonDecision_TOS, &b_J_psi_1S_L0PhotonDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_L0MuonNoSPDDecision_Dec", &J_psi_1S_L0MuonNoSPDDecision_Dec, &b_J_psi_1S_L0MuonNoSPDDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_L0MuonNoSPDDecision_TIS", &J_psi_1S_L0MuonNoSPDDecision_TIS, &b_J_psi_1S_L0MuonNoSPDDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_L0MuonNoSPDDecision_TOS", &J_psi_1S_L0MuonNoSPDDecision_TOS, &b_J_psi_1S_L0MuonNoSPDDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1DiMuonHighMassDecision_Dec", &J_psi_1S_Hlt1DiMuonHighMassDecision_Dec, &b_J_psi_1S_Hlt1DiMuonHighMassDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt1DiMuonHighMassDecision_TIS", &J_psi_1S_Hlt1DiMuonHighMassDecision_TIS, &b_J_psi_1S_Hlt1DiMuonHighMassDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1DiMuonHighMassDecision_TOS", &J_psi_1S_Hlt1DiMuonHighMassDecision_TOS, &b_J_psi_1S_Hlt1DiMuonHighMassDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1DiMuonLowMassDecision_Dec", &J_psi_1S_Hlt1DiMuonLowMassDecision_Dec, &b_J_psi_1S_Hlt1DiMuonLowMassDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt1DiMuonLowMassDecision_TIS", &J_psi_1S_Hlt1DiMuonLowMassDecision_TIS, &b_J_psi_1S_Hlt1DiMuonLowMassDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1DiMuonLowMassDecision_TOS", &J_psi_1S_Hlt1DiMuonLowMassDecision_TOS, &b_J_psi_1S_Hlt1DiMuonLowMassDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1SingleMuonNoIPDecision_Dec", &J_psi_1S_Hlt1SingleMuonNoIPDecision_Dec, &b_J_psi_1S_Hlt1SingleMuonNoIPDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt1SingleMuonNoIPDecision_TIS", &J_psi_1S_Hlt1SingleMuonNoIPDecision_TIS, &b_J_psi_1S_Hlt1SingleMuonNoIPDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1SingleMuonNoIPDecision_TOS", &J_psi_1S_Hlt1SingleMuonNoIPDecision_TOS, &b_J_psi_1S_Hlt1SingleMuonNoIPDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1SingleMuonHighPTDecision_Dec", &J_psi_1S_Hlt1SingleMuonHighPTDecision_Dec, &b_J_psi_1S_Hlt1SingleMuonHighPTDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt1SingleMuonHighPTDecision_TIS", &J_psi_1S_Hlt1SingleMuonHighPTDecision_TIS, &b_J_psi_1S_Hlt1SingleMuonHighPTDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1SingleMuonHighPTDecision_TOS", &J_psi_1S_Hlt1SingleMuonHighPTDecision_TOS, &b_J_psi_1S_Hlt1SingleMuonHighPTDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1SingleElectronNoIPDecision_Dec", &J_psi_1S_Hlt1SingleElectronNoIPDecision_Dec, &b_J_psi_1S_Hlt1SingleElectronNoIPDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt1SingleElectronNoIPDecision_TIS", &J_psi_1S_Hlt1SingleElectronNoIPDecision_TIS, &b_J_psi_1S_Hlt1SingleElectronNoIPDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1SingleElectronNoIPDecision_TOS", &J_psi_1S_Hlt1SingleElectronNoIPDecision_TOS, &b_J_psi_1S_Hlt1SingleElectronNoIPDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1TrackAllL0Decision_Dec", &J_psi_1S_Hlt1TrackAllL0Decision_Dec, &b_J_psi_1S_Hlt1TrackAllL0Decision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt1TrackAllL0Decision_TIS", &J_psi_1S_Hlt1TrackAllL0Decision_TIS, &b_J_psi_1S_Hlt1TrackAllL0Decision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1TrackAllL0Decision_TOS", &J_psi_1S_Hlt1TrackAllL0Decision_TOS, &b_J_psi_1S_Hlt1TrackAllL0Decision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1TrackAllL0TightDecision_Dec", &J_psi_1S_Hlt1TrackAllL0TightDecision_Dec, &b_J_psi_1S_Hlt1TrackAllL0TightDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt1TrackAllL0TightDecision_TIS", &J_psi_1S_Hlt1TrackAllL0TightDecision_TIS, &b_J_psi_1S_Hlt1TrackAllL0TightDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1TrackAllL0TightDecision_TOS", &J_psi_1S_Hlt1TrackAllL0TightDecision_TOS, &b_J_psi_1S_Hlt1TrackAllL0TightDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1TrackMuonDecision_Dec", &J_psi_1S_Hlt1TrackMuonDecision_Dec, &b_J_psi_1S_Hlt1TrackMuonDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt1TrackMuonDecision_TIS", &J_psi_1S_Hlt1TrackMuonDecision_TIS, &b_J_psi_1S_Hlt1TrackMuonDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1TrackMuonDecision_TOS", &J_psi_1S_Hlt1TrackMuonDecision_TOS, &b_J_psi_1S_Hlt1TrackMuonDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1TrackPhotonDecision_Dec", &J_psi_1S_Hlt1TrackPhotonDecision_Dec, &b_J_psi_1S_Hlt1TrackPhotonDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt1TrackPhotonDecision_TIS", &J_psi_1S_Hlt1TrackPhotonDecision_TIS, &b_J_psi_1S_Hlt1TrackPhotonDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1TrackPhotonDecision_TOS", &J_psi_1S_Hlt1TrackPhotonDecision_TOS, &b_J_psi_1S_Hlt1TrackPhotonDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1TrackForwardPassThroughDecision_Dec", &J_psi_1S_Hlt1TrackForwardPassThroughDecision_Dec, &b_J_psi_1S_Hlt1TrackForwardPassThroughDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt1TrackForwardPassThroughDecision_TIS", &J_psi_1S_Hlt1TrackForwardPassThroughDecision_TIS, &b_J_psi_1S_Hlt1TrackForwardPassThroughDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1TrackForwardPassThroughDecision_TOS", &J_psi_1S_Hlt1TrackForwardPassThroughDecision_TOS, &b_J_psi_1S_Hlt1TrackForwardPassThroughDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1TrackForwardPassThroughLooseDecision_Dec", &J_psi_1S_Hlt1TrackForwardPassThroughLooseDecision_Dec, &b_J_psi_1S_Hlt1TrackForwardPassThroughLooseDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt1TrackForwardPassThroughLooseDecision_TIS", &J_psi_1S_Hlt1TrackForwardPassThroughLooseDecision_TIS, &b_J_psi_1S_Hlt1TrackForwardPassThroughLooseDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1TrackForwardPassThroughLooseDecision_TOS", &J_psi_1S_Hlt1TrackForwardPassThroughLooseDecision_TOS, &b_J_psi_1S_Hlt1TrackForwardPassThroughLooseDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1LumiDecision_Dec", &J_psi_1S_Hlt1LumiDecision_Dec, &b_J_psi_1S_Hlt1LumiDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt1LumiDecision_TIS", &J_psi_1S_Hlt1LumiDecision_TIS, &b_J_psi_1S_Hlt1LumiDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1LumiDecision_TOS", &J_psi_1S_Hlt1LumiDecision_TOS, &b_J_psi_1S_Hlt1LumiDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1LumiMidBeamCrossingDecision_Dec", &J_psi_1S_Hlt1LumiMidBeamCrossingDecision_Dec, &b_J_psi_1S_Hlt1LumiMidBeamCrossingDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt1LumiMidBeamCrossingDecision_TIS", &J_psi_1S_Hlt1LumiMidBeamCrossingDecision_TIS, &b_J_psi_1S_Hlt1LumiMidBeamCrossingDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1LumiMidBeamCrossingDecision_TOS", &J_psi_1S_Hlt1LumiMidBeamCrossingDecision_TOS, &b_J_psi_1S_Hlt1LumiMidBeamCrossingDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1MBNoBiasDecision_Dec", &J_psi_1S_Hlt1MBNoBiasDecision_Dec, &b_J_psi_1S_Hlt1MBNoBiasDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt1MBNoBiasDecision_TIS", &J_psi_1S_Hlt1MBNoBiasDecision_TIS, &b_J_psi_1S_Hlt1MBNoBiasDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1MBNoBiasDecision_TOS", &J_psi_1S_Hlt1MBNoBiasDecision_TOS, &b_J_psi_1S_Hlt1MBNoBiasDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1CharmCalibrationNoBiasDecision_Dec", &J_psi_1S_Hlt1CharmCalibrationNoBiasDecision_Dec, &b_J_psi_1S_Hlt1CharmCalibrationNoBiasDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt1CharmCalibrationNoBiasDecision_TIS", &J_psi_1S_Hlt1CharmCalibrationNoBiasDecision_TIS, &b_J_psi_1S_Hlt1CharmCalibrationNoBiasDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1CharmCalibrationNoBiasDecision_TOS", &J_psi_1S_Hlt1CharmCalibrationNoBiasDecision_TOS, &b_J_psi_1S_Hlt1CharmCalibrationNoBiasDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1MBMicroBiasVeloDecision_Dec", &J_psi_1S_Hlt1MBMicroBiasVeloDecision_Dec, &b_J_psi_1S_Hlt1MBMicroBiasVeloDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt1MBMicroBiasVeloDecision_TIS", &J_psi_1S_Hlt1MBMicroBiasVeloDecision_TIS, &b_J_psi_1S_Hlt1MBMicroBiasVeloDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1MBMicroBiasVeloDecision_TOS", &J_psi_1S_Hlt1MBMicroBiasVeloDecision_TOS, &b_J_psi_1S_Hlt1MBMicroBiasVeloDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1MBMicroBiasTStationDecision_Dec", &J_psi_1S_Hlt1MBMicroBiasTStationDecision_Dec, &b_J_psi_1S_Hlt1MBMicroBiasTStationDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt1MBMicroBiasTStationDecision_TIS", &J_psi_1S_Hlt1MBMicroBiasTStationDecision_TIS, &b_J_psi_1S_Hlt1MBMicroBiasTStationDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1MBMicroBiasTStationDecision_TOS", &J_psi_1S_Hlt1MBMicroBiasTStationDecision_TOS, &b_J_psi_1S_Hlt1MBMicroBiasTStationDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1L0AnyDecision_Dec", &J_psi_1S_Hlt1L0AnyDecision_Dec, &b_J_psi_1S_Hlt1L0AnyDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt1L0AnyDecision_TIS", &J_psi_1S_Hlt1L0AnyDecision_TIS, &b_J_psi_1S_Hlt1L0AnyDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1L0AnyDecision_TOS", &J_psi_1S_Hlt1L0AnyDecision_TOS, &b_J_psi_1S_Hlt1L0AnyDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1L0AnyNoSPDDecision_Dec", &J_psi_1S_Hlt1L0AnyNoSPDDecision_Dec, &b_J_psi_1S_Hlt1L0AnyNoSPDDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt1L0AnyNoSPDDecision_TIS", &J_psi_1S_Hlt1L0AnyNoSPDDecision_TIS, &b_J_psi_1S_Hlt1L0AnyNoSPDDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1L0AnyNoSPDDecision_TOS", &J_psi_1S_Hlt1L0AnyNoSPDDecision_TOS, &b_J_psi_1S_Hlt1L0AnyNoSPDDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1L0HighSumETJetDecision_Dec", &J_psi_1S_Hlt1L0HighSumETJetDecision_Dec, &b_J_psi_1S_Hlt1L0HighSumETJetDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt1L0HighSumETJetDecision_TIS", &J_psi_1S_Hlt1L0HighSumETJetDecision_TIS, &b_J_psi_1S_Hlt1L0HighSumETJetDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1L0HighSumETJetDecision_TOS", &J_psi_1S_Hlt1L0HighSumETJetDecision_TOS, &b_J_psi_1S_Hlt1L0HighSumETJetDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1NoPVPassThroughDecision_Dec", &J_psi_1S_Hlt1NoPVPassThroughDecision_Dec, &b_J_psi_1S_Hlt1NoPVPassThroughDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt1NoPVPassThroughDecision_TIS", &J_psi_1S_Hlt1NoPVPassThroughDecision_TIS, &b_J_psi_1S_Hlt1NoPVPassThroughDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1NoPVPassThroughDecision_TOS", &J_psi_1S_Hlt1NoPVPassThroughDecision_TOS, &b_J_psi_1S_Hlt1NoPVPassThroughDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1DiProtonDecision_Dec", &J_psi_1S_Hlt1DiProtonDecision_Dec, &b_J_psi_1S_Hlt1DiProtonDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt1DiProtonDecision_TIS", &J_psi_1S_Hlt1DiProtonDecision_TIS, &b_J_psi_1S_Hlt1DiProtonDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1DiProtonDecision_TOS", &J_psi_1S_Hlt1DiProtonDecision_TOS, &b_J_psi_1S_Hlt1DiProtonDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1DiProtonLowMultDecision_Dec", &J_psi_1S_Hlt1DiProtonLowMultDecision_Dec, &b_J_psi_1S_Hlt1DiProtonLowMultDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt1DiProtonLowMultDecision_TIS", &J_psi_1S_Hlt1DiProtonLowMultDecision_TIS, &b_J_psi_1S_Hlt1DiProtonLowMultDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1DiProtonLowMultDecision_TOS", &J_psi_1S_Hlt1DiProtonLowMultDecision_TOS, &b_J_psi_1S_Hlt1DiProtonLowMultDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1BeamGasNoBeamBeam1Decision_Dec", &J_psi_1S_Hlt1BeamGasNoBeamBeam1Decision_Dec, &b_J_psi_1S_Hlt1BeamGasNoBeamBeam1Decision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt1BeamGasNoBeamBeam1Decision_TIS", &J_psi_1S_Hlt1BeamGasNoBeamBeam1Decision_TIS, &b_J_psi_1S_Hlt1BeamGasNoBeamBeam1Decision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1BeamGasNoBeamBeam1Decision_TOS", &J_psi_1S_Hlt1BeamGasNoBeamBeam1Decision_TOS, &b_J_psi_1S_Hlt1BeamGasNoBeamBeam1Decision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1BeamGasNoBeamBeam2Decision_Dec", &J_psi_1S_Hlt1BeamGasNoBeamBeam2Decision_Dec, &b_J_psi_1S_Hlt1BeamGasNoBeamBeam2Decision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt1BeamGasNoBeamBeam2Decision_TIS", &J_psi_1S_Hlt1BeamGasNoBeamBeam2Decision_TIS, &b_J_psi_1S_Hlt1BeamGasNoBeamBeam2Decision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1BeamGasNoBeamBeam2Decision_TOS", &J_psi_1S_Hlt1BeamGasNoBeamBeam2Decision_TOS, &b_J_psi_1S_Hlt1BeamGasNoBeamBeam2Decision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1BeamGasBeam1Decision_Dec", &J_psi_1S_Hlt1BeamGasBeam1Decision_Dec, &b_J_psi_1S_Hlt1BeamGasBeam1Decision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt1BeamGasBeam1Decision_TIS", &J_psi_1S_Hlt1BeamGasBeam1Decision_TIS, &b_J_psi_1S_Hlt1BeamGasBeam1Decision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1BeamGasBeam1Decision_TOS", &J_psi_1S_Hlt1BeamGasBeam1Decision_TOS, &b_J_psi_1S_Hlt1BeamGasBeam1Decision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1BeamGasBeam2Decision_Dec", &J_psi_1S_Hlt1BeamGasBeam2Decision_Dec, &b_J_psi_1S_Hlt1BeamGasBeam2Decision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt1BeamGasBeam2Decision_TIS", &J_psi_1S_Hlt1BeamGasBeam2Decision_TIS, &b_J_psi_1S_Hlt1BeamGasBeam2Decision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1BeamGasBeam2Decision_TOS", &J_psi_1S_Hlt1BeamGasBeam2Decision_TOS, &b_J_psi_1S_Hlt1BeamGasBeam2Decision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1BeamGasCrossingEnhancedBeam1Decision_Dec", &J_psi_1S_Hlt1BeamGasCrossingEnhancedBeam1Decision_Dec, &b_J_psi_1S_Hlt1BeamGasCrossingEnhancedBeam1Decision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt1BeamGasCrossingEnhancedBeam1Decision_TIS", &J_psi_1S_Hlt1BeamGasCrossingEnhancedBeam1Decision_TIS, &b_J_psi_1S_Hlt1BeamGasCrossingEnhancedBeam1Decision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1BeamGasCrossingEnhancedBeam1Decision_TOS", &J_psi_1S_Hlt1BeamGasCrossingEnhancedBeam1Decision_TOS, &b_J_psi_1S_Hlt1BeamGasCrossingEnhancedBeam1Decision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1BeamGasCrossingEnhancedBeam2Decision_Dec", &J_psi_1S_Hlt1BeamGasCrossingEnhancedBeam2Decision_Dec, &b_J_psi_1S_Hlt1BeamGasCrossingEnhancedBeam2Decision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt1BeamGasCrossingEnhancedBeam2Decision_TIS", &J_psi_1S_Hlt1BeamGasCrossingEnhancedBeam2Decision_TIS, &b_J_psi_1S_Hlt1BeamGasCrossingEnhancedBeam2Decision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1BeamGasCrossingEnhancedBeam2Decision_TOS", &J_psi_1S_Hlt1BeamGasCrossingEnhancedBeam2Decision_TOS, &b_J_psi_1S_Hlt1BeamGasCrossingEnhancedBeam2Decision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1BeamGasCrossingForcedRecoDecision_Dec", &J_psi_1S_Hlt1BeamGasCrossingForcedRecoDecision_Dec, &b_J_psi_1S_Hlt1BeamGasCrossingForcedRecoDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt1BeamGasCrossingForcedRecoDecision_TIS", &J_psi_1S_Hlt1BeamGasCrossingForcedRecoDecision_TIS, &b_J_psi_1S_Hlt1BeamGasCrossingForcedRecoDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1BeamGasCrossingForcedRecoDecision_TOS", &J_psi_1S_Hlt1BeamGasCrossingForcedRecoDecision_TOS, &b_J_psi_1S_Hlt1BeamGasCrossingForcedRecoDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1BeamGasCrossingForcedRecoFullZDecision_Dec", &J_psi_1S_Hlt1BeamGasCrossingForcedRecoFullZDecision_Dec, &b_J_psi_1S_Hlt1BeamGasCrossingForcedRecoFullZDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt1BeamGasCrossingForcedRecoFullZDecision_TIS", &J_psi_1S_Hlt1BeamGasCrossingForcedRecoFullZDecision_TIS, &b_J_psi_1S_Hlt1BeamGasCrossingForcedRecoFullZDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1BeamGasCrossingForcedRecoFullZDecision_TOS", &J_psi_1S_Hlt1BeamGasCrossingForcedRecoFullZDecision_TOS, &b_J_psi_1S_Hlt1BeamGasCrossingForcedRecoFullZDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1BeamGasHighRhoVerticesDecision_Dec", &J_psi_1S_Hlt1BeamGasHighRhoVerticesDecision_Dec, &b_J_psi_1S_Hlt1BeamGasHighRhoVerticesDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt1BeamGasHighRhoVerticesDecision_TIS", &J_psi_1S_Hlt1BeamGasHighRhoVerticesDecision_TIS, &b_J_psi_1S_Hlt1BeamGasHighRhoVerticesDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1BeamGasHighRhoVerticesDecision_TOS", &J_psi_1S_Hlt1BeamGasHighRhoVerticesDecision_TOS, &b_J_psi_1S_Hlt1BeamGasHighRhoVerticesDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1ODINTechnicalDecision_Dec", &J_psi_1S_Hlt1ODINTechnicalDecision_Dec, &b_J_psi_1S_Hlt1ODINTechnicalDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt1ODINTechnicalDecision_TIS", &J_psi_1S_Hlt1ODINTechnicalDecision_TIS, &b_J_psi_1S_Hlt1ODINTechnicalDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1ODINTechnicalDecision_TOS", &J_psi_1S_Hlt1ODINTechnicalDecision_TOS, &b_J_psi_1S_Hlt1ODINTechnicalDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1Tell1ErrorDecision_Dec", &J_psi_1S_Hlt1Tell1ErrorDecision_Dec, &b_J_psi_1S_Hlt1Tell1ErrorDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt1Tell1ErrorDecision_TIS", &J_psi_1S_Hlt1Tell1ErrorDecision_TIS, &b_J_psi_1S_Hlt1Tell1ErrorDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1Tell1ErrorDecision_TOS", &J_psi_1S_Hlt1Tell1ErrorDecision_TOS, &b_J_psi_1S_Hlt1Tell1ErrorDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1VeloClosingMicroBiasDecision_Dec", &J_psi_1S_Hlt1VeloClosingMicroBiasDecision_Dec, &b_J_psi_1S_Hlt1VeloClosingMicroBiasDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt1VeloClosingMicroBiasDecision_TIS", &J_psi_1S_Hlt1VeloClosingMicroBiasDecision_TIS, &b_J_psi_1S_Hlt1VeloClosingMicroBiasDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1VeloClosingMicroBiasDecision_TOS", &J_psi_1S_Hlt1VeloClosingMicroBiasDecision_TOS, &b_J_psi_1S_Hlt1VeloClosingMicroBiasDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1VertexDisplVertexDecision_Dec", &J_psi_1S_Hlt1VertexDisplVertexDecision_Dec, &b_J_psi_1S_Hlt1VertexDisplVertexDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt1VertexDisplVertexDecision_TIS", &J_psi_1S_Hlt1VertexDisplVertexDecision_TIS, &b_J_psi_1S_Hlt1VertexDisplVertexDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1VertexDisplVertexDecision_TOS", &J_psi_1S_Hlt1VertexDisplVertexDecision_TOS, &b_J_psi_1S_Hlt1VertexDisplVertexDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1BeamGasCrossingParasiticDecision_Dec", &J_psi_1S_Hlt1BeamGasCrossingParasiticDecision_Dec, &b_J_psi_1S_Hlt1BeamGasCrossingParasiticDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt1BeamGasCrossingParasiticDecision_TIS", &J_psi_1S_Hlt1BeamGasCrossingParasiticDecision_TIS, &b_J_psi_1S_Hlt1BeamGasCrossingParasiticDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1BeamGasCrossingParasiticDecision_TOS", &J_psi_1S_Hlt1BeamGasCrossingParasiticDecision_TOS, &b_J_psi_1S_Hlt1BeamGasCrossingParasiticDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1ErrorEventDecision_Dec", &J_psi_1S_Hlt1ErrorEventDecision_Dec, &b_J_psi_1S_Hlt1ErrorEventDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt1ErrorEventDecision_TIS", &J_psi_1S_Hlt1ErrorEventDecision_TIS, &b_J_psi_1S_Hlt1ErrorEventDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1ErrorEventDecision_TOS", &J_psi_1S_Hlt1ErrorEventDecision_TOS, &b_J_psi_1S_Hlt1ErrorEventDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1GlobalDecision_Dec", &J_psi_1S_Hlt1GlobalDecision_Dec, &b_J_psi_1S_Hlt1GlobalDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt1GlobalDecision_TIS", &J_psi_1S_Hlt1GlobalDecision_TIS, &b_J_psi_1S_Hlt1GlobalDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1GlobalDecision_TOS", &J_psi_1S_Hlt1GlobalDecision_TOS, &b_J_psi_1S_Hlt1GlobalDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1TrackMuonNoSPDDecision_Dec", &J_psi_1S_Hlt1TrackMuonNoSPDDecision_Dec, &b_J_psi_1S_Hlt1TrackMuonNoSPDDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt1TrackMuonNoSPDDecision_TIS", &J_psi_1S_Hlt1TrackMuonNoSPDDecision_TIS, &b_J_psi_1S_Hlt1TrackMuonNoSPDDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1TrackMuonNoSPDDecision_TOS", &J_psi_1S_Hlt1TrackMuonNoSPDDecision_TOS, &b_J_psi_1S_Hlt1TrackMuonNoSPDDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1TrackMVADecision_Dec", &J_psi_1S_Hlt1TrackMVADecision_Dec, &b_J_psi_1S_Hlt1TrackMVADecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt1TrackMVADecision_TIS", &J_psi_1S_Hlt1TrackMVADecision_TIS, &b_J_psi_1S_Hlt1TrackMVADecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1TrackMVADecision_TOS", &J_psi_1S_Hlt1TrackMVADecision_TOS, &b_J_psi_1S_Hlt1TrackMVADecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1TwoTrackMVADecision_Dec", &J_psi_1S_Hlt1TwoTrackMVADecision_Dec, &b_J_psi_1S_Hlt1TwoTrackMVADecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt1TwoTrackMVADecision_TIS", &J_psi_1S_Hlt1TwoTrackMVADecision_TIS, &b_J_psi_1S_Hlt1TwoTrackMVADecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt1TwoTrackMVADecision_TOS", &J_psi_1S_Hlt1TwoTrackMVADecision_TOS, &b_J_psi_1S_Hlt1TwoTrackMVADecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2SingleMuonNoSPDDecision_Dec", &J_psi_1S_Hlt2SingleMuonNoSPDDecision_Dec, &b_J_psi_1S_Hlt2SingleMuonNoSPDDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt2SingleMuonNoSPDDecision_TIS", &J_psi_1S_Hlt2SingleMuonNoSPDDecision_TIS, &b_J_psi_1S_Hlt2SingleMuonNoSPDDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2SingleMuonNoSPDDecision_TOS", &J_psi_1S_Hlt2SingleMuonNoSPDDecision_TOS, &b_J_psi_1S_Hlt2SingleMuonNoSPDDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2SingleElectronTFLowPtDecision_Dec", &J_psi_1S_Hlt2SingleElectronTFLowPtDecision_Dec, &b_J_psi_1S_Hlt2SingleElectronTFLowPtDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt2SingleElectronTFLowPtDecision_TIS", &J_psi_1S_Hlt2SingleElectronTFLowPtDecision_TIS, &b_J_psi_1S_Hlt2SingleElectronTFLowPtDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2SingleElectronTFLowPtDecision_TOS", &J_psi_1S_Hlt2SingleElectronTFLowPtDecision_TOS, &b_J_psi_1S_Hlt2SingleElectronTFLowPtDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2SingleElectronTFHighPtDecision_Dec", &J_psi_1S_Hlt2SingleElectronTFHighPtDecision_Dec, &b_J_psi_1S_Hlt2SingleElectronTFHighPtDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt2SingleElectronTFHighPtDecision_TIS", &J_psi_1S_Hlt2SingleElectronTFHighPtDecision_TIS, &b_J_psi_1S_Hlt2SingleElectronTFHighPtDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2SingleElectronTFHighPtDecision_TOS", &J_psi_1S_Hlt2SingleElectronTFHighPtDecision_TOS, &b_J_psi_1S_Hlt2SingleElectronTFHighPtDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2DiElectronHighMassDecision_Dec", &J_psi_1S_Hlt2DiElectronHighMassDecision_Dec, &b_J_psi_1S_Hlt2DiElectronHighMassDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt2DiElectronHighMassDecision_TIS", &J_psi_1S_Hlt2DiElectronHighMassDecision_TIS, &b_J_psi_1S_Hlt2DiElectronHighMassDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2DiElectronHighMassDecision_TOS", &J_psi_1S_Hlt2DiElectronHighMassDecision_TOS, &b_J_psi_1S_Hlt2DiElectronHighMassDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2DiElectronBDecision_Dec", &J_psi_1S_Hlt2DiElectronBDecision_Dec, &b_J_psi_1S_Hlt2DiElectronBDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt2DiElectronBDecision_TIS", &J_psi_1S_Hlt2DiElectronBDecision_TIS, &b_J_psi_1S_Hlt2DiElectronBDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2DiElectronBDecision_TOS", &J_psi_1S_Hlt2DiElectronBDecision_TOS, &b_J_psi_1S_Hlt2DiElectronBDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2B2HHLTUnbiasedDecision_Dec", &J_psi_1S_Hlt2B2HHLTUnbiasedDecision_Dec, &b_J_psi_1S_Hlt2B2HHLTUnbiasedDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt2B2HHLTUnbiasedDecision_TIS", &J_psi_1S_Hlt2B2HHLTUnbiasedDecision_TIS, &b_J_psi_1S_Hlt2B2HHLTUnbiasedDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2B2HHLTUnbiasedDecision_TOS", &J_psi_1S_Hlt2B2HHLTUnbiasedDecision_TOS, &b_J_psi_1S_Hlt2B2HHLTUnbiasedDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2Topo2BodySimpleDecision_Dec", &J_psi_1S_Hlt2Topo2BodySimpleDecision_Dec, &b_J_psi_1S_Hlt2Topo2BodySimpleDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt2Topo2BodySimpleDecision_TIS", &J_psi_1S_Hlt2Topo2BodySimpleDecision_TIS, &b_J_psi_1S_Hlt2Topo2BodySimpleDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2Topo2BodySimpleDecision_TOS", &J_psi_1S_Hlt2Topo2BodySimpleDecision_TOS, &b_J_psi_1S_Hlt2Topo2BodySimpleDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2Topo3BodySimpleDecision_Dec", &J_psi_1S_Hlt2Topo3BodySimpleDecision_Dec, &b_J_psi_1S_Hlt2Topo3BodySimpleDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt2Topo3BodySimpleDecision_TIS", &J_psi_1S_Hlt2Topo3BodySimpleDecision_TIS, &b_J_psi_1S_Hlt2Topo3BodySimpleDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2Topo3BodySimpleDecision_TOS", &J_psi_1S_Hlt2Topo3BodySimpleDecision_TOS, &b_J_psi_1S_Hlt2Topo3BodySimpleDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2Topo4BodySimpleDecision_Dec", &J_psi_1S_Hlt2Topo4BodySimpleDecision_Dec, &b_J_psi_1S_Hlt2Topo4BodySimpleDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt2Topo4BodySimpleDecision_TIS", &J_psi_1S_Hlt2Topo4BodySimpleDecision_TIS, &b_J_psi_1S_Hlt2Topo4BodySimpleDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2Topo4BodySimpleDecision_TOS", &J_psi_1S_Hlt2Topo4BodySimpleDecision_TOS, &b_J_psi_1S_Hlt2Topo4BodySimpleDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2Topo2BodyBBDTDecision_Dec", &J_psi_1S_Hlt2Topo2BodyBBDTDecision_Dec, &b_J_psi_1S_Hlt2Topo2BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt2Topo2BodyBBDTDecision_TIS", &J_psi_1S_Hlt2Topo2BodyBBDTDecision_TIS, &b_J_psi_1S_Hlt2Topo2BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2Topo2BodyBBDTDecision_TOS", &J_psi_1S_Hlt2Topo2BodyBBDTDecision_TOS, &b_J_psi_1S_Hlt2Topo2BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2Topo3BodyBBDTDecision_Dec", &J_psi_1S_Hlt2Topo3BodyBBDTDecision_Dec, &b_J_psi_1S_Hlt2Topo3BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt2Topo3BodyBBDTDecision_TIS", &J_psi_1S_Hlt2Topo3BodyBBDTDecision_TIS, &b_J_psi_1S_Hlt2Topo3BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2Topo3BodyBBDTDecision_TOS", &J_psi_1S_Hlt2Topo3BodyBBDTDecision_TOS, &b_J_psi_1S_Hlt2Topo3BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2Topo4BodyBBDTDecision_Dec", &J_psi_1S_Hlt2Topo4BodyBBDTDecision_Dec, &b_J_psi_1S_Hlt2Topo4BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt2Topo4BodyBBDTDecision_TIS", &J_psi_1S_Hlt2Topo4BodyBBDTDecision_TIS, &b_J_psi_1S_Hlt2Topo4BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2Topo4BodyBBDTDecision_TOS", &J_psi_1S_Hlt2Topo4BodyBBDTDecision_TOS, &b_J_psi_1S_Hlt2Topo4BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2TopoMu2BodyBBDTDecision_Dec", &J_psi_1S_Hlt2TopoMu2BodyBBDTDecision_Dec, &b_J_psi_1S_Hlt2TopoMu2BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt2TopoMu2BodyBBDTDecision_TIS", &J_psi_1S_Hlt2TopoMu2BodyBBDTDecision_TIS, &b_J_psi_1S_Hlt2TopoMu2BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2TopoMu2BodyBBDTDecision_TOS", &J_psi_1S_Hlt2TopoMu2BodyBBDTDecision_TOS, &b_J_psi_1S_Hlt2TopoMu2BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2TopoMu3BodyBBDTDecision_Dec", &J_psi_1S_Hlt2TopoMu3BodyBBDTDecision_Dec, &b_J_psi_1S_Hlt2TopoMu3BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt2TopoMu3BodyBBDTDecision_TIS", &J_psi_1S_Hlt2TopoMu3BodyBBDTDecision_TIS, &b_J_psi_1S_Hlt2TopoMu3BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2TopoMu3BodyBBDTDecision_TOS", &J_psi_1S_Hlt2TopoMu3BodyBBDTDecision_TOS, &b_J_psi_1S_Hlt2TopoMu3BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2TopoMu4BodyBBDTDecision_Dec", &J_psi_1S_Hlt2TopoMu4BodyBBDTDecision_Dec, &b_J_psi_1S_Hlt2TopoMu4BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt2TopoMu4BodyBBDTDecision_TIS", &J_psi_1S_Hlt2TopoMu4BodyBBDTDecision_TIS, &b_J_psi_1S_Hlt2TopoMu4BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2TopoMu4BodyBBDTDecision_TOS", &J_psi_1S_Hlt2TopoMu4BodyBBDTDecision_TOS, &b_J_psi_1S_Hlt2TopoMu4BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2TopoE2BodyBBDTDecision_Dec", &J_psi_1S_Hlt2TopoE2BodyBBDTDecision_Dec, &b_J_psi_1S_Hlt2TopoE2BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt2TopoE2BodyBBDTDecision_TIS", &J_psi_1S_Hlt2TopoE2BodyBBDTDecision_TIS, &b_J_psi_1S_Hlt2TopoE2BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2TopoE2BodyBBDTDecision_TOS", &J_psi_1S_Hlt2TopoE2BodyBBDTDecision_TOS, &b_J_psi_1S_Hlt2TopoE2BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2TopoE3BodyBBDTDecision_Dec", &J_psi_1S_Hlt2TopoE3BodyBBDTDecision_Dec, &b_J_psi_1S_Hlt2TopoE3BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt2TopoE3BodyBBDTDecision_TIS", &J_psi_1S_Hlt2TopoE3BodyBBDTDecision_TIS, &b_J_psi_1S_Hlt2TopoE3BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2TopoE3BodyBBDTDecision_TOS", &J_psi_1S_Hlt2TopoE3BodyBBDTDecision_TOS, &b_J_psi_1S_Hlt2TopoE3BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2TopoE4BodyBBDTDecision_Dec", &J_psi_1S_Hlt2TopoE4BodyBBDTDecision_Dec, &b_J_psi_1S_Hlt2TopoE4BodyBBDTDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt2TopoE4BodyBBDTDecision_TIS", &J_psi_1S_Hlt2TopoE4BodyBBDTDecision_TIS, &b_J_psi_1S_Hlt2TopoE4BodyBBDTDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2TopoE4BodyBBDTDecision_TOS", &J_psi_1S_Hlt2TopoE4BodyBBDTDecision_TOS, &b_J_psi_1S_Hlt2TopoE4BodyBBDTDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2IncPhiDecision_Dec", &J_psi_1S_Hlt2IncPhiDecision_Dec, &b_J_psi_1S_Hlt2IncPhiDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt2IncPhiDecision_TIS", &J_psi_1S_Hlt2IncPhiDecision_TIS, &b_J_psi_1S_Hlt2IncPhiDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2IncPhiDecision_TOS", &J_psi_1S_Hlt2IncPhiDecision_TOS, &b_J_psi_1S_Hlt2IncPhiDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2IncPhiSidebandsDecision_Dec", &J_psi_1S_Hlt2IncPhiSidebandsDecision_Dec, &b_J_psi_1S_Hlt2IncPhiSidebandsDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt2IncPhiSidebandsDecision_TIS", &J_psi_1S_Hlt2IncPhiSidebandsDecision_TIS, &b_J_psi_1S_Hlt2IncPhiSidebandsDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2IncPhiSidebandsDecision_TOS", &J_psi_1S_Hlt2IncPhiSidebandsDecision_TOS, &b_J_psi_1S_Hlt2IncPhiSidebandsDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2MuonFromHLT1Decision_Dec", &J_psi_1S_Hlt2MuonFromHLT1Decision_Dec, &b_J_psi_1S_Hlt2MuonFromHLT1Decision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt2MuonFromHLT1Decision_TIS", &J_psi_1S_Hlt2MuonFromHLT1Decision_TIS, &b_J_psi_1S_Hlt2MuonFromHLT1Decision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2MuonFromHLT1Decision_TOS", &J_psi_1S_Hlt2MuonFromHLT1Decision_TOS, &b_J_psi_1S_Hlt2MuonFromHLT1Decision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2SingleMuonDecision_Dec", &J_psi_1S_Hlt2SingleMuonDecision_Dec, &b_J_psi_1S_Hlt2SingleMuonDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt2SingleMuonDecision_TIS", &J_psi_1S_Hlt2SingleMuonDecision_TIS, &b_J_psi_1S_Hlt2SingleMuonDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2SingleMuonDecision_TOS", &J_psi_1S_Hlt2SingleMuonDecision_TOS, &b_J_psi_1S_Hlt2SingleMuonDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2SingleMuonHighPTDecision_Dec", &J_psi_1S_Hlt2SingleMuonHighPTDecision_Dec, &b_J_psi_1S_Hlt2SingleMuonHighPTDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt2SingleMuonHighPTDecision_TIS", &J_psi_1S_Hlt2SingleMuonHighPTDecision_TIS, &b_J_psi_1S_Hlt2SingleMuonHighPTDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2SingleMuonHighPTDecision_TOS", &J_psi_1S_Hlt2SingleMuonHighPTDecision_TOS, &b_J_psi_1S_Hlt2SingleMuonHighPTDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2SingleMuonLowPTDecision_Dec", &J_psi_1S_Hlt2SingleMuonLowPTDecision_Dec, &b_J_psi_1S_Hlt2SingleMuonLowPTDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt2SingleMuonLowPTDecision_TIS", &J_psi_1S_Hlt2SingleMuonLowPTDecision_TIS, &b_J_psi_1S_Hlt2SingleMuonLowPTDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2SingleMuonLowPTDecision_TOS", &J_psi_1S_Hlt2SingleMuonLowPTDecision_TOS, &b_J_psi_1S_Hlt2SingleMuonLowPTDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2DiMuonDecision_Dec", &J_psi_1S_Hlt2DiMuonDecision_Dec, &b_J_psi_1S_Hlt2DiMuonDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt2DiMuonDecision_TIS", &J_psi_1S_Hlt2DiMuonDecision_TIS, &b_J_psi_1S_Hlt2DiMuonDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2DiMuonDecision_TOS", &J_psi_1S_Hlt2DiMuonDecision_TOS, &b_J_psi_1S_Hlt2DiMuonDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2DiMuonLowMassDecision_Dec", &J_psi_1S_Hlt2DiMuonLowMassDecision_Dec, &b_J_psi_1S_Hlt2DiMuonLowMassDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt2DiMuonLowMassDecision_TIS", &J_psi_1S_Hlt2DiMuonLowMassDecision_TIS, &b_J_psi_1S_Hlt2DiMuonLowMassDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2DiMuonLowMassDecision_TOS", &J_psi_1S_Hlt2DiMuonLowMassDecision_TOS, &b_J_psi_1S_Hlt2DiMuonLowMassDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2DiMuonJPsiDecision_Dec", &J_psi_1S_Hlt2DiMuonJPsiDecision_Dec, &b_J_psi_1S_Hlt2DiMuonJPsiDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt2DiMuonJPsiDecision_TIS", &J_psi_1S_Hlt2DiMuonJPsiDecision_TIS, &b_J_psi_1S_Hlt2DiMuonJPsiDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2DiMuonJPsiDecision_TOS", &J_psi_1S_Hlt2DiMuonJPsiDecision_TOS, &b_J_psi_1S_Hlt2DiMuonJPsiDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2DiMuonJPsiHighPTDecision_Dec", &J_psi_1S_Hlt2DiMuonJPsiHighPTDecision_Dec, &b_J_psi_1S_Hlt2DiMuonJPsiHighPTDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt2DiMuonJPsiHighPTDecision_TIS", &J_psi_1S_Hlt2DiMuonJPsiHighPTDecision_TIS, &b_J_psi_1S_Hlt2DiMuonJPsiHighPTDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2DiMuonJPsiHighPTDecision_TOS", &J_psi_1S_Hlt2DiMuonJPsiHighPTDecision_TOS, &b_J_psi_1S_Hlt2DiMuonJPsiHighPTDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2DiMuonPsi2SDecision_Dec", &J_psi_1S_Hlt2DiMuonPsi2SDecision_Dec, &b_J_psi_1S_Hlt2DiMuonPsi2SDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt2DiMuonPsi2SDecision_TIS", &J_psi_1S_Hlt2DiMuonPsi2SDecision_TIS, &b_J_psi_1S_Hlt2DiMuonPsi2SDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2DiMuonPsi2SDecision_TOS", &J_psi_1S_Hlt2DiMuonPsi2SDecision_TOS, &b_J_psi_1S_Hlt2DiMuonPsi2SDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2DiMuonBDecision_Dec", &J_psi_1S_Hlt2DiMuonBDecision_Dec, &b_J_psi_1S_Hlt2DiMuonBDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt2DiMuonBDecision_TIS", &J_psi_1S_Hlt2DiMuonBDecision_TIS, &b_J_psi_1S_Hlt2DiMuonBDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2DiMuonBDecision_TOS", &J_psi_1S_Hlt2DiMuonBDecision_TOS, &b_J_psi_1S_Hlt2DiMuonBDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2DiMuonZDecision_Dec", &J_psi_1S_Hlt2DiMuonZDecision_Dec, &b_J_psi_1S_Hlt2DiMuonZDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt2DiMuonZDecision_TIS", &J_psi_1S_Hlt2DiMuonZDecision_TIS, &b_J_psi_1S_Hlt2DiMuonZDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2DiMuonZDecision_TOS", &J_psi_1S_Hlt2DiMuonZDecision_TOS, &b_J_psi_1S_Hlt2DiMuonZDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2DiMuonDY1Decision_Dec", &J_psi_1S_Hlt2DiMuonDY1Decision_Dec, &b_J_psi_1S_Hlt2DiMuonDY1Decision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt2DiMuonDY1Decision_TIS", &J_psi_1S_Hlt2DiMuonDY1Decision_TIS, &b_J_psi_1S_Hlt2DiMuonDY1Decision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2DiMuonDY1Decision_TOS", &J_psi_1S_Hlt2DiMuonDY1Decision_TOS, &b_J_psi_1S_Hlt2DiMuonDY1Decision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2DiMuonDY2Decision_Dec", &J_psi_1S_Hlt2DiMuonDY2Decision_Dec, &b_J_psi_1S_Hlt2DiMuonDY2Decision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt2DiMuonDY2Decision_TIS", &J_psi_1S_Hlt2DiMuonDY2Decision_TIS, &b_J_psi_1S_Hlt2DiMuonDY2Decision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2DiMuonDY2Decision_TOS", &J_psi_1S_Hlt2DiMuonDY2Decision_TOS, &b_J_psi_1S_Hlt2DiMuonDY2Decision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2DiMuonDY3Decision_Dec", &J_psi_1S_Hlt2DiMuonDY3Decision_Dec, &b_J_psi_1S_Hlt2DiMuonDY3Decision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt2DiMuonDY3Decision_TIS", &J_psi_1S_Hlt2DiMuonDY3Decision_TIS, &b_J_psi_1S_Hlt2DiMuonDY3Decision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2DiMuonDY3Decision_TOS", &J_psi_1S_Hlt2DiMuonDY3Decision_TOS, &b_J_psi_1S_Hlt2DiMuonDY3Decision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2DiMuonDY4Decision_Dec", &J_psi_1S_Hlt2DiMuonDY4Decision_Dec, &b_J_psi_1S_Hlt2DiMuonDY4Decision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt2DiMuonDY4Decision_TIS", &J_psi_1S_Hlt2DiMuonDY4Decision_TIS, &b_J_psi_1S_Hlt2DiMuonDY4Decision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2DiMuonDY4Decision_TOS", &J_psi_1S_Hlt2DiMuonDY4Decision_TOS, &b_J_psi_1S_Hlt2DiMuonDY4Decision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2DiMuonDetachedDecision_Dec", &J_psi_1S_Hlt2DiMuonDetachedDecision_Dec, &b_J_psi_1S_Hlt2DiMuonDetachedDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt2DiMuonDetachedDecision_TIS", &J_psi_1S_Hlt2DiMuonDetachedDecision_TIS, &b_J_psi_1S_Hlt2DiMuonDetachedDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2DiMuonDetachedDecision_TOS", &J_psi_1S_Hlt2DiMuonDetachedDecision_TOS, &b_J_psi_1S_Hlt2DiMuonDetachedDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2DiMuonDetachedHeavyDecision_Dec", &J_psi_1S_Hlt2DiMuonDetachedHeavyDecision_Dec, &b_J_psi_1S_Hlt2DiMuonDetachedHeavyDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt2DiMuonDetachedHeavyDecision_TIS", &J_psi_1S_Hlt2DiMuonDetachedHeavyDecision_TIS, &b_J_psi_1S_Hlt2DiMuonDetachedHeavyDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2DiMuonDetachedHeavyDecision_TOS", &J_psi_1S_Hlt2DiMuonDetachedHeavyDecision_TOS, &b_J_psi_1S_Hlt2DiMuonDetachedHeavyDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2DiMuonDetachedJPsiDecision_Dec", &J_psi_1S_Hlt2DiMuonDetachedJPsiDecision_Dec, &b_J_psi_1S_Hlt2DiMuonDetachedJPsiDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt2DiMuonDetachedJPsiDecision_TIS", &J_psi_1S_Hlt2DiMuonDetachedJPsiDecision_TIS, &b_J_psi_1S_Hlt2DiMuonDetachedJPsiDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2DiMuonDetachedJPsiDecision_TOS", &J_psi_1S_Hlt2DiMuonDetachedJPsiDecision_TOS, &b_J_psi_1S_Hlt2DiMuonDetachedJPsiDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2DiMuonNoPVDecision_Dec", &J_psi_1S_Hlt2DiMuonNoPVDecision_Dec, &b_J_psi_1S_Hlt2DiMuonNoPVDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt2DiMuonNoPVDecision_TIS", &J_psi_1S_Hlt2DiMuonNoPVDecision_TIS, &b_J_psi_1S_Hlt2DiMuonNoPVDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2DiMuonNoPVDecision_TOS", &J_psi_1S_Hlt2DiMuonNoPVDecision_TOS, &b_J_psi_1S_Hlt2DiMuonNoPVDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2TriMuonDetachedDecision_Dec", &J_psi_1S_Hlt2TriMuonDetachedDecision_Dec, &b_J_psi_1S_Hlt2TriMuonDetachedDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt2TriMuonDetachedDecision_TIS", &J_psi_1S_Hlt2TriMuonDetachedDecision_TIS, &b_J_psi_1S_Hlt2TriMuonDetachedDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2TriMuonDetachedDecision_TOS", &J_psi_1S_Hlt2TriMuonDetachedDecision_TOS, &b_J_psi_1S_Hlt2TriMuonDetachedDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2TriMuonTauDecision_Dec", &J_psi_1S_Hlt2TriMuonTauDecision_Dec, &b_J_psi_1S_Hlt2TriMuonTauDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt2TriMuonTauDecision_TIS", &J_psi_1S_Hlt2TriMuonTauDecision_TIS, &b_J_psi_1S_Hlt2TriMuonTauDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2TriMuonTauDecision_TOS", &J_psi_1S_Hlt2TriMuonTauDecision_TOS, &b_J_psi_1S_Hlt2TriMuonTauDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2Topo2BodyDecision_Dec", &J_psi_1S_Hlt2Topo2BodyDecision_Dec, &b_J_psi_1S_Hlt2Topo2BodyDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt2Topo2BodyDecision_TIS", &J_psi_1S_Hlt2Topo2BodyDecision_TIS, &b_J_psi_1S_Hlt2Topo2BodyDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2Topo2BodyDecision_TOS", &J_psi_1S_Hlt2Topo2BodyDecision_TOS, &b_J_psi_1S_Hlt2Topo2BodyDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2Topo3BodyDecision_Dec", &J_psi_1S_Hlt2Topo3BodyDecision_Dec, &b_J_psi_1S_Hlt2Topo3BodyDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt2Topo3BodyDecision_TIS", &J_psi_1S_Hlt2Topo3BodyDecision_TIS, &b_J_psi_1S_Hlt2Topo3BodyDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2Topo3BodyDecision_TOS", &J_psi_1S_Hlt2Topo3BodyDecision_TOS, &b_J_psi_1S_Hlt2Topo3BodyDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2Topo4BodyDecision_Dec", &J_psi_1S_Hlt2Topo4BodyDecision_Dec, &b_J_psi_1S_Hlt2Topo4BodyDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt2Topo4BodyDecision_TIS", &J_psi_1S_Hlt2Topo4BodyDecision_TIS, &b_J_psi_1S_Hlt2Topo4BodyDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2Topo4BodyDecision_TOS", &J_psi_1S_Hlt2Topo4BodyDecision_TOS, &b_J_psi_1S_Hlt2Topo4BodyDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2TopoMu2BodyDecision_Dec", &J_psi_1S_Hlt2TopoMu2BodyDecision_Dec, &b_J_psi_1S_Hlt2TopoMu2BodyDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt2TopoMu2BodyDecision_TIS", &J_psi_1S_Hlt2TopoMu2BodyDecision_TIS, &b_J_psi_1S_Hlt2TopoMu2BodyDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2TopoMu2BodyDecision_TOS", &J_psi_1S_Hlt2TopoMu2BodyDecision_TOS, &b_J_psi_1S_Hlt2TopoMu2BodyDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2TopoMu3BodyDecision_Dec", &J_psi_1S_Hlt2TopoMu3BodyDecision_Dec, &b_J_psi_1S_Hlt2TopoMu3BodyDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt2TopoMu3BodyDecision_TIS", &J_psi_1S_Hlt2TopoMu3BodyDecision_TIS, &b_J_psi_1S_Hlt2TopoMu3BodyDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2TopoMu3BodyDecision_TOS", &J_psi_1S_Hlt2TopoMu3BodyDecision_TOS, &b_J_psi_1S_Hlt2TopoMu3BodyDecision_TOS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2TopoMu4BodyDecision_Dec", &J_psi_1S_Hlt2TopoMu4BodyDecision_Dec, &b_J_psi_1S_Hlt2TopoMu4BodyDecision_Dec);
   fChain->SetBranchAddress("J_psi_1S_Hlt2TopoMu4BodyDecision_TIS", &J_psi_1S_Hlt2TopoMu4BodyDecision_TIS, &b_J_psi_1S_Hlt2TopoMu4BodyDecision_TIS);
   fChain->SetBranchAddress("J_psi_1S_Hlt2TopoMu4BodyDecision_TOS", &J_psi_1S_Hlt2TopoMu4BodyDecision_TOS, &b_J_psi_1S_Hlt2TopoMu4BodyDecision_TOS);
   fChain->SetBranchAddress("muplus_LOKI_ENERGY", &muplus_LOKI_ENERGY, &b_muplus_LOKI_ENERGY);
   fChain->SetBranchAddress("muplus_LOKI_ETA", &muplus_LOKI_ETA, &b_muplus_LOKI_ETA);
   fChain->SetBranchAddress("muplus_LOKI_PHI", &muplus_LOKI_PHI, &b_muplus_LOKI_PHI);
   fChain->SetBranchAddress("muplus_MINIP", &muplus_MINIP, &b_muplus_MINIP);
   fChain->SetBranchAddress("muplus_MINIPCHI2", &muplus_MINIPCHI2, &b_muplus_MINIPCHI2);
   fChain->SetBranchAddress("muplus_MINIPNEXTBEST", &muplus_MINIPNEXTBEST, &b_muplus_MINIPNEXTBEST);
   fChain->SetBranchAddress("muplus_MINIPCHI2NEXTBEST", &muplus_MINIPCHI2NEXTBEST, &b_muplus_MINIPCHI2NEXTBEST);
   fChain->SetBranchAddress("muplus_AllIP", muplus_AllIP, &b_muplus_AllIP);
   fChain->SetBranchAddress("muplus_AllIPchi2", muplus_AllIPchi2, &b_muplus_AllIPchi2);
   fChain->SetBranchAddress("muplus_OWNPV_X", &muplus_OWNPV_X, &b_muplus_OWNPV_X);
   fChain->SetBranchAddress("muplus_OWNPV_Y", &muplus_OWNPV_Y, &b_muplus_OWNPV_Y);
   fChain->SetBranchAddress("muplus_OWNPV_Z", &muplus_OWNPV_Z, &b_muplus_OWNPV_Z);
   fChain->SetBranchAddress("muplus_OWNPV_XERR", &muplus_OWNPV_XERR, &b_muplus_OWNPV_XERR);
   fChain->SetBranchAddress("muplus_OWNPV_YERR", &muplus_OWNPV_YERR, &b_muplus_OWNPV_YERR);
   fChain->SetBranchAddress("muplus_OWNPV_ZERR", &muplus_OWNPV_ZERR, &b_muplus_OWNPV_ZERR);
   fChain->SetBranchAddress("muplus_OWNPV_CHI2", &muplus_OWNPV_CHI2, &b_muplus_OWNPV_CHI2);
   fChain->SetBranchAddress("muplus_OWNPV_NDOF", &muplus_OWNPV_NDOF, &b_muplus_OWNPV_NDOF);
   fChain->SetBranchAddress("muplus_OWNPV_COV_", muplus_OWNPV_COV_, &b_muplus_OWNPV_COV_);
   fChain->SetBranchAddress("muplus_IP_OWNPV", &muplus_IP_OWNPV, &b_muplus_IP_OWNPV);
   fChain->SetBranchAddress("muplus_IPCHI2_OWNPV", &muplus_IPCHI2_OWNPV, &b_muplus_IPCHI2_OWNPV);
   fChain->SetBranchAddress("muplus_TOPPV_X", &muplus_TOPPV_X, &b_muplus_TOPPV_X);
   fChain->SetBranchAddress("muplus_TOPPV_Y", &muplus_TOPPV_Y, &b_muplus_TOPPV_Y);
   fChain->SetBranchAddress("muplus_TOPPV_Z", &muplus_TOPPV_Z, &b_muplus_TOPPV_Z);
   fChain->SetBranchAddress("muplus_TOPPV_XERR", &muplus_TOPPV_XERR, &b_muplus_TOPPV_XERR);
   fChain->SetBranchAddress("muplus_TOPPV_YERR", &muplus_TOPPV_YERR, &b_muplus_TOPPV_YERR);
   fChain->SetBranchAddress("muplus_TOPPV_ZERR", &muplus_TOPPV_ZERR, &b_muplus_TOPPV_ZERR);
   fChain->SetBranchAddress("muplus_TOPPV_CHI2", &muplus_TOPPV_CHI2, &b_muplus_TOPPV_CHI2);
   fChain->SetBranchAddress("muplus_TOPPV_NDOF", &muplus_TOPPV_NDOF, &b_muplus_TOPPV_NDOF);
   fChain->SetBranchAddress("muplus_TOPPV_COV_", muplus_TOPPV_COV_, &b_muplus_TOPPV_COV_);
   fChain->SetBranchAddress("muplus_IP_TOPPV", &muplus_IP_TOPPV, &b_muplus_IP_TOPPV);
   fChain->SetBranchAddress("muplus_IPCHI2_TOPPV", &muplus_IPCHI2_TOPPV, &b_muplus_IPCHI2_TOPPV);
   fChain->SetBranchAddress("muplus_ORIVX_X", &muplus_ORIVX_X, &b_muplus_ORIVX_X);
   fChain->SetBranchAddress("muplus_ORIVX_Y", &muplus_ORIVX_Y, &b_muplus_ORIVX_Y);
   fChain->SetBranchAddress("muplus_ORIVX_Z", &muplus_ORIVX_Z, &b_muplus_ORIVX_Z);
   fChain->SetBranchAddress("muplus_ORIVX_XERR", &muplus_ORIVX_XERR, &b_muplus_ORIVX_XERR);
   fChain->SetBranchAddress("muplus_ORIVX_YERR", &muplus_ORIVX_YERR, &b_muplus_ORIVX_YERR);
   fChain->SetBranchAddress("muplus_ORIVX_ZERR", &muplus_ORIVX_ZERR, &b_muplus_ORIVX_ZERR);
   fChain->SetBranchAddress("muplus_ORIVX_CHI2", &muplus_ORIVX_CHI2, &b_muplus_ORIVX_CHI2);
   fChain->SetBranchAddress("muplus_ORIVX_NDOF", &muplus_ORIVX_NDOF, &b_muplus_ORIVX_NDOF);
   fChain->SetBranchAddress("muplus_ORIVX_COV_", muplus_ORIVX_COV_, &b_muplus_ORIVX_COV_);
   fChain->SetBranchAddress("muplus_IP_ORIVX", &muplus_IP_ORIVX, &b_muplus_IP_ORIVX);
   fChain->SetBranchAddress("muplus_IPCHI2_ORIVX", &muplus_IPCHI2_ORIVX, &b_muplus_IPCHI2_ORIVX);
   fChain->SetBranchAddress("muplus_P", &muplus_P, &b_muplus_P);
   fChain->SetBranchAddress("muplus_PT", &muplus_PT, &b_muplus_PT);
   fChain->SetBranchAddress("muplus_PE", &muplus_PE, &b_muplus_PE);
   fChain->SetBranchAddress("muplus_PX", &muplus_PX, &b_muplus_PX);
   fChain->SetBranchAddress("muplus_PY", &muplus_PY, &b_muplus_PY);
   fChain->SetBranchAddress("muplus_PZ", &muplus_PZ, &b_muplus_PZ);
   fChain->SetBranchAddress("muplus_M", &muplus_M, &b_muplus_M);
   fChain->SetBranchAddress("muplus_ID", &muplus_ID, &b_muplus_ID);
   fChain->SetBranchAddress("muplus_PIDe", &muplus_PIDe, &b_muplus_PIDe);
   fChain->SetBranchAddress("muplus_PIDmu", &muplus_PIDmu, &b_muplus_PIDmu);
   fChain->SetBranchAddress("muplus_PIDK", &muplus_PIDK, &b_muplus_PIDK);
   fChain->SetBranchAddress("muplus_PIDp", &muplus_PIDp, &b_muplus_PIDp);
   fChain->SetBranchAddress("muplus_ProbNNe", &muplus_ProbNNe, &b_muplus_ProbNNe);
   fChain->SetBranchAddress("muplus_ProbNNk", &muplus_ProbNNk, &b_muplus_ProbNNk);
   fChain->SetBranchAddress("muplus_ProbNNp", &muplus_ProbNNp, &b_muplus_ProbNNp);
   fChain->SetBranchAddress("muplus_ProbNNpi", &muplus_ProbNNpi, &b_muplus_ProbNNpi);
   fChain->SetBranchAddress("muplus_ProbNNmu", &muplus_ProbNNmu, &b_muplus_ProbNNmu);
   fChain->SetBranchAddress("muplus_ProbNNghost", &muplus_ProbNNghost, &b_muplus_ProbNNghost);
   fChain->SetBranchAddress("muplus_hasMuon", &muplus_hasMuon, &b_muplus_hasMuon);
   fChain->SetBranchAddress("muplus_isMuon", &muplus_isMuon, &b_muplus_isMuon);
   fChain->SetBranchAddress("muplus_hasRich", &muplus_hasRich, &b_muplus_hasRich);
   fChain->SetBranchAddress("muplus_hasCalo", &muplus_hasCalo, &b_muplus_hasCalo);
   fChain->SetBranchAddress("muplus_TRACK_Type", &muplus_TRACK_Type, &b_muplus_TRACK_Type);
   fChain->SetBranchAddress("muplus_TRACK_Key", &muplus_TRACK_Key, &b_muplus_TRACK_Key);
   fChain->SetBranchAddress("muplus_TRACK_CHI2", &muplus_TRACK_CHI2, &b_muplus_TRACK_CHI2);
   fChain->SetBranchAddress("muplus_TRACK_NDOF", &muplus_TRACK_NDOF, &b_muplus_TRACK_NDOF);
   fChain->SetBranchAddress("muplus_TRACK_CHI2NDOF", &muplus_TRACK_CHI2NDOF, &b_muplus_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("muplus_TRACK_PCHI2", &muplus_TRACK_PCHI2, &b_muplus_TRACK_PCHI2);
   fChain->SetBranchAddress("muplus_TRACK_VeloCHI2NDOF", &muplus_TRACK_VeloCHI2NDOF, &b_muplus_TRACK_VeloCHI2NDOF);
   fChain->SetBranchAddress("muplus_TRACK_TCHI2NDOF", &muplus_TRACK_TCHI2NDOF, &b_muplus_TRACK_TCHI2NDOF);
   fChain->SetBranchAddress("muplus_VELO_UTID", &muplus_VELO_UTID, &b_muplus_VELO_UTID);
   fChain->SetBranchAddress("muplus_TRACK_FirstMeasurementX", &muplus_TRACK_FirstMeasurementX, &b_muplus_TRACK_FirstMeasurementX);
   fChain->SetBranchAddress("muplus_TRACK_FirstMeasurementY", &muplus_TRACK_FirstMeasurementY, &b_muplus_TRACK_FirstMeasurementY);
   fChain->SetBranchAddress("muplus_TRACK_FirstMeasurementZ", &muplus_TRACK_FirstMeasurementZ, &b_muplus_TRACK_FirstMeasurementZ);
   fChain->SetBranchAddress("muplus_TRACK_MatchCHI2", &muplus_TRACK_MatchCHI2, &b_muplus_TRACK_MatchCHI2);
   fChain->SetBranchAddress("muplus_TRACK_GhostProb", &muplus_TRACK_GhostProb, &b_muplus_TRACK_GhostProb);
   fChain->SetBranchAddress("muplus_TRACK_CloneDist", &muplus_TRACK_CloneDist, &b_muplus_TRACK_CloneDist);
   fChain->SetBranchAddress("muplus_TRACK_Likelihood", &muplus_TRACK_Likelihood, &b_muplus_TRACK_Likelihood);
   fChain->SetBranchAddress("muplus_X", &muplus_X, &b_muplus_X);
   fChain->SetBranchAddress("muplus_Y", &muplus_Y, &b_muplus_Y);
   fChain->SetBranchAddress("muminus_LOKI_ENERGY", &muminus_LOKI_ENERGY, &b_muminus_LOKI_ENERGY);
   fChain->SetBranchAddress("muminus_LOKI_ETA", &muminus_LOKI_ETA, &b_muminus_LOKI_ETA);
   fChain->SetBranchAddress("muminus_LOKI_PHI", &muminus_LOKI_PHI, &b_muminus_LOKI_PHI);
   fChain->SetBranchAddress("muminus_MINIP", &muminus_MINIP, &b_muminus_MINIP);
   fChain->SetBranchAddress("muminus_MINIPCHI2", &muminus_MINIPCHI2, &b_muminus_MINIPCHI2);
   fChain->SetBranchAddress("muminus_MINIPNEXTBEST", &muminus_MINIPNEXTBEST, &b_muminus_MINIPNEXTBEST);
   fChain->SetBranchAddress("muminus_MINIPCHI2NEXTBEST", &muminus_MINIPCHI2NEXTBEST, &b_muminus_MINIPCHI2NEXTBEST);
   fChain->SetBranchAddress("muminus_AllIP", muminus_AllIP, &b_muminus_AllIP);
   fChain->SetBranchAddress("muminus_AllIPchi2", muminus_AllIPchi2, &b_muminus_AllIPchi2);
   fChain->SetBranchAddress("muminus_OWNPV_X", &muminus_OWNPV_X, &b_muminus_OWNPV_X);
   fChain->SetBranchAddress("muminus_OWNPV_Y", &muminus_OWNPV_Y, &b_muminus_OWNPV_Y);
   fChain->SetBranchAddress("muminus_OWNPV_Z", &muminus_OWNPV_Z, &b_muminus_OWNPV_Z);
   fChain->SetBranchAddress("muminus_OWNPV_XERR", &muminus_OWNPV_XERR, &b_muminus_OWNPV_XERR);
   fChain->SetBranchAddress("muminus_OWNPV_YERR", &muminus_OWNPV_YERR, &b_muminus_OWNPV_YERR);
   fChain->SetBranchAddress("muminus_OWNPV_ZERR", &muminus_OWNPV_ZERR, &b_muminus_OWNPV_ZERR);
   fChain->SetBranchAddress("muminus_OWNPV_CHI2", &muminus_OWNPV_CHI2, &b_muminus_OWNPV_CHI2);
   fChain->SetBranchAddress("muminus_OWNPV_NDOF", &muminus_OWNPV_NDOF, &b_muminus_OWNPV_NDOF);
   fChain->SetBranchAddress("muminus_OWNPV_COV_", muminus_OWNPV_COV_, &b_muminus_OWNPV_COV_);
   fChain->SetBranchAddress("muminus_IP_OWNPV", &muminus_IP_OWNPV, &b_muminus_IP_OWNPV);
   fChain->SetBranchAddress("muminus_IPCHI2_OWNPV", &muminus_IPCHI2_OWNPV, &b_muminus_IPCHI2_OWNPV);
   fChain->SetBranchAddress("muminus_TOPPV_X", &muminus_TOPPV_X, &b_muminus_TOPPV_X);
   fChain->SetBranchAddress("muminus_TOPPV_Y", &muminus_TOPPV_Y, &b_muminus_TOPPV_Y);
   fChain->SetBranchAddress("muminus_TOPPV_Z", &muminus_TOPPV_Z, &b_muminus_TOPPV_Z);
   fChain->SetBranchAddress("muminus_TOPPV_XERR", &muminus_TOPPV_XERR, &b_muminus_TOPPV_XERR);
   fChain->SetBranchAddress("muminus_TOPPV_YERR", &muminus_TOPPV_YERR, &b_muminus_TOPPV_YERR);
   fChain->SetBranchAddress("muminus_TOPPV_ZERR", &muminus_TOPPV_ZERR, &b_muminus_TOPPV_ZERR);
   fChain->SetBranchAddress("muminus_TOPPV_CHI2", &muminus_TOPPV_CHI2, &b_muminus_TOPPV_CHI2);
   fChain->SetBranchAddress("muminus_TOPPV_NDOF", &muminus_TOPPV_NDOF, &b_muminus_TOPPV_NDOF);
   fChain->SetBranchAddress("muminus_TOPPV_COV_", muminus_TOPPV_COV_, &b_muminus_TOPPV_COV_);
   fChain->SetBranchAddress("muminus_IP_TOPPV", &muminus_IP_TOPPV, &b_muminus_IP_TOPPV);
   fChain->SetBranchAddress("muminus_IPCHI2_TOPPV", &muminus_IPCHI2_TOPPV, &b_muminus_IPCHI2_TOPPV);
   fChain->SetBranchAddress("muminus_ORIVX_X", &muminus_ORIVX_X, &b_muminus_ORIVX_X);
   fChain->SetBranchAddress("muminus_ORIVX_Y", &muminus_ORIVX_Y, &b_muminus_ORIVX_Y);
   fChain->SetBranchAddress("muminus_ORIVX_Z", &muminus_ORIVX_Z, &b_muminus_ORIVX_Z);
   fChain->SetBranchAddress("muminus_ORIVX_XERR", &muminus_ORIVX_XERR, &b_muminus_ORIVX_XERR);
   fChain->SetBranchAddress("muminus_ORIVX_YERR", &muminus_ORIVX_YERR, &b_muminus_ORIVX_YERR);
   fChain->SetBranchAddress("muminus_ORIVX_ZERR", &muminus_ORIVX_ZERR, &b_muminus_ORIVX_ZERR);
   fChain->SetBranchAddress("muminus_ORIVX_CHI2", &muminus_ORIVX_CHI2, &b_muminus_ORIVX_CHI2);
   fChain->SetBranchAddress("muminus_ORIVX_NDOF", &muminus_ORIVX_NDOF, &b_muminus_ORIVX_NDOF);
   fChain->SetBranchAddress("muminus_ORIVX_COV_", muminus_ORIVX_COV_, &b_muminus_ORIVX_COV_);
   fChain->SetBranchAddress("muminus_IP_ORIVX", &muminus_IP_ORIVX, &b_muminus_IP_ORIVX);
   fChain->SetBranchAddress("muminus_IPCHI2_ORIVX", &muminus_IPCHI2_ORIVX, &b_muminus_IPCHI2_ORIVX);
   fChain->SetBranchAddress("muminus_P", &muminus_P, &b_muminus_P);
   fChain->SetBranchAddress("muminus_PT", &muminus_PT, &b_muminus_PT);
   fChain->SetBranchAddress("muminus_PE", &muminus_PE, &b_muminus_PE);
   fChain->SetBranchAddress("muminus_PX", &muminus_PX, &b_muminus_PX);
   fChain->SetBranchAddress("muminus_PY", &muminus_PY, &b_muminus_PY);
   fChain->SetBranchAddress("muminus_PZ", &muminus_PZ, &b_muminus_PZ);
   fChain->SetBranchAddress("muminus_M", &muminus_M, &b_muminus_M);
   fChain->SetBranchAddress("muminus_ID", &muminus_ID, &b_muminus_ID);
   fChain->SetBranchAddress("muminus_PIDe", &muminus_PIDe, &b_muminus_PIDe);
   fChain->SetBranchAddress("muminus_PIDmu", &muminus_PIDmu, &b_muminus_PIDmu);
   fChain->SetBranchAddress("muminus_PIDK", &muminus_PIDK, &b_muminus_PIDK);
   fChain->SetBranchAddress("muminus_PIDp", &muminus_PIDp, &b_muminus_PIDp);
   fChain->SetBranchAddress("muminus_ProbNNe", &muminus_ProbNNe, &b_muminus_ProbNNe);
   fChain->SetBranchAddress("muminus_ProbNNk", &muminus_ProbNNk, &b_muminus_ProbNNk);
   fChain->SetBranchAddress("muminus_ProbNNp", &muminus_ProbNNp, &b_muminus_ProbNNp);
   fChain->SetBranchAddress("muminus_ProbNNpi", &muminus_ProbNNpi, &b_muminus_ProbNNpi);
   fChain->SetBranchAddress("muminus_ProbNNmu", &muminus_ProbNNmu, &b_muminus_ProbNNmu);
   fChain->SetBranchAddress("muminus_ProbNNghost", &muminus_ProbNNghost, &b_muminus_ProbNNghost);
   fChain->SetBranchAddress("muminus_hasMuon", &muminus_hasMuon, &b_muminus_hasMuon);
   fChain->SetBranchAddress("muminus_isMuon", &muminus_isMuon, &b_muminus_isMuon);
   fChain->SetBranchAddress("muminus_hasRich", &muminus_hasRich, &b_muminus_hasRich);
   fChain->SetBranchAddress("muminus_hasCalo", &muminus_hasCalo, &b_muminus_hasCalo);
   fChain->SetBranchAddress("muminus_TRACK_Type", &muminus_TRACK_Type, &b_muminus_TRACK_Type);
   fChain->SetBranchAddress("muminus_TRACK_Key", &muminus_TRACK_Key, &b_muminus_TRACK_Key);
   fChain->SetBranchAddress("muminus_TRACK_CHI2", &muminus_TRACK_CHI2, &b_muminus_TRACK_CHI2);
   fChain->SetBranchAddress("muminus_TRACK_NDOF", &muminus_TRACK_NDOF, &b_muminus_TRACK_NDOF);
   fChain->SetBranchAddress("muminus_TRACK_CHI2NDOF", &muminus_TRACK_CHI2NDOF, &b_muminus_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("muminus_TRACK_PCHI2", &muminus_TRACK_PCHI2, &b_muminus_TRACK_PCHI2);
   fChain->SetBranchAddress("muminus_TRACK_VeloCHI2NDOF", &muminus_TRACK_VeloCHI2NDOF, &b_muminus_TRACK_VeloCHI2NDOF);
   fChain->SetBranchAddress("muminus_TRACK_TCHI2NDOF", &muminus_TRACK_TCHI2NDOF, &b_muminus_TRACK_TCHI2NDOF);
   fChain->SetBranchAddress("muminus_VELO_UTID", &muminus_VELO_UTID, &b_muminus_VELO_UTID);
   fChain->SetBranchAddress("muminus_TRACK_FirstMeasurementX", &muminus_TRACK_FirstMeasurementX, &b_muminus_TRACK_FirstMeasurementX);
   fChain->SetBranchAddress("muminus_TRACK_FirstMeasurementY", &muminus_TRACK_FirstMeasurementY, &b_muminus_TRACK_FirstMeasurementY);
   fChain->SetBranchAddress("muminus_TRACK_FirstMeasurementZ", &muminus_TRACK_FirstMeasurementZ, &b_muminus_TRACK_FirstMeasurementZ);
   fChain->SetBranchAddress("muminus_TRACK_MatchCHI2", &muminus_TRACK_MatchCHI2, &b_muminus_TRACK_MatchCHI2);
   fChain->SetBranchAddress("muminus_TRACK_GhostProb", &muminus_TRACK_GhostProb, &b_muminus_TRACK_GhostProb);
   fChain->SetBranchAddress("muminus_TRACK_CloneDist", &muminus_TRACK_CloneDist, &b_muminus_TRACK_CloneDist);
   fChain->SetBranchAddress("muminus_TRACK_Likelihood", &muminus_TRACK_Likelihood, &b_muminus_TRACK_Likelihood);
   fChain->SetBranchAddress("muminus_X", &muminus_X, &b_muminus_X);
   fChain->SetBranchAddress("muminus_Y", &muminus_Y, &b_muminus_Y);
   fChain->SetBranchAddress("Kst_892_0_LOKI_ENERGY", &Kst_892_0_LOKI_ENERGY, &b_Kst_892_0_LOKI_ENERGY);
   fChain->SetBranchAddress("Kst_892_0_LOKI_ETA", &Kst_892_0_LOKI_ETA, &b_Kst_892_0_LOKI_ETA);
   fChain->SetBranchAddress("Kst_892_0_LOKI_PHI", &Kst_892_0_LOKI_PHI, &b_Kst_892_0_LOKI_PHI);
   fChain->SetBranchAddress("Kst_892_0_MINIP", &Kst_892_0_MINIP, &b_Kst_892_0_MINIP);
   fChain->SetBranchAddress("Kst_892_0_MINIPCHI2", &Kst_892_0_MINIPCHI2, &b_Kst_892_0_MINIPCHI2);
   fChain->SetBranchAddress("Kst_892_0_MINIPNEXTBEST", &Kst_892_0_MINIPNEXTBEST, &b_Kst_892_0_MINIPNEXTBEST);
   fChain->SetBranchAddress("Kst_892_0_MINIPCHI2NEXTBEST", &Kst_892_0_MINIPCHI2NEXTBEST, &b_Kst_892_0_MINIPCHI2NEXTBEST);
   fChain->SetBranchAddress("Kst_892_0_AllIP", Kst_892_0_AllIP, &b_Kst_892_0_AllIP);
   fChain->SetBranchAddress("Kst_892_0_AllIPchi2", Kst_892_0_AllIPchi2, &b_Kst_892_0_AllIPchi2);
   fChain->SetBranchAddress("Kst_892_0_AllDIRA", Kst_892_0_AllDIRA, &b_Kst_892_0_AllDIRA);
   fChain->SetBranchAddress("Kst_892_0_ENDVERTEX_X", &Kst_892_0_ENDVERTEX_X, &b_Kst_892_0_ENDVERTEX_X);
   fChain->SetBranchAddress("Kst_892_0_ENDVERTEX_Y", &Kst_892_0_ENDVERTEX_Y, &b_Kst_892_0_ENDVERTEX_Y);
   fChain->SetBranchAddress("Kst_892_0_ENDVERTEX_Z", &Kst_892_0_ENDVERTEX_Z, &b_Kst_892_0_ENDVERTEX_Z);
   fChain->SetBranchAddress("Kst_892_0_ENDVERTEX_XERR", &Kst_892_0_ENDVERTEX_XERR, &b_Kst_892_0_ENDVERTEX_XERR);
   fChain->SetBranchAddress("Kst_892_0_ENDVERTEX_YERR", &Kst_892_0_ENDVERTEX_YERR, &b_Kst_892_0_ENDVERTEX_YERR);
   fChain->SetBranchAddress("Kst_892_0_ENDVERTEX_ZERR", &Kst_892_0_ENDVERTEX_ZERR, &b_Kst_892_0_ENDVERTEX_ZERR);
   fChain->SetBranchAddress("Kst_892_0_ENDVERTEX_CHI2", &Kst_892_0_ENDVERTEX_CHI2, &b_Kst_892_0_ENDVERTEX_CHI2);
   fChain->SetBranchAddress("Kst_892_0_ENDVERTEX_NDOF", &Kst_892_0_ENDVERTEX_NDOF, &b_Kst_892_0_ENDVERTEX_NDOF);
   fChain->SetBranchAddress("Kst_892_0_ENDVERTEX_COV_", Kst_892_0_ENDVERTEX_COV_, &b_Kst_892_0_ENDVERTEX_COV_);
   fChain->SetBranchAddress("Kst_892_0_OWNPV_X", &Kst_892_0_OWNPV_X, &b_Kst_892_0_OWNPV_X);
   fChain->SetBranchAddress("Kst_892_0_OWNPV_Y", &Kst_892_0_OWNPV_Y, &b_Kst_892_0_OWNPV_Y);
   fChain->SetBranchAddress("Kst_892_0_OWNPV_Z", &Kst_892_0_OWNPV_Z, &b_Kst_892_0_OWNPV_Z);
   fChain->SetBranchAddress("Kst_892_0_OWNPV_XERR", &Kst_892_0_OWNPV_XERR, &b_Kst_892_0_OWNPV_XERR);
   fChain->SetBranchAddress("Kst_892_0_OWNPV_YERR", &Kst_892_0_OWNPV_YERR, &b_Kst_892_0_OWNPV_YERR);
   fChain->SetBranchAddress("Kst_892_0_OWNPV_ZERR", &Kst_892_0_OWNPV_ZERR, &b_Kst_892_0_OWNPV_ZERR);
   fChain->SetBranchAddress("Kst_892_0_OWNPV_CHI2", &Kst_892_0_OWNPV_CHI2, &b_Kst_892_0_OWNPV_CHI2);
   fChain->SetBranchAddress("Kst_892_0_OWNPV_NDOF", &Kst_892_0_OWNPV_NDOF, &b_Kst_892_0_OWNPV_NDOF);
   fChain->SetBranchAddress("Kst_892_0_OWNPV_COV_", Kst_892_0_OWNPV_COV_, &b_Kst_892_0_OWNPV_COV_);
   fChain->SetBranchAddress("Kst_892_0_IP_OWNPV", &Kst_892_0_IP_OWNPV, &b_Kst_892_0_IP_OWNPV);
   fChain->SetBranchAddress("Kst_892_0_IPCHI2_OWNPV", &Kst_892_0_IPCHI2_OWNPV, &b_Kst_892_0_IPCHI2_OWNPV);
   fChain->SetBranchAddress("Kst_892_0_FD_OWNPV", &Kst_892_0_FD_OWNPV, &b_Kst_892_0_FD_OWNPV);
   fChain->SetBranchAddress("Kst_892_0_FDCHI2_OWNPV", &Kst_892_0_FDCHI2_OWNPV, &b_Kst_892_0_FDCHI2_OWNPV);
   fChain->SetBranchAddress("Kst_892_0_DIRA_OWNPV", &Kst_892_0_DIRA_OWNPV, &b_Kst_892_0_DIRA_OWNPV);
   fChain->SetBranchAddress("Kst_892_0_TOPPV_X", &Kst_892_0_TOPPV_X, &b_Kst_892_0_TOPPV_X);
   fChain->SetBranchAddress("Kst_892_0_TOPPV_Y", &Kst_892_0_TOPPV_Y, &b_Kst_892_0_TOPPV_Y);
   fChain->SetBranchAddress("Kst_892_0_TOPPV_Z", &Kst_892_0_TOPPV_Z, &b_Kst_892_0_TOPPV_Z);
   fChain->SetBranchAddress("Kst_892_0_TOPPV_XERR", &Kst_892_0_TOPPV_XERR, &b_Kst_892_0_TOPPV_XERR);
   fChain->SetBranchAddress("Kst_892_0_TOPPV_YERR", &Kst_892_0_TOPPV_YERR, &b_Kst_892_0_TOPPV_YERR);
   fChain->SetBranchAddress("Kst_892_0_TOPPV_ZERR", &Kst_892_0_TOPPV_ZERR, &b_Kst_892_0_TOPPV_ZERR);
   fChain->SetBranchAddress("Kst_892_0_TOPPV_CHI2", &Kst_892_0_TOPPV_CHI2, &b_Kst_892_0_TOPPV_CHI2);
   fChain->SetBranchAddress("Kst_892_0_TOPPV_NDOF", &Kst_892_0_TOPPV_NDOF, &b_Kst_892_0_TOPPV_NDOF);
   fChain->SetBranchAddress("Kst_892_0_TOPPV_COV_", Kst_892_0_TOPPV_COV_, &b_Kst_892_0_TOPPV_COV_);
   fChain->SetBranchAddress("Kst_892_0_IP_TOPPV", &Kst_892_0_IP_TOPPV, &b_Kst_892_0_IP_TOPPV);
   fChain->SetBranchAddress("Kst_892_0_IPCHI2_TOPPV", &Kst_892_0_IPCHI2_TOPPV, &b_Kst_892_0_IPCHI2_TOPPV);
   fChain->SetBranchAddress("Kst_892_0_FD_TOPPV", &Kst_892_0_FD_TOPPV, &b_Kst_892_0_FD_TOPPV);
   fChain->SetBranchAddress("Kst_892_0_FDCHI2_TOPPV", &Kst_892_0_FDCHI2_TOPPV, &b_Kst_892_0_FDCHI2_TOPPV);
   fChain->SetBranchAddress("Kst_892_0_DIRA_TOPPV", &Kst_892_0_DIRA_TOPPV, &b_Kst_892_0_DIRA_TOPPV);
   fChain->SetBranchAddress("Kst_892_0_ORIVX_X", &Kst_892_0_ORIVX_X, &b_Kst_892_0_ORIVX_X);
   fChain->SetBranchAddress("Kst_892_0_ORIVX_Y", &Kst_892_0_ORIVX_Y, &b_Kst_892_0_ORIVX_Y);
   fChain->SetBranchAddress("Kst_892_0_ORIVX_Z", &Kst_892_0_ORIVX_Z, &b_Kst_892_0_ORIVX_Z);
   fChain->SetBranchAddress("Kst_892_0_ORIVX_XERR", &Kst_892_0_ORIVX_XERR, &b_Kst_892_0_ORIVX_XERR);
   fChain->SetBranchAddress("Kst_892_0_ORIVX_YERR", &Kst_892_0_ORIVX_YERR, &b_Kst_892_0_ORIVX_YERR);
   fChain->SetBranchAddress("Kst_892_0_ORIVX_ZERR", &Kst_892_0_ORIVX_ZERR, &b_Kst_892_0_ORIVX_ZERR);
   fChain->SetBranchAddress("Kst_892_0_ORIVX_CHI2", &Kst_892_0_ORIVX_CHI2, &b_Kst_892_0_ORIVX_CHI2);
   fChain->SetBranchAddress("Kst_892_0_ORIVX_NDOF", &Kst_892_0_ORIVX_NDOF, &b_Kst_892_0_ORIVX_NDOF);
   fChain->SetBranchAddress("Kst_892_0_ORIVX_COV_", Kst_892_0_ORIVX_COV_, &b_Kst_892_0_ORIVX_COV_);
   fChain->SetBranchAddress("Kst_892_0_IP_ORIVX", &Kst_892_0_IP_ORIVX, &b_Kst_892_0_IP_ORIVX);
   fChain->SetBranchAddress("Kst_892_0_IPCHI2_ORIVX", &Kst_892_0_IPCHI2_ORIVX, &b_Kst_892_0_IPCHI2_ORIVX);
   fChain->SetBranchAddress("Kst_892_0_FD_ORIVX", &Kst_892_0_FD_ORIVX, &b_Kst_892_0_FD_ORIVX);
   fChain->SetBranchAddress("Kst_892_0_FDCHI2_ORIVX", &Kst_892_0_FDCHI2_ORIVX, &b_Kst_892_0_FDCHI2_ORIVX);
   fChain->SetBranchAddress("Kst_892_0_DIRA_ORIVX", &Kst_892_0_DIRA_ORIVX, &b_Kst_892_0_DIRA_ORIVX);
   fChain->SetBranchAddress("Kst_892_0_P", &Kst_892_0_P, &b_Kst_892_0_P);
   fChain->SetBranchAddress("Kst_892_0_PT", &Kst_892_0_PT, &b_Kst_892_0_PT);
   fChain->SetBranchAddress("Kst_892_0_PE", &Kst_892_0_PE, &b_Kst_892_0_PE);
   fChain->SetBranchAddress("Kst_892_0_PX", &Kst_892_0_PX, &b_Kst_892_0_PX);
   fChain->SetBranchAddress("Kst_892_0_PY", &Kst_892_0_PY, &b_Kst_892_0_PY);
   fChain->SetBranchAddress("Kst_892_0_PZ", &Kst_892_0_PZ, &b_Kst_892_0_PZ);
   fChain->SetBranchAddress("Kst_892_0_MM", &Kst_892_0_MM, &b_Kst_892_0_MM);
   fChain->SetBranchAddress("Kst_892_0_MMERR", &Kst_892_0_MMERR, &b_Kst_892_0_MMERR);
   fChain->SetBranchAddress("Kst_892_0_M", &Kst_892_0_M, &b_Kst_892_0_M);
   fChain->SetBranchAddress("Kst_892_0_ID", &Kst_892_0_ID, &b_Kst_892_0_ID);
   fChain->SetBranchAddress("Kst_892_0_TAU", &Kst_892_0_TAU, &b_Kst_892_0_TAU);
   fChain->SetBranchAddress("Kst_892_0_TAUERR", &Kst_892_0_TAUERR, &b_Kst_892_0_TAUERR);
   fChain->SetBranchAddress("Kst_892_0_TAUCHI2", &Kst_892_0_TAUCHI2, &b_Kst_892_0_TAUCHI2);
   fChain->SetBranchAddress("Kst_892_0_X", &Kst_892_0_X, &b_Kst_892_0_X);
   fChain->SetBranchAddress("Kst_892_0_Y", &Kst_892_0_Y, &b_Kst_892_0_Y);
   fChain->SetBranchAddress("Kplus_LOKI_ENERGY", &Kplus_LOKI_ENERGY, &b_Kplus_LOKI_ENERGY);
   fChain->SetBranchAddress("Kplus_LOKI_ETA", &Kplus_LOKI_ETA, &b_Kplus_LOKI_ETA);
   fChain->SetBranchAddress("Kplus_LOKI_PHI", &Kplus_LOKI_PHI, &b_Kplus_LOKI_PHI);
   fChain->SetBranchAddress("Kplus_MINIP", &Kplus_MINIP, &b_Kplus_MINIP);
   fChain->SetBranchAddress("Kplus_MINIPCHI2", &Kplus_MINIPCHI2, &b_Kplus_MINIPCHI2);
   fChain->SetBranchAddress("Kplus_MINIPNEXTBEST", &Kplus_MINIPNEXTBEST, &b_Kplus_MINIPNEXTBEST);
   fChain->SetBranchAddress("Kplus_MINIPCHI2NEXTBEST", &Kplus_MINIPCHI2NEXTBEST, &b_Kplus_MINIPCHI2NEXTBEST);
   fChain->SetBranchAddress("Kplus_AllIP", Kplus_AllIP, &b_Kplus_AllIP);
   fChain->SetBranchAddress("Kplus_AllIPchi2", Kplus_AllIPchi2, &b_Kplus_AllIPchi2);
   fChain->SetBranchAddress("Kplus_OWNPV_X", &Kplus_OWNPV_X, &b_Kplus_OWNPV_X);
   fChain->SetBranchAddress("Kplus_OWNPV_Y", &Kplus_OWNPV_Y, &b_Kplus_OWNPV_Y);
   fChain->SetBranchAddress("Kplus_OWNPV_Z", &Kplus_OWNPV_Z, &b_Kplus_OWNPV_Z);
   fChain->SetBranchAddress("Kplus_OWNPV_XERR", &Kplus_OWNPV_XERR, &b_Kplus_OWNPV_XERR);
   fChain->SetBranchAddress("Kplus_OWNPV_YERR", &Kplus_OWNPV_YERR, &b_Kplus_OWNPV_YERR);
   fChain->SetBranchAddress("Kplus_OWNPV_ZERR", &Kplus_OWNPV_ZERR, &b_Kplus_OWNPV_ZERR);
   fChain->SetBranchAddress("Kplus_OWNPV_CHI2", &Kplus_OWNPV_CHI2, &b_Kplus_OWNPV_CHI2);
   fChain->SetBranchAddress("Kplus_OWNPV_NDOF", &Kplus_OWNPV_NDOF, &b_Kplus_OWNPV_NDOF);
   fChain->SetBranchAddress("Kplus_OWNPV_COV_", Kplus_OWNPV_COV_, &b_Kplus_OWNPV_COV_);
   fChain->SetBranchAddress("Kplus_IP_OWNPV", &Kplus_IP_OWNPV, &b_Kplus_IP_OWNPV);
   fChain->SetBranchAddress("Kplus_IPCHI2_OWNPV", &Kplus_IPCHI2_OWNPV, &b_Kplus_IPCHI2_OWNPV);
   fChain->SetBranchAddress("Kplus_TOPPV_X", &Kplus_TOPPV_X, &b_Kplus_TOPPV_X);
   fChain->SetBranchAddress("Kplus_TOPPV_Y", &Kplus_TOPPV_Y, &b_Kplus_TOPPV_Y);
   fChain->SetBranchAddress("Kplus_TOPPV_Z", &Kplus_TOPPV_Z, &b_Kplus_TOPPV_Z);
   fChain->SetBranchAddress("Kplus_TOPPV_XERR", &Kplus_TOPPV_XERR, &b_Kplus_TOPPV_XERR);
   fChain->SetBranchAddress("Kplus_TOPPV_YERR", &Kplus_TOPPV_YERR, &b_Kplus_TOPPV_YERR);
   fChain->SetBranchAddress("Kplus_TOPPV_ZERR", &Kplus_TOPPV_ZERR, &b_Kplus_TOPPV_ZERR);
   fChain->SetBranchAddress("Kplus_TOPPV_CHI2", &Kplus_TOPPV_CHI2, &b_Kplus_TOPPV_CHI2);
   fChain->SetBranchAddress("Kplus_TOPPV_NDOF", &Kplus_TOPPV_NDOF, &b_Kplus_TOPPV_NDOF);
   fChain->SetBranchAddress("Kplus_TOPPV_COV_", Kplus_TOPPV_COV_, &b_Kplus_TOPPV_COV_);
   fChain->SetBranchAddress("Kplus_IP_TOPPV", &Kplus_IP_TOPPV, &b_Kplus_IP_TOPPV);
   fChain->SetBranchAddress("Kplus_IPCHI2_TOPPV", &Kplus_IPCHI2_TOPPV, &b_Kplus_IPCHI2_TOPPV);
   fChain->SetBranchAddress("Kplus_ORIVX_X", &Kplus_ORIVX_X, &b_Kplus_ORIVX_X);
   fChain->SetBranchAddress("Kplus_ORIVX_Y", &Kplus_ORIVX_Y, &b_Kplus_ORIVX_Y);
   fChain->SetBranchAddress("Kplus_ORIVX_Z", &Kplus_ORIVX_Z, &b_Kplus_ORIVX_Z);
   fChain->SetBranchAddress("Kplus_ORIVX_XERR", &Kplus_ORIVX_XERR, &b_Kplus_ORIVX_XERR);
   fChain->SetBranchAddress("Kplus_ORIVX_YERR", &Kplus_ORIVX_YERR, &b_Kplus_ORIVX_YERR);
   fChain->SetBranchAddress("Kplus_ORIVX_ZERR", &Kplus_ORIVX_ZERR, &b_Kplus_ORIVX_ZERR);
   fChain->SetBranchAddress("Kplus_ORIVX_CHI2", &Kplus_ORIVX_CHI2, &b_Kplus_ORIVX_CHI2);
   fChain->SetBranchAddress("Kplus_ORIVX_NDOF", &Kplus_ORIVX_NDOF, &b_Kplus_ORIVX_NDOF);
   fChain->SetBranchAddress("Kplus_ORIVX_COV_", Kplus_ORIVX_COV_, &b_Kplus_ORIVX_COV_);
   fChain->SetBranchAddress("Kplus_IP_ORIVX", &Kplus_IP_ORIVX, &b_Kplus_IP_ORIVX);
   fChain->SetBranchAddress("Kplus_IPCHI2_ORIVX", &Kplus_IPCHI2_ORIVX, &b_Kplus_IPCHI2_ORIVX);
   fChain->SetBranchAddress("Kplus_P", &Kplus_P, &b_Kplus_P);
   fChain->SetBranchAddress("Kplus_PT", &Kplus_PT, &b_Kplus_PT);
   fChain->SetBranchAddress("Kplus_PE", &Kplus_PE, &b_Kplus_PE);
   fChain->SetBranchAddress("Kplus_PX", &Kplus_PX, &b_Kplus_PX);
   fChain->SetBranchAddress("Kplus_PY", &Kplus_PY, &b_Kplus_PY);
   fChain->SetBranchAddress("Kplus_PZ", &Kplus_PZ, &b_Kplus_PZ);
   fChain->SetBranchAddress("Kplus_M", &Kplus_M, &b_Kplus_M);
   fChain->SetBranchAddress("Kplus_ID", &Kplus_ID, &b_Kplus_ID);
   fChain->SetBranchAddress("Kplus_PIDe", &Kplus_PIDe, &b_Kplus_PIDe);
   fChain->SetBranchAddress("Kplus_PIDmu", &Kplus_PIDmu, &b_Kplus_PIDmu);
   fChain->SetBranchAddress("Kplus_PIDK", &Kplus_PIDK, &b_Kplus_PIDK);
   fChain->SetBranchAddress("Kplus_PIDp", &Kplus_PIDp, &b_Kplus_PIDp);
   fChain->SetBranchAddress("Kplus_ProbNNe", &Kplus_ProbNNe, &b_Kplus_ProbNNe);
   fChain->SetBranchAddress("Kplus_ProbNNk", &Kplus_ProbNNk, &b_Kplus_ProbNNk);
   fChain->SetBranchAddress("Kplus_ProbNNp", &Kplus_ProbNNp, &b_Kplus_ProbNNp);
   fChain->SetBranchAddress("Kplus_ProbNNpi", &Kplus_ProbNNpi, &b_Kplus_ProbNNpi);
   fChain->SetBranchAddress("Kplus_ProbNNmu", &Kplus_ProbNNmu, &b_Kplus_ProbNNmu);
   fChain->SetBranchAddress("Kplus_ProbNNghost", &Kplus_ProbNNghost, &b_Kplus_ProbNNghost);
   fChain->SetBranchAddress("Kplus_hasMuon", &Kplus_hasMuon, &b_Kplus_hasMuon);
   fChain->SetBranchAddress("Kplus_isMuon", &Kplus_isMuon, &b_Kplus_isMuon);
   fChain->SetBranchAddress("Kplus_hasRich", &Kplus_hasRich, &b_Kplus_hasRich);
   fChain->SetBranchAddress("Kplus_hasCalo", &Kplus_hasCalo, &b_Kplus_hasCalo);
   fChain->SetBranchAddress("Kplus_TRACK_Type", &Kplus_TRACK_Type, &b_Kplus_TRACK_Type);
   fChain->SetBranchAddress("Kplus_TRACK_Key", &Kplus_TRACK_Key, &b_Kplus_TRACK_Key);
   fChain->SetBranchAddress("Kplus_TRACK_CHI2", &Kplus_TRACK_CHI2, &b_Kplus_TRACK_CHI2);
   fChain->SetBranchAddress("Kplus_TRACK_NDOF", &Kplus_TRACK_NDOF, &b_Kplus_TRACK_NDOF);
   fChain->SetBranchAddress("Kplus_TRACK_CHI2NDOF", &Kplus_TRACK_CHI2NDOF, &b_Kplus_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("Kplus_TRACK_PCHI2", &Kplus_TRACK_PCHI2, &b_Kplus_TRACK_PCHI2);
   fChain->SetBranchAddress("Kplus_TRACK_VeloCHI2NDOF", &Kplus_TRACK_VeloCHI2NDOF, &b_Kplus_TRACK_VeloCHI2NDOF);
   fChain->SetBranchAddress("Kplus_TRACK_TCHI2NDOF", &Kplus_TRACK_TCHI2NDOF, &b_Kplus_TRACK_TCHI2NDOF);
   fChain->SetBranchAddress("Kplus_VELO_UTID", &Kplus_VELO_UTID, &b_Kplus_VELO_UTID);
   fChain->SetBranchAddress("Kplus_TRACK_FirstMeasurementX", &Kplus_TRACK_FirstMeasurementX, &b_Kplus_TRACK_FirstMeasurementX);
   fChain->SetBranchAddress("Kplus_TRACK_FirstMeasurementY", &Kplus_TRACK_FirstMeasurementY, &b_Kplus_TRACK_FirstMeasurementY);
   fChain->SetBranchAddress("Kplus_TRACK_FirstMeasurementZ", &Kplus_TRACK_FirstMeasurementZ, &b_Kplus_TRACK_FirstMeasurementZ);
   fChain->SetBranchAddress("Kplus_TRACK_MatchCHI2", &Kplus_TRACK_MatchCHI2, &b_Kplus_TRACK_MatchCHI2);
   fChain->SetBranchAddress("Kplus_TRACK_GhostProb", &Kplus_TRACK_GhostProb, &b_Kplus_TRACK_GhostProb);
   fChain->SetBranchAddress("Kplus_TRACK_CloneDist", &Kplus_TRACK_CloneDist, &b_Kplus_TRACK_CloneDist);
   fChain->SetBranchAddress("Kplus_TRACK_Likelihood", &Kplus_TRACK_Likelihood, &b_Kplus_TRACK_Likelihood);
   fChain->SetBranchAddress("Kplus_X", &Kplus_X, &b_Kplus_X);
   fChain->SetBranchAddress("Kplus_Y", &Kplus_Y, &b_Kplus_Y);
   fChain->SetBranchAddress("piminus_LOKI_ENERGY", &piminus_LOKI_ENERGY, &b_piminus_LOKI_ENERGY);
   fChain->SetBranchAddress("piminus_LOKI_ETA", &piminus_LOKI_ETA, &b_piminus_LOKI_ETA);
   fChain->SetBranchAddress("piminus_LOKI_PHI", &piminus_LOKI_PHI, &b_piminus_LOKI_PHI);
   fChain->SetBranchAddress("piminus_MINIP", &piminus_MINIP, &b_piminus_MINIP);
   fChain->SetBranchAddress("piminus_MINIPCHI2", &piminus_MINIPCHI2, &b_piminus_MINIPCHI2);
   fChain->SetBranchAddress("piminus_MINIPNEXTBEST", &piminus_MINIPNEXTBEST, &b_piminus_MINIPNEXTBEST);
   fChain->SetBranchAddress("piminus_MINIPCHI2NEXTBEST", &piminus_MINIPCHI2NEXTBEST, &b_piminus_MINIPCHI2NEXTBEST);
   fChain->SetBranchAddress("piminus_AllIP", piminus_AllIP, &b_piminus_AllIP);
   fChain->SetBranchAddress("piminus_AllIPchi2", piminus_AllIPchi2, &b_piminus_AllIPchi2);
   fChain->SetBranchAddress("piminus_OWNPV_X", &piminus_OWNPV_X, &b_piminus_OWNPV_X);
   fChain->SetBranchAddress("piminus_OWNPV_Y", &piminus_OWNPV_Y, &b_piminus_OWNPV_Y);
   fChain->SetBranchAddress("piminus_OWNPV_Z", &piminus_OWNPV_Z, &b_piminus_OWNPV_Z);
   fChain->SetBranchAddress("piminus_OWNPV_XERR", &piminus_OWNPV_XERR, &b_piminus_OWNPV_XERR);
   fChain->SetBranchAddress("piminus_OWNPV_YERR", &piminus_OWNPV_YERR, &b_piminus_OWNPV_YERR);
   fChain->SetBranchAddress("piminus_OWNPV_ZERR", &piminus_OWNPV_ZERR, &b_piminus_OWNPV_ZERR);
   fChain->SetBranchAddress("piminus_OWNPV_CHI2", &piminus_OWNPV_CHI2, &b_piminus_OWNPV_CHI2);
   fChain->SetBranchAddress("piminus_OWNPV_NDOF", &piminus_OWNPV_NDOF, &b_piminus_OWNPV_NDOF);
   fChain->SetBranchAddress("piminus_OWNPV_COV_", piminus_OWNPV_COV_, &b_piminus_OWNPV_COV_);
   fChain->SetBranchAddress("piminus_IP_OWNPV", &piminus_IP_OWNPV, &b_piminus_IP_OWNPV);
   fChain->SetBranchAddress("piminus_IPCHI2_OWNPV", &piminus_IPCHI2_OWNPV, &b_piminus_IPCHI2_OWNPV);
   fChain->SetBranchAddress("piminus_TOPPV_X", &piminus_TOPPV_X, &b_piminus_TOPPV_X);
   fChain->SetBranchAddress("piminus_TOPPV_Y", &piminus_TOPPV_Y, &b_piminus_TOPPV_Y);
   fChain->SetBranchAddress("piminus_TOPPV_Z", &piminus_TOPPV_Z, &b_piminus_TOPPV_Z);
   fChain->SetBranchAddress("piminus_TOPPV_XERR", &piminus_TOPPV_XERR, &b_piminus_TOPPV_XERR);
   fChain->SetBranchAddress("piminus_TOPPV_YERR", &piminus_TOPPV_YERR, &b_piminus_TOPPV_YERR);
   fChain->SetBranchAddress("piminus_TOPPV_ZERR", &piminus_TOPPV_ZERR, &b_piminus_TOPPV_ZERR);
   fChain->SetBranchAddress("piminus_TOPPV_CHI2", &piminus_TOPPV_CHI2, &b_piminus_TOPPV_CHI2);
   fChain->SetBranchAddress("piminus_TOPPV_NDOF", &piminus_TOPPV_NDOF, &b_piminus_TOPPV_NDOF);
   fChain->SetBranchAddress("piminus_TOPPV_COV_", piminus_TOPPV_COV_, &b_piminus_TOPPV_COV_);
   fChain->SetBranchAddress("piminus_IP_TOPPV", &piminus_IP_TOPPV, &b_piminus_IP_TOPPV);
   fChain->SetBranchAddress("piminus_IPCHI2_TOPPV", &piminus_IPCHI2_TOPPV, &b_piminus_IPCHI2_TOPPV);
   fChain->SetBranchAddress("piminus_ORIVX_X", &piminus_ORIVX_X, &b_piminus_ORIVX_X);
   fChain->SetBranchAddress("piminus_ORIVX_Y", &piminus_ORIVX_Y, &b_piminus_ORIVX_Y);
   fChain->SetBranchAddress("piminus_ORIVX_Z", &piminus_ORIVX_Z, &b_piminus_ORIVX_Z);
   fChain->SetBranchAddress("piminus_ORIVX_XERR", &piminus_ORIVX_XERR, &b_piminus_ORIVX_XERR);
   fChain->SetBranchAddress("piminus_ORIVX_YERR", &piminus_ORIVX_YERR, &b_piminus_ORIVX_YERR);
   fChain->SetBranchAddress("piminus_ORIVX_ZERR", &piminus_ORIVX_ZERR, &b_piminus_ORIVX_ZERR);
   fChain->SetBranchAddress("piminus_ORIVX_CHI2", &piminus_ORIVX_CHI2, &b_piminus_ORIVX_CHI2);
   fChain->SetBranchAddress("piminus_ORIVX_NDOF", &piminus_ORIVX_NDOF, &b_piminus_ORIVX_NDOF);
   fChain->SetBranchAddress("piminus_ORIVX_COV_", piminus_ORIVX_COV_, &b_piminus_ORIVX_COV_);
   fChain->SetBranchAddress("piminus_IP_ORIVX", &piminus_IP_ORIVX, &b_piminus_IP_ORIVX);
   fChain->SetBranchAddress("piminus_IPCHI2_ORIVX", &piminus_IPCHI2_ORIVX, &b_piminus_IPCHI2_ORIVX);
   fChain->SetBranchAddress("piminus_P", &piminus_P, &b_piminus_P);
   fChain->SetBranchAddress("piminus_PT", &piminus_PT, &b_piminus_PT);
   fChain->SetBranchAddress("piminus_PE", &piminus_PE, &b_piminus_PE);
   fChain->SetBranchAddress("piminus_PX", &piminus_PX, &b_piminus_PX);
   fChain->SetBranchAddress("piminus_PY", &piminus_PY, &b_piminus_PY);
   fChain->SetBranchAddress("piminus_PZ", &piminus_PZ, &b_piminus_PZ);
   fChain->SetBranchAddress("piminus_M", &piminus_M, &b_piminus_M);
   fChain->SetBranchAddress("piminus_ID", &piminus_ID, &b_piminus_ID);
   fChain->SetBranchAddress("piminus_PIDe", &piminus_PIDe, &b_piminus_PIDe);
   fChain->SetBranchAddress("piminus_PIDmu", &piminus_PIDmu, &b_piminus_PIDmu);
   fChain->SetBranchAddress("piminus_PIDK", &piminus_PIDK, &b_piminus_PIDK);
   fChain->SetBranchAddress("piminus_PIDp", &piminus_PIDp, &b_piminus_PIDp);
   fChain->SetBranchAddress("piminus_ProbNNe", &piminus_ProbNNe, &b_piminus_ProbNNe);
   fChain->SetBranchAddress("piminus_ProbNNk", &piminus_ProbNNk, &b_piminus_ProbNNk);
   fChain->SetBranchAddress("piminus_ProbNNp", &piminus_ProbNNp, &b_piminus_ProbNNp);
   fChain->SetBranchAddress("piminus_ProbNNpi", &piminus_ProbNNpi, &b_piminus_ProbNNpi);
   fChain->SetBranchAddress("piminus_ProbNNmu", &piminus_ProbNNmu, &b_piminus_ProbNNmu);
   fChain->SetBranchAddress("piminus_ProbNNghost", &piminus_ProbNNghost, &b_piminus_ProbNNghost);
   fChain->SetBranchAddress("piminus_hasMuon", &piminus_hasMuon, &b_piminus_hasMuon);
   fChain->SetBranchAddress("piminus_isMuon", &piminus_isMuon, &b_piminus_isMuon);
   fChain->SetBranchAddress("piminus_hasRich", &piminus_hasRich, &b_piminus_hasRich);
   fChain->SetBranchAddress("piminus_hasCalo", &piminus_hasCalo, &b_piminus_hasCalo);
   fChain->SetBranchAddress("piminus_TRACK_Type", &piminus_TRACK_Type, &b_piminus_TRACK_Type);
   fChain->SetBranchAddress("piminus_TRACK_Key", &piminus_TRACK_Key, &b_piminus_TRACK_Key);
   fChain->SetBranchAddress("piminus_TRACK_CHI2", &piminus_TRACK_CHI2, &b_piminus_TRACK_CHI2);
   fChain->SetBranchAddress("piminus_TRACK_NDOF", &piminus_TRACK_NDOF, &b_piminus_TRACK_NDOF);
   fChain->SetBranchAddress("piminus_TRACK_CHI2NDOF", &piminus_TRACK_CHI2NDOF, &b_piminus_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("piminus_TRACK_PCHI2", &piminus_TRACK_PCHI2, &b_piminus_TRACK_PCHI2);
   fChain->SetBranchAddress("piminus_TRACK_VeloCHI2NDOF", &piminus_TRACK_VeloCHI2NDOF, &b_piminus_TRACK_VeloCHI2NDOF);
   fChain->SetBranchAddress("piminus_TRACK_TCHI2NDOF", &piminus_TRACK_TCHI2NDOF, &b_piminus_TRACK_TCHI2NDOF);
   fChain->SetBranchAddress("piminus_VELO_UTID", &piminus_VELO_UTID, &b_piminus_VELO_UTID);
   fChain->SetBranchAddress("piminus_TRACK_FirstMeasurementX", &piminus_TRACK_FirstMeasurementX, &b_piminus_TRACK_FirstMeasurementX);
   fChain->SetBranchAddress("piminus_TRACK_FirstMeasurementY", &piminus_TRACK_FirstMeasurementY, &b_piminus_TRACK_FirstMeasurementY);
   fChain->SetBranchAddress("piminus_TRACK_FirstMeasurementZ", &piminus_TRACK_FirstMeasurementZ, &b_piminus_TRACK_FirstMeasurementZ);
   fChain->SetBranchAddress("piminus_TRACK_MatchCHI2", &piminus_TRACK_MatchCHI2, &b_piminus_TRACK_MatchCHI2);
   fChain->SetBranchAddress("piminus_TRACK_GhostProb", &piminus_TRACK_GhostProb, &b_piminus_TRACK_GhostProb);
   fChain->SetBranchAddress("piminus_TRACK_CloneDist", &piminus_TRACK_CloneDist, &b_piminus_TRACK_CloneDist);
   fChain->SetBranchAddress("piminus_TRACK_Likelihood", &piminus_TRACK_Likelihood, &b_piminus_TRACK_Likelihood);
   fChain->SetBranchAddress("piminus_X", &piminus_X, &b_piminus_X);
   fChain->SetBranchAddress("piminus_Y", &piminus_Y, &b_piminus_Y);
   fChain->SetBranchAddress("nCandidate", &nCandidate, &b_nCandidate);
   fChain->SetBranchAddress("totCandidates", &totCandidates, &b_totCandidates);
   fChain->SetBranchAddress("EventInSequence", &EventInSequence, &b_EventInSequence);
   fChain->SetBranchAddress("runNumber", &runNumber, &b_runNumber);
   fChain->SetBranchAddress("eventNumber", &eventNumber, &b_eventNumber);
   fChain->SetBranchAddress("BCID", &BCID, &b_BCID);
   fChain->SetBranchAddress("BCType", &BCType, &b_BCType);
   fChain->SetBranchAddress("OdinTCK", &OdinTCK, &b_OdinTCK);
   fChain->SetBranchAddress("L0DUTCK", &L0DUTCK, &b_L0DUTCK);
   fChain->SetBranchAddress("HLT1TCK", &HLT1TCK, &b_HLT1TCK);
   fChain->SetBranchAddress("HLT2TCK", &HLT2TCK, &b_HLT2TCK);
   fChain->SetBranchAddress("GpsTime", &GpsTime, &b_GpsTime);
   fChain->SetBranchAddress("GpsYear", &GpsYear, &b_GpsYear);
   fChain->SetBranchAddress("GpsMonth", &GpsMonth, &b_GpsMonth);
   fChain->SetBranchAddress("GpsDay", &GpsDay, &b_GpsDay);
   fChain->SetBranchAddress("GpsHour", &GpsHour, &b_GpsHour);
   fChain->SetBranchAddress("GpsMinute", &GpsMinute, &b_GpsMinute);
   fChain->SetBranchAddress("GpsSecond", &GpsSecond, &b_GpsSecond);
   fChain->SetBranchAddress("TriggerType", &TriggerType, &b_TriggerType);
   fChain->SetBranchAddress("Polarity", &Polarity, &b_Polarity);
   fChain->SetBranchAddress("PVX", PVX, &b_PVX);
   fChain->SetBranchAddress("PVY", PVY, &b_PVY);
   fChain->SetBranchAddress("PVZ", PVZ, &b_PVZ);
   fChain->SetBranchAddress("PVXERR", PVXERR, &b_PVXERR);
   fChain->SetBranchAddress("PVYERR", PVYERR, &b_PVYERR);
   fChain->SetBranchAddress("PVZERR", PVZERR, &b_PVZERR);
   fChain->SetBranchAddress("PVCHI2", PVCHI2, &b_PVCHI2);
   fChain->SetBranchAddress("PVNDOF", PVNDOF, &b_PVNDOF);
   fChain->SetBranchAddress("PVNTRACKS", PVNTRACKS, &b_PVNTRACKS);
   fChain->SetBranchAddress("nPVs", &nPVs, &b_nPVs);
   fChain->SetBranchAddress("nTracks", &nTracks, &b_nTracks);
   fChain->SetBranchAddress("nLongTracks", &nLongTracks, &b_nLongTracks);
   fChain->SetBranchAddress("nDownstreamTracks", &nDownstreamTracks, &b_nDownstreamTracks);
   fChain->SetBranchAddress("nUpstreamTracks", &nUpstreamTracks, &b_nUpstreamTracks);
   fChain->SetBranchAddress("nVeloTracks", &nVeloTracks, &b_nVeloTracks);
   fChain->SetBranchAddress("nTTracks", &nTTracks, &b_nTTracks);
   fChain->SetBranchAddress("nBackTracks", &nBackTracks, &b_nBackTracks);
   fChain->SetBranchAddress("nRich1Hits", &nRich1Hits, &b_nRich1Hits);
   fChain->SetBranchAddress("nRich2Hits", &nRich2Hits, &b_nRich2Hits);
   fChain->SetBranchAddress("nVeloClusters", &nVeloClusters, &b_nVeloClusters);
   fChain->SetBranchAddress("nITClusters", &nITClusters, &b_nITClusters);
   fChain->SetBranchAddress("nTTClusters", &nTTClusters, &b_nTTClusters);
   fChain->SetBranchAddress("nOTClusters", &nOTClusters, &b_nOTClusters);
   fChain->SetBranchAddress("nSPDHits", &nSPDHits, &b_nSPDHits);
   fChain->SetBranchAddress("nMuonCoordsS0", &nMuonCoordsS0, &b_nMuonCoordsS0);
   fChain->SetBranchAddress("nMuonCoordsS1", &nMuonCoordsS1, &b_nMuonCoordsS1);
   fChain->SetBranchAddress("nMuonCoordsS2", &nMuonCoordsS2, &b_nMuonCoordsS2);
   fChain->SetBranchAddress("nMuonCoordsS3", &nMuonCoordsS3, &b_nMuonCoordsS3);
   fChain->SetBranchAddress("nMuonCoordsS4", &nMuonCoordsS4, &b_nMuonCoordsS4);
   fChain->SetBranchAddress("nMuonTracks", &nMuonTracks, &b_nMuonTracks);
   fChain->SetBranchAddress("StrippingBetaSBs2JpsiPhiDetachedLineDecision", &StrippingBetaSBs2JpsiPhiDetachedLineDecision, &b_StrippingBetaSBs2JpsiPhiDetachedLineDecision);
   fChain->SetBranchAddress("StrippingBetaSBd2JpsiKstarDetachedLineDecision", &StrippingBetaSBd2JpsiKstarDetachedLineDecision, &b_StrippingBetaSBd2JpsiKstarDetachedLineDecision);
   fChain->SetBranchAddress("StrippingBetaSBu2JpsiKDetachedLineDecision", &StrippingBetaSBu2JpsiKDetachedLineDecision, &b_StrippingBetaSBu2JpsiKDetachedLineDecision);
   Notify();
}

Bool_t selection_time::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void selection_time::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t selection_time::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef selection_time_cxx
