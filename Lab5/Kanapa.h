#ifndef KanapaH
#define KanapaH
#include "Sofa.h"
#include "Lozko.h"

//kanapa składa się z elementów charakterystycznych dla sofy i łózka, a one posiadają składowe mebla
class Kanapa: public Sofa, public Lozko
{
public:
	//konstruktor ustawiający rozmiary mebla. w tym szerokosci spania - jest to parametr charakterystyczny dla lozka oraz siedziska dla sofy, czyli elementow, z ktorych kanapa jest stworzona. 
	Kanapa(const int szerokoscToSet, const int wysokoscToSet, const int dlugoscToSet, const int siedziskoToSet, const int szerokoscSpaniaToSet);
	//funkcja odpowiadajaca za modyfikacje strumienia, tak aby wypisywal informacje na temat kanapy. Wypisuje informacje o wszystkich skladowych z jakich sklada sie kanapa(mebel, sofa, lozko).
	void writeOutput( std::ostream & output) const;
	//wyświetla informacje o klasie usuwanego obiektu w trakcie jego destrukcji
	~Kanapa();
};
#endif
