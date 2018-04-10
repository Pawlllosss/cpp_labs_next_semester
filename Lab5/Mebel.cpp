#include "Mebel.h"

Mebel::Mebel(const int szerokoscToSet, const int wysokoscToSet, const int dlugoscToSet): _szerokosc(szerokoscToSet), _wysokosc(wysokoscToSet), _dlugosc(dlugoscToSet)
{
}

void Mebel::writeOutput( std::ostream & output) const
{
	output<<"Mebel: sz:"<<_szerokosc<<" wys:"<<_wysokosc<<" dl:"<<_dlugosc;
}

Mebel::~Mebel()
{
	std::cout<<"~Mebel"<<std::endl;
}

//przeładowany operator <<
std::ostream & operator << (std::ostream& output, const Mebel & mebelToPrint)
{
	mebelToPrint.writeOutput(output);
	return output;
}
