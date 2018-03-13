#include "PVec.h"

PVec::PVec():_cur_size(0), _max_size(20), _table( new Wrapper*[20])
{

}

PVec & PVec::push_back( Wrapper * vec_to_add )
{
	_table[_cur_size] = vec_to_add;
	_cur_size++;

	return *this;
}

int PVec::get_cur_size() const
{
	return _cur_size;
}

std::ostream & operator << (std::ostream & stream, const PVec & vec)
{
	for(int i = 0 ; i < vec.get_cur_size() ; i++ )
	{
		vec[i].print(stream);
		stream<<" ";
	}

	return stream<<std::endl;
}

PVec & PVec::operator << ( Wrapper * wrapper_to_set)
{
	push_back(wrapper_to_set);

	return *this;
}

Wrapper & PVec::operator [] (const int iterator ) const
{
	return *(_table[iterator]);
}

PVec::~PVec()
{
	for(int i = 0 ; i < _cur_size ; i++ )
		delete _table[i];


	delete [] _table;
}
