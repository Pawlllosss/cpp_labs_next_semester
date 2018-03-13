#ifndef FloatWrapperH
#define FloatWrapperH
#include "Wrapper.h"
class FloatWrapper: public Wrapper
{
public:
	FloatWrapper(const float);
	std::ostream & print(std::ostream &);
private:
	float _content;
};
#endif
