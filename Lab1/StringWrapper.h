#ifndef StringWrapperH
#define StringWrapperH
#include "Wrapper.h"
#include <string>

class StringWrapper: public Wrapper
{
public:
	StringWrapper(const std::string);
	std::ostream & print(std::ostream &);
private:
	std::string _content;
};
#endif
