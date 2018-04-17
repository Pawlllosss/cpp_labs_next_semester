#include "Executor.h"

namespace Executor{
	//-----------------------------------------------------------------------------------------------------------------------
	//secureRun
	Result secureRun(const Function & functionToRun, const double x){
		Result resultOfRun;
		resultOfRun.valid = 0;
		try{
			double result = double(functionToRun(x));
			resultOfRun.value = result;
			resultOfRun.valid = 1;
		}
		catch(const char * catchedString){
			std::cout<<"ERROR "<<catchedString;
		}
		catch(const bool catchedBoolean){
			std::cout<<"ERROR Boolean of value ";

			if (catchedBoolean)
				std::cout<<"true";
			else
				std::cout<<"false";	

			std::cout<<" thrown";
		}catch(...){
			std::cout<<"UNKNOWN ERROR";
		}

		return resultOfRun;
	}

	//-----------------------------------------------------------------------------------------------------------------------
	//result
	Result::operator double () const{
			if(valid)
				return value;
			else
				throw "No value result as operation was unvalid";
	}


}
//END OF NAMESPACE


//przeładowanie operator << dla strumienia ostream - wypisuje wartość funkcji(value)
std::ostream & operator << (std::ostream & output, const Executor::Result & result){
	if(result.valid)
		output<<result.value;

	return output;
}
