#ifndef FileH
#define FileH
#include <string>
#include <iostream>

class File
{
public:
	//konstruowanie File o podanej nazwie
	File(const std::string);
	//wypisywanie pliku do strumienia
	virtual std::ostream & Print(std::ostream &, const int) const;
	//otrzymywanie nazwa pliku
	std::string get_file_name()const;

	virtual const File * get(const std::string) const;

	friend std::ostream & operator << ( std::ostream &, const File &);
	
	virtual ~File();

private:
	std::string m_file_name;
};
#endif
