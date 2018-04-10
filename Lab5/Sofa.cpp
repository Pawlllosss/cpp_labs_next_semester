#include "Sofa.h"

Sofa::Sofa(const int szerokoscToSet, const int wysokoscToSet, const int dlugoscToSet, const int siedziskoToSet) : Mebel(szerokoscToSet, wysokoscToSet, dlugoscToSet), _siedzisko(siedziskoToSet)
{
}

void Sofa::writeOutput( std::ostream & output) const
{
	output<<"Sofa: ";

	Mebel::writeOutput(output);

	output<<"  siedzisko: "<<_siedzisko;
}

Sofa::~Sofa()
{
	std::cout<<"~Sofa"<<std::endl;
}
