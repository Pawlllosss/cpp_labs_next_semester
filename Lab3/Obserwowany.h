#ifndef ObserwowanyH
#define ObserwowanyH
#include <vector>
#include "Obserwator.h"


class Obserwowany
{
public:
	//dodaje obserwatora do vectora - zapamiętuje go w obiekcie( obserwator pozwala na wypisywanie odczytywanych danych lub też zliczania sumy otrzymywanych danych)
	void dodajObserwatora(Obserwator*);

	//informacja o tym, że w obserwatorze pojawiły się nowe dane, która następnie jest przetwarzana przez Obserwator( albo dodaje do sumy albo wypisuje na ekran otrzymane dane)
	void noweDaneNadeszly(const int) const;
private:
	std::vector<Obserwator*> obserwatorzy;
};
#endif
