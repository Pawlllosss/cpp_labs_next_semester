#ifndef PVecH
#define PVecH

#include <iostream>
#include "IntWrapper.h"
#include "FloatWrapper.h"
#include "StringWrapper.h"

class PVec
{
public:
	//kostruktor klasy PVec ustawia aktualny rozmiar tablicy na 0, przypisuje na sztywno rozmiar 20, i tworzy tablice wskaźników na Wrapper o rozmiarze 20
	PVec();
	//dodaje na sam koniec _table (położenie ustalane na podstawie _cur_size) wskaźnik na Wrapper
	PVec & push_back( Wrapper * );
	//zwraca aktualny rozmiar _table
	int get_cur_size() const;
	//zaprzyjaźnione przeładowanie operatora << pozwalające na wypisanie zawartości table _table
    friend std::ostream & operator << (std::ostream & , const PVec &);
	//przeładowany operator << odpowiednik funkcji push_back
	PVec & operator << ( Wrapper * );
	//przeładowany operator [] zwracają referencję na Wrapper
	Wrapper & operator [] (const int ) const;
	//destruktor zwalniający pamięć po zaolokowanych wskaźnikach na Wrapper i po zaalokowanej tablicy wskaźnikow na Wrapper
	~PVec();
private:
	//aktualny rozmiar _table
	int _cur_size;
	//maksymalny  rozmiar _table
	int _max_size;
	//tablica wrapperów
	Wrapper ** _table;
};
#endif
