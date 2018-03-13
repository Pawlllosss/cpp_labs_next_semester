#ifndef Kolo_h
#define Kolo_h

#include "Ksztalt.h"

class Kolo : public Ksztalt {
public:
  Kolo( double r ) : m_r( r ) {}
  virtual double polePow() const { return m_r*m_r*3.1415; }
  virtual void wypisz( std::ostream& s ) const { s << "Kolo o promieniu:" << m_r << std::endl; }
private:
  double m_r;  
};

#endif
