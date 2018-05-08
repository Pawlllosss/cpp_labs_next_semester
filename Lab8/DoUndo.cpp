#include "DoUndo.h"

DoUndo::DoUndo(DoUndoAction * doUndoNew): _keepDoUndo(doUndoNew)
{
	_keepDoUndo->dodo();
}

DoUndo::~DoUndo(){
	if(DoUndoAction::getSuccess())
		_keepDoUndo->undoOk();
	else
		_keepDoUndo->undoFail();

	delete _keepDoUndo;
}

void DoUndo::allok(){
	DoUndoAction::setSuccess(true);
}
