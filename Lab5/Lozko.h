#ifndef LozkoH
#define LozkoH

#include "Mebel.h"

//mamy tutaj styczność z dziedziczeniem w formie diamentu, dlatego ta klasa musi dziedziczyć wirtualnie Mebel
class Lozko : public virtual Mebel
{
public:
	//konstruktor ustawiający rozmiary mebla, w tym szerokosci spania - jest to parametr charakterystyczny dla lozka
	Lozko(const int szerokoscToSet, const int wysokoscToSet, const int dlugoscToSet, const int szerokoscSpaniaToSet);
	//funkcja odpowiadajaca za modyfikacje strumienia, tak aby wypisywal informacje na temat sofy
	void writeOutput( std::ostream & output) const;
	//wyświetla informacje o klasie usuwanego obiektu w trakcie jego destrukcji
	~Lozko();
private:
	//parametr lozka. szerokosc, dlugosc, wysokosc dziedziczone po meblu
	int _szerokoscSpania;
};
#endif
