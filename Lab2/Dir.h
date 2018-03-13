#ifndef DirH
#define DirH

#include "File.h"

#include <string>
#include <iostream>

class Dir: public File
{
public:
	//konstruktor Dir ustawiający nazwę folderu
	Dir(const std::string);

	//dodanie podrzędnego folderu/pliku
	Dir& operator += (File*);
	//pozyskanie liczby aktualnie przechowywanych plików/folderów w tablicy m_files_in_folder
	int get_file_nmb() const;
	//otrzymanie wskaźniku na plik o wskazanym indeksie w tablicy m_files_in_folder
	File * get_file(const int) const;

	//szukanie pliku/folderu o określonej nazwie
	const File * get(const std::string) const;

	//zapisywanie do strumienia aktualnego ukladu plikow
	std::ostream & Print(std::ostream &, const int) const;

	//przeładowany operator << dla strumienia wyświetlający hierarchie plikow i folderow
	friend std::ostream & operator << ( std::ostream &, const Dir &);

	//destruktor informujacy o usuwaniu kolejnych plikow
	~Dir();
private:
	File * m_files_in_folder[10];
	int m_file_nmb;
};
#endif
