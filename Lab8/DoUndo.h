#ifndef DoUndoH
#define DoUndoH
#include "KeepInt.h"
#include "DoUndoAction.h"

//klasa odpowiedzialna za ewentualne przywracanie starej wartości konta(w przypadku niepowodzenia transakcji) - w pewnym sensie działa jak smart pointer
class DoUndo
{
public:
	//konstruktor ustawia wskaźnik przechowujący obiekt klasy DoUndoAction(odpowiedzialny w zależności od postaci za przechowywanie wiadomości o transakcji lub stanu konta)
	DoUndo(DoUndoAction * doUndoNew);
	//destruktor odpowiedzialny za podjęcie odpowiednich kroków w zależnosci od tego czy transakcja zakończyła się sukcesem, czy też nie.
	~DoUndo();
	//funkcja statyczna ustawiająca wartość _success w klasie DoUndoAction odpowiedzialną za określenie tego czy transakcja się powiodła
	static void allok();
private:
	//wskaźnik przechowujący obiekt klasy DoUndoAction(odpowiedzialny w zależności od postaci za przechowywanie wiadomości o transakcji lub stanu konta)
	DoUndoAction * _keepDoUndo;
};
#endif
