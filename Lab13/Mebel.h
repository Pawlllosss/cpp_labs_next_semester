#ifndef MebelH
#define MebelH
#include <vector>
#include <iostream>

//przechowuje informacje o rodzaju mebla, jego wymiarach i opis
class Mebel
{
public:
	//konstruktor ustawiający rodzaj mebla, jego wymiary i opis
	Mebel(const std::string & type, const unsigned x, const unsigned y, const unsigned z, const std::string & description);

	//przyjaźń z operatorem << , pozwala na dostęp do parametrów mebla 
	//dla strumienia odpowiedzialnego za wypisywanie na ekran lub do plików jego parametrów
	friend std::ostream & operator << (std::ostream & stream, const Mebel & obj);
private:
	//rodzaj mebla
	std::string _type;
	//opis mebla
	std::string _description;
	//wymiary mebla
	unsigned _x, _y, _z;
};


//deklaracja przeładowanego operator >> pozwalającego na wczytywanie z pliku danych o meblach do wektora
std::istream & operator >> (std::istream & stream, std::vector<Mebel> & mebel_vector);
#endif
