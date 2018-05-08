#ifndef DoUndoActionH
#define DoUndoActionH

//klasa informująca o poprawnym wykonaniu transakcji
class DoUndoAction
{
public:
	//konstruktor ustawia wartość _success określającą to czy transkakcja się powiodła na wartośc false
	DoUndoAction();
	//wirtualny destruktor zapewniający poprawne zwalnianie pamięci przez klasy pochodne
	virtual ~DoUndoAction();
	//funkcja określająca rozpoczęcie transkacji
  	virtual void dodo() = 0;  
	//funkcja wykonujaca się gdy transkacja się powiodła(wartość _success ustawiona jako true)
  	virtual void undoOk() = 0;
	//funkcja wykonująca się gdy transakcja z jakiegoś powodu się nie powiodła(wartość _success ustawiona jako false)
  	virtual void undoFail() = 0;
	//ustawia wartość zmiennej _success
	static void setSuccess(const bool);
	//otrzymuje wartość zmiennej _success
	static bool getSuccess();
private:
	//zmienna określająca to czy transakcja odbyła się poprawnie
	static bool _success;
};
#endif
