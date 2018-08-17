#ifndef QIE11_SAMPLE_H
#define QIE11_SAMPLE_H

#include "HcalSample.h"

class QIE11Sample : public HcalSample {
  
 public:
  
  QIE11Sample();
  QIE11Sample(Collection& c, unsigned short i, short j);
  
  float allFC()     ;
  float energy()    ;
  float gain()      ;
  float fc()        ;
  float nomFC()     ;
  float pedFC()     ;
  float rcGain()    ;

  int   adc()       ;
  int   capid()     ;
  int   dv()        ;
  int   er()        ;
  int   fiber()     ;
  int   fiberChan() ;
  int   raw()       ;

  int getRawIndex () { return m_raw_index; }
  int getTimeSlice() { return m_timeslice; }

};

#endif 
