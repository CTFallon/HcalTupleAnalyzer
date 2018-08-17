#include "QIE10Digi.h"

QIE10Digi::QIE10Digi():
  HcalDigi(){}

QIE10Digi::QIE10Digi(Collection& c, unsigned short i, short j ):
  HcalDigi(c,i){}

//float QIE10Digi::energy       () {return m_collection -> GetData() -> QIE10DigiRecEnergy     -> at(m_raw_index);}
//float QIE10Digi::recHitTime   () {return m_collection -> GetData() -> QIE10DigiRecTime       -> at(m_raw_index);}
int   QIE10Digi::ieta         () {return m_collection -> GetData() -> QIE10DigiIEta          -> at(m_raw_index);}
int   QIE10Digi::iphi         () {return m_collection -> GetData() -> QIE10DigiIPhi          -> at(m_raw_index);}
//float QIE10Digi::eta          () {return m_collection -> GetData() -> QIE10DigiEta           -> at(m_raw_index);}
//float QIE10Digi::phi          () {return m_collection -> GetData() -> QIE10DigiPhi           -> at(m_raw_index);}
int   QIE10Digi::depth        () {return m_collection -> GetData() -> QIE10DigiDepth         -> at(m_raw_index);}
int   QIE10Digi::subdet       () {return m_collection -> GetData() -> QIE10DigiSubdet        -> at(m_raw_index);}
//int   QIE10Digi::size         () {return m_collection -> GetData() -> QIE10DigiSize          -> at(m_raw_index);}
//int   QIE10Digi::presamples   () {return m_collection -> GetData() -> QIE10DigiPresamples    -> at(m_raw_index);}
int   QIE10Digi::rawId        () {return m_collection -> GetData() -> QIE10DigiRawID         -> at(m_raw_index);}
int   QIE10Digi::electronicsId() {return -1; }
float QIE10Digi::fc      (int i) {return m_collection -> GetData() -> QIE10DigiFC            -> at(m_raw_index)[i];}
int   QIE10Digi::adc     (int i) {return m_collection -> GetData() -> QIE10DigiADC           -> at(m_raw_index)[i];}
//int   QIE10Digi::dv      (int i) {return m_collection -> GetData() -> QIE10DigiDV            -> at(m_raw_index)[i];}
//int   QIE10Digi::er      (int i) {return m_collection -> GetData() -> QIE10DigiER            -> at(m_raw_index)[i];}
int   QIE10Digi::capid   (int i) {return m_collection -> GetData() -> QIE10DigiCapID         -> at(m_raw_index)[i];}

//The following methods are defaulted to 0 do that the compiler does not produce the error "undefined reference to 'vtable for QIE10Digi'
float QIE10Digi::energy       () {return 0;}
float QIE10Digi::recHitTime   () {return 0;}
float QIE10Digi::eta          () {return 0;}
float QIE10Digi::phi          () {return 0;}
int   QIE10Digi::size         () {return 0;}
int   QIE10Digi::presamples   () {return 0;}
int   QIE10Digi::dv      (int i) {return 0;}
int   QIE10Digi::er      (int i) {return 0;}
