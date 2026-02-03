#pragma once
#include <iostream>
using namespace std;

inline void pointer_to_array()//ExamplesLesson02/c_usingPointers
{
	int a[] = {1, 2, 3, 4, 5}; // a is of type int[5]
	cout << "The size of an int[5] array is " << sizeof(a) << endl;
	cout << "The count of an int[5] array is " << sizeof(a)/sizeof(int) << endl;
	int* p = a; // assigning the array to an int* p makes p contain the address of the arrays 1. element 
	cout << "The size of a pointer to an integer array is " << sizeof(p) << endl;
}

inline void pass_and_change_an_array(int* p, const size_t size)
{
	p[2] = 1000;
	for (size_t i = 0; i < size; i++)
	{
		cout << "element at index using *(p+" << i << ") is " << *(p + i) << endl;
		cout << "element at index using p[" << i << "] " << " is " << p[i] << endl;
	}
}

inline void pass_immutable_array(const int* p, const size_t size)
{
	//p[2] = 2; compile error
	for (size_t i = 0; i < size; i++)
	{
		cout << *(p + i) << ",";
	}
}

inline void pass_by_pointer_reference(string* p)
{
	(*p)[1] = 'i';// remember that a std::string is not an array it is an object of a class string
}


inline void pass_copy(string s)
{
	s[1] = 'i';// remember that a std::string is not an array it is an object of a class string
}
