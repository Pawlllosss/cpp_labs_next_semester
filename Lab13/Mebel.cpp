#include "Mebel.h"
#include <sstream>

Mebel::Mebel(const std::string & type, const unsigned x, const unsigned y, const unsigned z, const std::string & description)
{
	_type = type;
	_description = description;
	_x = x;
	_y = y;
	_z = z;
}

//===========================OPERATORY GLOBALNE==========================================


std::ostream & operator << (std::ostream & stream, const Mebel & obj)
{
	return stream<<obj._type<<" "<<obj._x<<" "<<obj._y<<" "<<obj._z<<" \""<<obj._description<<"\""<<'\0'; 
}


std::istream & operator >> (std::istream & stream, std::vector<Mebel> & mebel_vector)
{
	std::string output;

	std::string tmp_type;
	std::string tmp_description;
	unsigned tmp_x, tmp_y, tmp_z;

	while (getline(stream, output, '\0'))
	{
		std::istringstream tmp_output(output);
		tmp_output>>tmp_type>>tmp_x>>tmp_y>>tmp_z;

		getline(tmp_output, tmp_description, '\0');
			
		//odpowiedzialne za usunięcie apostrofów
		if (tmp_description.size() > 2 )
			tmp_description = tmp_description.substr(2, tmp_description.size());
		else
			tmp_description = "";

		mebel_vector.push_back( Mebel(tmp_type, tmp_x, tmp_y, tmp_z, tmp_description) );
	}

	return stream;
}
