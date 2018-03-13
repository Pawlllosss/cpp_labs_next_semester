#ifndef Ksztalt_h
#define Ksztalt_h
#include <iostream>

class Ksztalt {
 public:
  virtual double polePow() const = 0;
  virtual void wypisz( std::ostream& s ) const = 0;
  virtual ~Ksztalt() {}
};


void wypisz( const Ksztalt& k );

#endif
