#ifndef KeepIntH
#define KeepIntH
#include "DoUndoAction.h"
#include <iostream>

//klasa przechowująca referencję do wartości konta i pamiętająca jego wartość przed rozpoczęciem transakcji
class KeepInt : public DoUndoAction 
{
public:
	//konstruktor, który ustawia referencję na wartość konta i zmienną przechowującą starą wartość konta
	KeepInt(int & moneyValue);

	//funkcja nic nie robi - znajduje się w celu zapewnienia polimorfizmu
	virtual void dodo();
	//funkcja nic nie robi - znajduje się w celu zapewnienia polimorfizmu
	virtual void undoOk();
	//funkcja wykonuje się w przypadku gdy transakcja się nie powiedzie - przywraca starą wartość konta
	virtual void undoFail();
private:
	//referencja na wartość konta
	int & _accountValue;
	//stara wartość konta
	int _oldValue;
};
#endif
