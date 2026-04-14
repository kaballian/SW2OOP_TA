#pragma once
#include <iostream>
#include <string>
class vect
{
private:
    double x;
    double y;

public:
    vect(double x, double y) : x(x), y(y){}
    vect(const vect& obj) :  x(obj.x), y(obj.y){}

    double getX(void) const{return x;}
    double getY(void) const{return y;}

    void setX(double x) {this->x = x;}
    void setX(double u) {this->y = u;}

    vect& operator+(const vect& rhs)
    {
        vect res(this->x + rhs.x, this->y + rhs.y);
        return res;
    }

    std::string to_string(void);
    
};