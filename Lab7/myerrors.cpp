#include "myerrors.h"
#include <cstring>

namespace myerrors{
		calc_error::calc_error(const std::runtime_error*  thrownException, const std::string exception_name, const std::string file_name, const int line_nmb):std::runtime_error(exception_name){
			_exception_name = exception_name;
			_file_name = file_name;
			_line_nmb = line_nmb;
			_previous_exception = thrownException;
			
			//tworzenie opisowego chara przechowujacego dokladne informacje o wyjatku
			std::string exception_string;
			exception_string = _exception_name + " [w pliku: " + _file_name + " w lini: " + std::to_string(_line_nmb) + "]"; 
			_exception_description_string = new char[strlen(exception_string.c_str()) + 1];
			strcpy(_exception_description_string, exception_string.c_str());
		}

		const char* calc_error::what() const throw(){
				return _exception_description_string;
			} 

		calc_error::~calc_error(){
			delete [] _exception_description_string;
		}

		void handler(){
			try{
				throw;
			}
			catch(const std::runtime_error* exc_runtime_error){

				bool first_loop = true;
				const std::runtime_error* previous_ptr;
				const std::runtime_error* exception_ptr = exc_runtime_error;
				while(exception_ptr){
					if(first_loop){
						std::cout<<"Wyjatek w: ";
						first_loop = false;
					}
					else{
						std::cout<<"z powodu : ";
					}

					previous_ptr = exception_ptr;
					std::cout<<exception_ptr->what()<<std::endl;					

					if ( dynamic_cast<const calc_error*>(exception_ptr) ){
						exception_ptr = dynamic_cast<const calc_error*>(exception_ptr)->_previous_exception;
						delete previous_ptr;
					}
					else{
						delete previous_ptr;
						break;
					}
				}
			}
			catch(...)
			{
				std::cout<<"Unknown exception"<<std::endl;
			}

		}

}
