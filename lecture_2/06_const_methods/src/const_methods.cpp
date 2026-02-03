#include "../include/const_methods.h"

const_methods::const_methods(const double a, const float b): a_(a), b_(b)
{
}

double const_methods::get_a() const
{
	return a_;
}

void const_methods::set_a(const double a)
{
	a_ = a;
}
