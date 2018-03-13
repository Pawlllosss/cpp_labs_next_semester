#include "FloatWrapper.h"

FloatWrapper::FloatWrapper(const float nmb_to_use): _content(nmb_to_use)
{
}

std::ostream & FloatWrapper::print(std::ostream & stream)
{
	return stream << _content;
}
