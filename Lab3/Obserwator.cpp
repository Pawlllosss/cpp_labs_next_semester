#include "Obserwator.h"

//Obserwator



//Obserwator Licznik

int ObserwatorLicznik::suma()
{
	return m_suma;
}

void ObserwatorLicznik::obserwuj(const int dane)
{
	m_suma+=dane;
}

//Obserwator Wypisywacz


void ObserwatorWypisywacz::obserwuj(const int dane)
{
	std::cout<<dane<<" ";
}
