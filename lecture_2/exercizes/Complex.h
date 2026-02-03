#pragma once
#include <iostream>
#include <math.h>
class Complex 
{
private:
    double x;
    double y;
public:
    Complex(const double x=0, const double y=0);
    Complex add_ret_copy(const Complex&obj ) const;
    Complex& add_to_this(const Complex&obj);
    void write(std::ostream& os) const;


    Complex& multiply(const Complex& inp);
    double norm() const;


    double getX(){return this->x;}
    double getY(){return this->y;}
};