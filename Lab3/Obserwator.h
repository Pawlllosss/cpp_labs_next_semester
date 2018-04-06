#ifndef ObserwatorH
#define ObserwatorH

#include <iostream>

//---------------------------------------------------------------------
//obserwator
//---------------------------------------------------------------------
class Obserwator
{
public:
	//funkcja odpowiedzialna za przetwarzanie otrzymanych danych od klasy Obserwowany (dodanie ich do licznika albo wypisanie na ekran)
	virtual void obserwuj(const int) = 0;

};

//---------------------------------------------------------------------
//Obserwator licznik (sumuje nadchodzące od Obserwowanego obiektu dane)
//---------------------------------------------------------------------

class ObserwatorLicznik:public Obserwator
{
public:
	//aby móc zliczać sumy otrzymywanych danych m_suma jest zerowany
	ObserwatorLicznik(): m_suma(0)
	{

	}

	//dodaje otrzymane od Obserwowanej klasy dane do sumy
	void obserwuj(const int);

	//zwraca wartość m_suma (czyli zliczonej sumy nadchodzących danych)
	int suma();

private:
	int m_suma;

};

//---------------------------------------------------------------------
//Obserwator wypisywacz ( wypisuje nadchodzące od Obserwowanego obiektu dane)
//---------------------------------------------------------------------
class ObserwatorWypisywacz:public Obserwator
{
public:
	//wypisuje gdy nowe dane od Obserwowanej klasy nadeszły
	void obserwuj(const int);
private:

};

#endif
