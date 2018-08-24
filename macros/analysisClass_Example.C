#include "analysisClass.h"
#include "HcalTupleTree.h"
#include "QIE11Digi.h"
#include "QIE10Digi.h"
#include "HBHEDigi.h"

void analysisClass::loop(){

  //--------------------------------------------------------------------------------
  // Configurables
  //--------------------------------------------------------------------------------
  const double recHitEnergyCut = 0.;
  
  //--------------------------------------------------------------------------------
  // Declare HCAL tree(s)
  //--------------------------------------------------------------------------------

  HcalTupleTree * tuple_tree = getTree<HcalTupleTree>("tuple_tree");
  int n_events = tuple_tree -> fChain -> GetEntries();
  std::cout << "n events = " << n_events << std::endl;
  
  //--------------------------------------------------------------------------------
  // Turn on/off branches
  //--------------------------------------------------------------------------------
  
  tuple_tree -> fChain -> SetBranchStatus("*"               , kFALSE);
  tuple_tree -> fChain -> SetBranchStatus("run"             , kTRUE);
  tuple_tree -> fChain -> SetBranchStatus("event"           , kTRUE);
  tuple_tree -> fChain -> SetBranchStatus("ls"              , kTRUE);
  tuple_tree -> fChain -> SetBranchStatus("QIE11DigiIEta"      , kTRUE);
  tuple_tree -> fChain -> SetBranchStatus("QIE11DigiIPhi"      , kTRUE);
  tuple_tree -> fChain -> SetBranchStatus("HBHEDigiIEta", kTRUE);
  tuple_tree -> fChain -> SetBranchStatus("HBHEDigiIPhi", kTRUE);
  //tuple_tree -> fChain -> SetBranchStatus("QIE11DigiSize"      , kTRUE);
  //tuple_tree -> fChain -> SetBranchStatus("QIE11DigiRecEnergy" , kTRUE);

  //--------------------------------------------------------------------------------
  // Histograms
  //--------------------------------------------------------------------------------

  TH2F * h2_QIE11_ietaiphi = makeTH2F("QIE11_ietaiphi",80,-40,40,100,0,100);
  h2_QIE11_ietaiphi -> SetTitle("QIE11;iEta;iPhi");
  TH2F * h2_QIE10_ietaiphi = makeTH2F("QIE10_ietaiphi",80,-40,40,100,0,100);
  h2_QIE10_ietaiphi -> SetTitle("QIE10;iEta;iPhi");
  TH2F * h2_HBHE_ietaiphi = makeTH2F("HBHE_ietaiphi",80,-40,40,73,0,73);
  h2_HBHE_ietaiphi -> SetTitle("HBHE;iEta;iPhi");

  //--------------------------------------------------------------------------------
  // Loop
  //--------------------------------------------------------------------------------
  int nQIE11Digis;
  int nQIE10Digis;
  int nHBHEDigis;
  for (int i = 0; i < n_events; ++i){
    
    tuple_tree -> GetEntry(i);
    if ( (i + 1) % 10000 == 0 ) std::cout << "Processing event " << i + 1 << "/" << n_events << std::endl;

    CollectionPtr qie11Digis (new Collection(*tuple_tree, tuple_tree -> QIE11DigiIEta -> size()));
    CollectionPtr qie10Digis (new Collection(*tuple_tree, tuple_tree -> QIE10DigiIEta -> size()));
    CollectionPtr hbheDigis (new Collection(*tuple_tree, tuple_tree -> HBHEDigiIEta -> size()));
    //std::cout << "QIE11DigiIEtaSize = " << tuple_tree->QIE11DigiIEta->size() <<std::endl;
    nQIE11Digis = qie11Digis -> GetSize();
    nQIE10Digis = qie10Digis -> GetSize();
    nHBHEDigis = hbheDigis -> GetSize();

    for (int iQIE11Digi = 0; iQIE11Digi < nQIE11Digis; ++iQIE11Digi){
      QIE11Digi qie11Digi = qie11Digis -> GetConstituent<QIE11Digi>(iQIE11Digi);
      h2_QIE11_ietaiphi -> Fill( qie11Digi.ieta(), qie11Digi.iphi());
    };

    for (int iQIE10Digi = 0; iQIE10Digi < nQIE10Digis; ++iQIE10Digi){
      QIE10Digi qie10Digi = qie10Digis -> GetConstituent<QIE10Digi>(iQIE10Digi);
      h2_QIE10_ietaiphi -> Fill( qie10Digi.ieta(), qie10Digi.iphi());
    };

    for (int iHBHEDigi = 0; iHBHEDigi < nHBHEDigis; ++iHBHEDigi){
      HBHEDigi hbheDigi = hbheDigis -> GetConstituent<HBHEDigi>(iHBHEDigi);
      h2_HBHE_ietaiphi -> Fill( hbheDigi.ieta(), hbheDigi.iphi());
    };
  };  
}
  
