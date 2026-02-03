#pragma once
#include <iostream>
#include <string>

class const_methods
{
public:
	const_methods(double, float);
	double get_a() const;
	void set_a(double a);

	inline double process_data() const
	{
		//set_a(3);// will not compile const function cannot call non const function
		return static_cast<double>(b_) + get_a();
	}

private:
	double a_;

	float b_;
};

class open
{
public:
	open(double a): a_(a){}

	const double& get_a_open() const
	{
		return a_;
	}

	void print() const
	{
		std::cout << "a:" << a_ << std::endl;
	}

private:
	double a_;
};
