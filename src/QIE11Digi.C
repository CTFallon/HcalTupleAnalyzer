#include "QIE11Digi.h"

QIE11Digi::QIE11Digi():
  HcalDigi(){}

QIE11Digi::QIE11Digi(Collection& c, unsigned short i, short j ):
  HcalDigi(c,i){}

//float QIE11Digi::energy       () {return m_collection -> GetData() -> QIE11DigiRecEnergy     -> at(m_raw_index);}
//float QIE11Digi::recHitTime   () {return m_collection -> GetData() -> QIE11DigiRecTime       -> at(m_raw_index);}
int   QIE11Digi::ieta         () {return m_collection -> GetData() -> QIE11DigiIEta          -> at(m_raw_index);}
int   QIE11Digi::iphi         () {return m_collection -> GetData() -> QIE11DigiIPhi          -> at(m_raw_index);}
//float QIE11Digi::eta          () {return m_collection -> GetData() -> QIE11DigiEta           -> at(m_raw_index);}
//float QIE11Digi::phi          () {return m_collection -> GetData() -> QIE11DigiPhi           -> at(m_raw_index);}
int   QIE11Digi::depth        () {return m_collection -> GetData() -> QIE11DigiDepth         -> at(m_raw_index);}
int   QIE11Digi::subdet       () {return m_collection -> GetData() -> QIE11DigiSubdet        -> at(m_raw_index);}
//int   QIE11Digi::size         () {return m_collection -> GetData() -> QIE11DigiSize          -> at(m_raw_index);}
//int   QIE11Digi::presamples   () {return m_collection -> GetData() -> QIE11DigiPresamples    -> at(m_raw_index);}
int   QIE11Digi::rawId        () {return m_collection -> GetData() -> QIE11DigiRawID         -> at(m_raw_index);}
int   QIE11Digi::electronicsId() {return -1; }
float QIE11Digi::fc      (int i) {return m_collection -> GetData() -> QIE11DigiFC            -> at(m_raw_index)[i];}
int   QIE11Digi::adc     (int i) {return m_collection -> GetData() -> QIE11DigiADC           -> at(m_raw_index)[i];}
//int   QIE11Digi::dv      (int i) {return m_collection -> GetData() -> QIE11DigiDV            -> at(m_raw_index)[i];}
//int   QIE11Digi::er      (int i) {return m_collection -> GetData() -> QIE11DigiER            -> at(m_raw_index)[i];}
int   QIE11Digi::capid   (int i) {return m_collection -> GetData() -> QIE11DigiCapID         -> at(m_raw_index)[i];}

//The following methods are defaulted to 0 do that the compiler does not produce the error "undefined reference to 'vtable for QIE11Digi'
float QIE11Digi::energy       () {return 0;}
float QIE11Digi::recHitTime   () {return 0;}
float QIE11Digi::eta          () {return 0;}
float QIE11Digi::phi          () {return 0;}
int   QIE11Digi::size         () {return 0;}
int   QIE11Digi::presamples   () {return 0;}
int   QIE11Digi::dv      (int i) {return 0;}
int   QIE11Digi::er      (int i) {return 0;}
