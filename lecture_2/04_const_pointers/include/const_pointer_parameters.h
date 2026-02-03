#pragma once
#include <iostream>
using namespace std;

inline void immutable(const int* p)
{
	*p = 6;//this accident cannot happen
	cout << *p << std::endl;
}

inline void not_movable(int* const p, int* const q)
{
	p = q; //this accident does not compile
	cout << p << " refers:" << *p << " " << q << " refers:" << *q << endl;
}

inline void immutable_not_movable(const int* const p, const int* const q)
{
	*p = 6;//this accident cannot happen
	p = q; //this accident does not compile
	cout << p << " refers:" << *p << " " << q << " refers:" << *q << endl;
}