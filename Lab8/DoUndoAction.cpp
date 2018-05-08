#include "DoUndoAction.h"

bool DoUndoAction::_success;

DoUndoAction::DoUndoAction(){
	DoUndoAction::setSuccess(false);
}

DoUndoAction::~DoUndoAction(){
}

void DoUndoAction::setSuccess(const bool successValue){
	_success = successValue;
}

bool DoUndoAction::getSuccess(){
	return _success;
}
