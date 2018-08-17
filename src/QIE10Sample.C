#include "QIE10Sample.h"

QIE10Sample::QIE10Sample():
  HcalSample()
{}

QIE10Sample::QIE10Sample(Collection& c, unsigned short i, short j):
  HcalSample(c, i, j)
{}

float QIE10Sample::allFC()     {return m_collection -> GetData() -> QIE10DigiAllFC     -> at(m_raw_index)[m_timeslice];}
float QIE10Sample::energy()    {return m_collection -> GetData() -> QIE10DigiEnergy    -> at(m_raw_index)[m_timeslice];}
float QIE10Sample::gain()      {return m_collection -> GetData() -> QIE10DigiGain      -> at(m_raw_index)[m_timeslice];}
float QIE10Sample::fc()        {return m_collection -> GetData() -> QIE10DigiFC        -> at(m_raw_index)[m_timeslice];}
float QIE10Sample::nomFC()     {return m_collection -> GetData() -> QIE10DigiNomFC     -> at(m_raw_index)[m_timeslice];}
float QIE10Sample::pedFC()     {return m_collection -> GetData() -> QIE10DigiPedFC     -> at(m_raw_index)[m_timeslice];}
float QIE10Sample::rcGain()    {return m_collection -> GetData() -> QIE10DigiRCGain    -> at(m_raw_index)[m_timeslice];}

int   QIE10Sample::adc()       {return m_collection -> GetData() -> QIE10DigiADC       -> at(m_raw_index)[m_timeslice];}
int   QIE10Sample::capid()     {return m_collection -> GetData() -> QIE10DigiCapID     -> at(m_raw_index)[m_timeslice];}
int   QIE10Sample::dv()        {return m_collection -> GetData() -> QIE10DigiDV        -> at(m_raw_index)[m_timeslice];}
int   QIE10Sample::er()        {return m_collection -> GetData() -> QIE10DigiER        -> at(m_raw_index)[m_timeslice];}
int   QIE10Sample::fiber()     {return m_collection -> GetData() -> QIE10DigiFiber     -> at(m_raw_index)[m_timeslice];}
int   QIE10Sample::fiberChan() {return m_collection -> GetData() -> QIE10DigiFiberChan -> at(m_raw_index)[m_timeslice];}
int   QIE10Sample::raw()       {return m_collection -> GetData() -> QIE10DigiRaw       -> at(m_raw_index)[m_timeslice];}
