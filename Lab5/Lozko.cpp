#include "Lozko.h"

Lozko::Lozko(const int szerokoscToSet, const int wysokoscToSet, const int dlugoscToSet, const int szerokoscSpaniaToSet) : Mebel(szerokoscToSet, wysokoscToSet, dlugoscToSet), _szerokoscSpania					(szerokoscSpaniaToSet)
{
}

void Lozko::writeOutput( std::ostream & output) const
{
	output<<"Lozko: ";

	Mebel::writeOutput(output);

	output<<"  sz.spania: "<<_szerokoscSpania;
}

Lozko::~Lozko()
{
	std::cout<<"~Lozko"<<std::endl;
}
