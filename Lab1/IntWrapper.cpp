#include "IntWrapper.h"
#include <iostream>

IntWrapper::IntWrapper(const int nmb_to_use): _content(nmb_to_use)
{
}


std::ostream & IntWrapper::print(std::ostream & stream)
{
	return stream << _content;
}
