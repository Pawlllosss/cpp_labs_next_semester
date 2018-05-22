#ifndef PunktH
#define PunktH

//klasa Punkt przechowująca infomracje o współrzędnych punktu
class Punkt
{
public:
	//konstruktor punktu ustawiający wartości _x i _y
	Punkt(const int, const int);
	//funkcja szablonowa max, zwracająca większą wartość lub większy punkt
	template<typename T> static T max(const T value1, const T value2)
	{
		return ( value1 < value2 ) ? value2 : value1;
	}
	//funkcja szablonowa min, zwracająca mniejszą wartość lub mniejszy punkt
	template<typename T> static T min(const T value1, const T value2)
	{
		return ( value1 < value2 ) ? value1 : value2;
	}
	//funkcja odpowiedzialna za dostęp do konkrentej współrzędnej
	template<int choose> int wsp() const
	{
		//mogą być też inne wartości na wejściu
		if (choose == 0)
			return _x;
		if (choose == 1)
			return _y;
	}
	//operator porównania punktu( najpierw porównywane jest x, jeśli są równe to porównywane jest y)
	bool operator < (const Punkt) const;
private:
	//współrzędna x
	int _x;
	//współrzędna y
	int _y;
};
#endif
