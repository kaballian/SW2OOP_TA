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

    void setX(double x){this->x = x;}
    void setY(double y){this->y = y;}

    vect operator+(const vect& rhs)
    {
        vect res(this->x + rhs.x, this->y + rhs.y);
        return res;
    }

    vect& operator+=(const vect& rhs)
    {
        this->x += rhs.x;
        this->y += rhs.y;
        return *this;
    }


    std::string to_string(void);
    
};

