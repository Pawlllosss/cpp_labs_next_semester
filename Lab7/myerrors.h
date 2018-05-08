#ifndef myerrorsH
#define myerrorsH

#include <iostream>
#include <string>
#include <stdexcept>



namespace myerrors{

	//klasa przechowująca wyjątek związany z obliczeniami. Przechowuje opis wyjatku, nazwe pliku w ktorym pojawil sie wyjatek i linijke
	class calc_error: public std::runtime_error{
		public:
			//przyjazn z funkcja handler, ktora jest odpowiedzialna za wyswietlenie wszystkich wyjatkow
			friend void handler();
			//kontruktor przyjmujacy wskaznik do poprzedniego wyjatku, opis wyjatki, nazwe pliku, w ktorym mial miejsce wyjatek i nr linii
			calc_error(const std::runtime_error *, const std::string exception_name, const std::string file_name, const int line_nmb);
			//przeladowany operator what 
			const char* what() const throw();
			~calc_error();
		private:
			//opis wyjatku zwracany przez funkcje what()
			char * _exception_description_string;
			//opis wyjatku
			std::string _exception_name;
			//nazwa pliku, w kotrym mial miejsce wyjatek
			std::string _file_name;
			//numer linii, w ktorej mial miejsce wyjatek
			int _line_nmb;
			//wskaznik do ppoprzedniego wyjatku
			const std::runtime_error * _previous_exception;
	};

	//funkcja odpowiedzialna za wyswietlenie wszystkich wyjatkow
	void handler();

}
#endif
