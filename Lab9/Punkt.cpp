#include "Punkt.h"

Punkt::Punkt(const int x, const int y):_x(x), _y(y)
{
}

bool Punkt::operator < (const Punkt punkt_to_compare) const
{
	if ( _x < punkt_to_compare._x )
		return true;
	else if ( _x == punkt_to_compare._x )
	{
		if( _y < punkt_to_compare._y )
			return true;
		else
			return false;
	}	
	else
		return false;
}
