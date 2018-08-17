#include "QIE11Sample.h"

QIE11Sample::QIE11Sample():
  HcalSample()
{}

QIE11Sample::QIE11Sample(Collection& c, unsigned short i, short j):
  HcalSample(c, i, j)
{}

float QIE11Sample::allFC()     {return m_collection -> GetData() -> QIE11DigiAllFC     -> at(m_raw_index)[m_timeslice];}
float QIE11Sample::energy()    {return m_collection -> GetData() -> QIE11DigiEnergy    -> at(m_raw_index)[m_timeslice];}
float QIE11Sample::gain()      {return m_collection -> GetData() -> QIE11DigiGain      -> at(m_raw_index)[m_timeslice];}
float QIE11Sample::fc()        {return m_collection -> GetData() -> QIE11DigiFC        -> at(m_raw_index)[m_timeslice];}
float QIE11Sample::nomFC()     {return m_collection -> GetData() -> QIE11DigiNomFC     -> at(m_raw_index)[m_timeslice];}
float QIE11Sample::pedFC()     {return m_collection -> GetData() -> QIE11DigiPedFC     -> at(m_raw_index)[m_timeslice];}
float QIE11Sample::rcGain()    {return m_collection -> GetData() -> QIE11DigiRCGain    -> at(m_raw_index)[m_timeslice];}

int   QIE11Sample::adc()       {return m_collection -> GetData() -> QIE11DigiADC       -> at(m_raw_index)[m_timeslice];}
int   QIE11Sample::capid()     {return m_collection -> GetData() -> QIE11DigiCapID     -> at(m_raw_index)[m_timeslice];}
int   QIE11Sample::dv()        {return m_collection -> GetData() -> QIE11DigiDV        -> at(m_raw_index)[m_timeslice];}
int   QIE11Sample::er()        {return m_collection -> GetData() -> QIE11DigiER        -> at(m_raw_index)[m_timeslice];}
int   QIE11Sample::fiber()     {return m_collection -> GetData() -> QIE11DigiFiber     -> at(m_raw_index)[m_timeslice];}
int   QIE11Sample::fiberChan() {return m_collection -> GetData() -> QIE11DigiFiberChan -> at(m_raw_index)[m_timeslice];}
int   QIE11Sample::raw()       {return m_collection -> GetData() -> QIE11DigiRaw       -> at(m_raw_index)[m_timeslice];}
