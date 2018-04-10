#ifndef SofaH
#define SofaH

#include "Mebel.h"

//mamy tutaj styczność z dziedziczeniem w formie diamentu, dlatego ta klasa musi dziedziczyć wirtualnie Mebel
class Sofa : public virtual Mebel
{
public:
	//konstruktor ustawiający rozmiary mebla, w tym siedziska - jest to parametr charakterystyczny dla sofy
	Sofa(const int szerokoscToSet, const int wysokoscToSet, const int dlugoscToSet, const int siedziskoToSet);
	//funkcja odpowiadajaca za modyfikacje strumienia, tak aby wypisywal informacje na temat sofy
	void writeOutput( std::ostream & output) const;
	//wyświetla informacje o klasie usuwanego obiektu w trakcie jego destrukcji
	~Sofa();
private:
	//parametr sofy. szerokosc, dlugosc, wysokosc dziedziczone po meblu
	int _siedzisko;
};
#endif
