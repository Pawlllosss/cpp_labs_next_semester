#ifndef MatrixH
#define MatrixH

#include <iostream> 

//szablon klas typu T, tworzący macierz o rozmiarach x na y
template <typename T, const int x, const int y> class Matrix
{
public:
	//konstruktor macierzy odpowiada za zerowanie wartości przechowywanych przez macierz(zmienną _tab)
	Matrix();
	//reset ustawia wszystkie komórki macierzy(_tab) na wartość określoną przez argument value_to_set
	void reset(const T & value_to_set);

	//przyjaźń z operatorem << strumienia std::ostream pozwala na wypisanie zawartości macierzy(_tab)
	friend std::ostream & operator << (std::ostream & stream, const Matrix<T,x, y> & matrix_to_print)
	{
		for(unsigned i = 0 ; i < y ; i++)
		{
			for(unsigned j = 0 ; j < x ; j++)
				stream<<matrix_to_print._tab[i][j]<<" ";

			stream<<std::endl;
		}

		return stream;
	}
	//funkcja szablonowa zwracająca referencję do wartości określone pola macierzy
	template<const unsigned x_pos, const unsigned y_pos> T& at()
	{
		return _tab[y_pos][x_pos];
	}
	//funkcja zwracająca wartość określonego pola w macierzy
	T get_value(const unsigned i, const unsigned j);

	//funkcja szablonowa pozwalająca na dodanie macierzy różnego typu, ale o takim samym rozmiarze ( w przeciwnym razie kompilacja nie będzie możliwa)
	template <typename U> void add(Matrix<U, x, y> matrix_to_add)
	{
		for(unsigned i = 0 ; i < x ; i++)
			for(unsigned j = 0 ; j < y ; j++)
				_tab[i][j] += matrix_to_add.get_value(i, j);
	}

private:
	//tablica dwuwymiarowa o rozmiarze podanym w formie argumentu szablonowego
	T _tab[x][y];
};
#endif

template <typename T, const int x, const int y> std::ostream & operator << (std::ostream & stream, const Matrix<T,x, y> & matrix_to_print)
	{
		for(unsigned i = 0 ; i < y ; i++)
		{
			for(unsigned j = 0 ; j < x ; j++)
				stream<<matrix_to_print._tab[i][j]<<" ";

			stream<<std::endl;
		}

		return stream;
	}

template <typename T, const int x, const int y> Matrix<T,x, y>::Matrix()
{
	for(unsigned i = 0 ; i < x ; i++)
		for(unsigned j = 0 ; j < y ; j++)
			_tab[i][j] = 0;
}

template <typename T, const int x, const int y> void Matrix<T,x, y>::reset(const T & value_to_set)
{
	for(unsigned i = 0 ; i < x ; i++)
		for(unsigned j = 0 ; j < y ; j++)
			_tab[j][i] = value_to_set;
}

template <typename T, const int x, const int y> T Matrix<T, x, y>::get_value(const unsigned i, const unsigned j)
{
		return _tab[i][j];
}

