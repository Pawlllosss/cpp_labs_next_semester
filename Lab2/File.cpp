#include "File.h"

#include <stdio.h>

File::File(const std::string file_name):m_file_name(file_name)
{

}

std::ostream & File::Print(std::ostream & stream, const int intedention) const
{
	return stream<<m_file_name<<std::endl;
}

std::string File::get_file_name()const
{
	return m_file_name;
}

std::ostream & operator << ( std::ostream & stream, const File & file_to_print)
{

	return file_to_print.Print(stream, 3);
}


const File * File::get(const std::string file_to_get) const
{

	if( m_file_name == file_to_get )
		return this;
	else
		return 0;
}

File::~File()
{
}
