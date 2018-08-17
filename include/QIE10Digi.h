#ifndef QIE10_DIGI_H
#define QIE10_DIGI_H

#include "HcalDigi.h"
#include "QIE10Sample.h"

class QIE10Digi : public HcalDigi {

 public:
  QIE10Digi();
  QIE10Digi(Collection& c, unsigned short i, short j = 0);
  
  float energy() ;
  float recHitTime  () ;
  int   ieta  () ;
  int   iphi  () ;
  float eta  () ;
  float phi  () ;
  int   depth () ;
  int   subdet () ;
  int   size  () ;
  int   presamples() ;
  int   electronicsId();
  int   rawId();
  float fc (int i);
  int adc(int i);
  int dv (int i);
  int er (int i);
  int capid (int i);
  
  int getRawIndex () { return m_raw_index; }

  QIE10Sample operator[] ( int i ){
    return QIE10Sample( *m_collection, m_raw_index, i );
  }
  
};

#endif 
