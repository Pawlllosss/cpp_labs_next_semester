#ifndef ExecutorH
#define ExecutorH

#include <iostream>

namespace Executor{
	//-----------------------------------------------------------------------------------------------------------------------
	//struktura opisująca abstrakcyjny obiekt określający funkcję. Jest to interfejs, który zapewnia przeładowanie operatora () tak, aby w łatwy sposób można było otrzymać wartość funkcji w punkcie x.
	struct Function{
		//operator odpowiedzialny za łatwe obliczanie wartości funkcji w punkcie x do doublea
		virtual double operator()( double x) const = 0;
	};

	//-----------------------------------------------------------------------------------------------------------------------
	//struktura przechowująca rezultat wykonania funkcji i jej wartość
	struct Result{
		//określa czy funkcja wykonała się poprawnie
		int valid;
		//przechowuje wartość funkcji w punkcie x, dla którego została wywołana funkcja secureRun
		double value;
		//odpowiada za zwrócenie wartości value(wartości funkcji) przy rzutowaniu na typ double
		operator double () const;
	};
	//-----------------------------------------------------------------------------------------------------------------------
	//wrapper odpowiedzialny za obliczanie wartości funkcji w punkcie x i za ewentualną obsługę wyjątków w trakcie wykonywania tych funkcji
	Result secureRun(const Function &, const double x);
}

////przeładowanie operator << dla strumienia ostream - wypisuje wartość funkcji(value) - musi być zdefiniowany poza zakresem namespace!
std::ostream & operator << (std::ostream & output, const Executor::Result & result);

#endif
