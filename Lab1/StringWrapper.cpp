#include "StringWrapper.h"

StringWrapper::StringWrapper(const std::string string_to_use): _content(string_to_use)
{
}


std::ostream & StringWrapper::print(std::ostream & stream)
{
	return stream << _content;
}
