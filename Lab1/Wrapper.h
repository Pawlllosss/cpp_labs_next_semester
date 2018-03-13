#ifndef WrapperH
#define WrapperH
#include <iostream>

class Wrapper
{
public:
	virtual std::ostream & print(std::ostream &) = 0;
	virtual ~Wrapper()
	{

	}
private:

};
#endif
