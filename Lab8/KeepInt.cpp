#include "KeepInt.h"

KeepInt::KeepInt(int & moneyValue):_accountValue(moneyValue), _oldValue(moneyValue){

}

void KeepInt::dodo(){
}

void KeepInt::undoOk(){
}

void KeepInt::undoFail() {
	_accountValue = _oldValue;
}
