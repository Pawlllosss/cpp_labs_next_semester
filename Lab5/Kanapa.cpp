#include "Kanapa.h"

Kanapa::Kanapa(const int szerokoscToSet, const int wysokoscToSet, const int dlugoscToSet, const int siedziskoToSet, const int szerokoscSpaniaToSet): Mebel(szerokoscToSet, wysokoscToSet, dlugoscToSet), Sofa(szerokoscToSet, wysokoscToSet, dlugoscToSet, siedziskoToSet), Lozko(szerokoscToSet, wysokoscToSet, dlugoscToSet, szerokoscSpaniaToSet)
{

}

void Kanapa::writeOutput( std::ostream & output) const
{
	output<<"jako: ";

	Mebel::writeOutput(output);

	output<<std::endl<<" jako ";
	Sofa::writeOutput(output);

	output<<std::endl<<" jako ";
	Lozko::writeOutput(output);
}

Kanapa::~Kanapa()
{
	std::cout<<"~Kanapa"<<std::endl;
}
