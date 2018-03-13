#include <cmath>
#include "Trojkat.h"
Trojkat::Trojkat( double a, double b, double c ) {
  m_sides[0] = a;
  m_sides[1] = b;
  m_sides[2] = c;
}

double Trojkat::polePow() const {  
  double polowaObwodu = 0.5* ( m_sides[0] + m_sides[1] + m_sides[2]);
  return std::sqrt( polowaObwodu * ( polowaObwodu - m_sides[0] )*( polowaObwodu - m_sides[1] )*( polowaObwodu - m_sides[2] ) );  
}
