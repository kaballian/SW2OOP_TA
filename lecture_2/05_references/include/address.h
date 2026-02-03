#pragma once
#include <iostream>
using namespace std;
inline void address()
{
	const int i{ 5 };
	const int* i_p = &i;
	cout << i << endl;
	cout << *i_p << endl;
}
