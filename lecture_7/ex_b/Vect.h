#pragma once
#include <string>
#include <iostream>

class Vect
{
private:
    double x;
    double y;
public:
    Vect() : x(1), y(1) {}
    Vect(double x, double y) : x(x), y(y) {}
    std::string to_string()const;

    Vect& operator+(const Vect& rhs);
    Vect& operator-();
    friend std::ostream &operator<<(std::ostream& rhs, const Vect& lhs);
};

