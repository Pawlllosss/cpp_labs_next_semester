#include "Dir.h"

Dir::Dir(const std::string folder_name):File(folder_name), m_file_nmb(0)
{

}

Dir& Dir::operator += (File* file_to_add)//czy tutaj const?
{
	//file_to_add->Print(1);

	if(m_file_nmb < 10 )
	{
		m_files_in_folder[m_file_nmb] = file_to_add;
		m_file_nmb++;
	}

	return *this;
}

int Dir::get_file_nmb() const
{
	return m_file_nmb;
}

File * Dir::get_file(const int index) const
{
	return m_files_in_folder[index];
}



std::ostream & Dir::Print(std::ostream & stream, const int intedention) const
{
	stream<<get_file_name()<<std::endl;

	for(int i = 0 ; i < m_file_nmb ; i++)
	{
		for(int spaces = 0 ; spaces< intedention ; spaces ++)
			stream<<" ";

		get_file(i)->Print(stream, intedention + 3);
	}


	return stream;
}



const File * Dir::get(const std::string dir_to_get) const//może niech zwraca file?
{
	if(get_file_name() == dir_to_get)
		return this;

	const File *ptr;

	for(int i = 0 ; i < m_file_nmb ; i++)
	{
		ptr = get_file(i)->get(dir_to_get);

		if(ptr)
			return ptr;
	}

	return 0;
}



Dir::~Dir()
{
	std::cout<<"Deleting Dir: "<<get_file_name()<<std::endl;

	for(int i = 0 ; i < m_file_nmb ; i++)
	{
		std::cout<<"About to delete "<<get_file(i)->get_file_name()<<std::endl;
		delete get_file(i);
	}
}




//zdefiniowany globalnie przeładowany operator

std::ostream & operator << ( std::ostream & stream, const Dir & dir_to_print)
{
	return dir_to_print.Print(stream, 0);
}
