#ifndef Kwadrat_h
#define Kwadrat_h

#include "Ksztalt.h"

class Kwadrat : public Ksztalt {
 public:
 Kwadrat( double a ): m_a( a ) {}
  virtual double polePow() const { return m_a * m_a; }
  virtual void wypisz( std::ostream& s ) const { s << "Kwadrat o boku:" << m_a << std::endl; }
 private:
  double m_a;
};

#endif
