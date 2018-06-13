#pragma once

#include <iostream>
#include <cstdlib>
#include <string.h>

// Template indicating if type is POD
template<typename U> struct is_pod {
	const static bool value = false;
};


/***************************************************/


// Template responsible for copying objects of given type
template <typename J, bool pod_cond> struct Copy {};

// Specialisation of copy for types that are POD
template <typename J> struct Copy<J, true>
{
	Copy(J * obj1, J * obj2)
	{
		J* tmp_value = (J*)(malloc(sizeof(J)));
		memcpy(tmp_value, obj1, sizeof(J));
		memcpy(obj1, obj2, sizeof(J));
		memcpy(obj2, tmp_value, sizeof(J));
		free(tmp_value);
	}
};

// Specialisation of copy for types that are not POD
template <typename J> struct Copy<J, false>
{
	Copy(J * obj1, J * obj2)
	{
		J tmp_value = *obj1;
		*obj1 = *obj2;
		*obj2 = tmp_value;
	}
};

/***************************************************/


// Class responsible for vector implementation
template <typename T>
class Vect {

	// Typedef for function pointer responsible for comparison
	typedef  bool (*f_ptr)(const T& a, const T& b);

public:
	// Vector's constructor setting capacity value and creating array of type T
	Vect(const unsigned int capacity) : capacity(capacity) { array = new T[capacity]; }

	// Destructor deleting array
	~Vect() { delete [] array; }

	// Overloaded [] operator returning data field for given object
	T & operator [] (const unsigned int index) { return array[index]; }

	// Swap method implementation for pointers of given type
	template<typename J> void swap(J * obj1, J * obj2) { struct Copy<J, is_pod<J>::value> copy_struct(obj1, obj2); }

	// Getter for array's size
	unsigned int size() { return capacity; }

	// Bubble sort implementation
	// Comparison is based on giving pointer to compare function
	void buble_sort(f_ptr compare_op)
	{
	 for (unsigned i = 0; i < capacity; i++ )
	    for (unsigned j = i+1; j < capacity; ++j ) 
	       if (compare_op(array[i], array[j]))
	       		swap(&(array[j]), &(array[i]));
	}


private:
	// Vector's properties -- array of elements of type T and its capacity
	T * array;
	unsigned int capacity;
};
