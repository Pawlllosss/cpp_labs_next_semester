#ifndef Trojkat_h
#define Trojkat_h

#include "Ksztalt.h"

class Trojkat : public Ksztalt {
public:
  Trojkat( double a, double b, double c );
  virtual double polePow() const;
  virtual void wypisz( std::ostream& s ) const { s << "Trojkat bokach:" << m_sides[0] << " " << m_sides[1] << " " << m_sides[2] << std::endl; }
private:
  double m_sides[3];  
};

#endif
