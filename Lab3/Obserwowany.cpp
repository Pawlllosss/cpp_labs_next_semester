#include "Obserwowany.h"



void Obserwowany::dodajObserwatora(Obserwator * obserwator_do_dodania)
{
	 obserwatorzy.push_back(obserwator_do_dodania);
}

void Obserwowany::noweDaneNadeszly(const int dane) const
{
	
	for(unsigned int i = 0 ; i < obserwatorzy.size() ; i++ )
		obserwatorzy[i]->obserwuj(dane);
}
