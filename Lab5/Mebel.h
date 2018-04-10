#ifndef MebelH
#define MebelH

#include <iostream>

class Mebel
{
public:
	//konstruktor obiektu klasy Mebel ustawia szerokosc, wysokosc i dlugosc mebla
	Mebel(const int szerokoscToSet, const int wysokoscToSet, const int dlugoscToSet);
	//funkcja odpowiadajaca za modyfikacje strumienia, tak aby wypisywal informacje na temat mebla. Jest wirtualna, aby umozliwic odpowiednia modyfikacje strumienia dla klas pochodnych
	virtual void writeOutput( std::ostream & output) const;
	//przyjaźń z globalnie przeładowanym operator << dla strumienia std::ostream
	friend std::ostream & operator << (std::ostream& output, const Mebel & mebelToPrint);
	//destruktor wypisujący klasę usuwanego obiektu
	virtual ~Mebel();
private:
	//parametry opisujące wymiary mebla
	int _szerokosc;
	int _wysokosc;
	int _dlugosc;
};
#endif
