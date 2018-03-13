#ifndef IntWrapperH
#define IntWrapperH
#include "Wrapper.h"

class IntWrapper: public Wrapper
{
public:
	IntWrapper(const int);
	std::ostream & print(std::ostream &);
private:
	int _content;
};
#endif
