#pragma once
#include <iostream>
using namespace std;

class heavy_object
{
public:
	heavy_object(const int a, const double b, const float c): a_(a), b_(b), c_(c)
	{
	}

	void print() const
	{
		std::cout << "a:" << a_ << " b:" << b_ << " c:" << c_ << endl;
	}

	void set_a(const int a)
	{
		a_ = a;
	}

private:
	int a_;
	double b_;
	float c_;
	//....
};

/*
 * By value(copy)
 */
inline void call_by_value(heavy_object h, int value)
{
	h.set_a(value);
}

/*
 * By reference 
 */
inline void call_by_reference(heavy_object& h, int value)
{
	h.set_a(value);
}

/*
 * By reference and return by value(copy)
 */
inline heavy_object call_by_reference_and_return_by_value(heavy_object& h, int value)
{
	h.set_a(value);
	return h;
}
/*
 * By reference and return by reference
 */
inline heavy_object& call_and_return_by_reference(heavy_object& h, int value)
{
	h.set_a(value);
	return h;
}
/*
 * Not to do
 */
inline heavy_object& return_internal_by_reference(int value)
{
	heavy_object h(1, 2, 3);
	h.set_a(value);
	return h;
}

