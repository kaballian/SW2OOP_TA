#include "Vect.h"


Vect& Vect::operator+(const Vect& rhs)
{
    this->x = rhs.x;
    this->y = rhs.y;

    return *this;
}
Vect& Vect::operator-()
{
    this->x = -x;
    this->y = -y;
    return *this;
}
std::ostream &operator<<(std::ostream& rhs, const Vect& lhs) 
{
    rhs << "("+ lhs.to_string() +")";
}

std::string Vect::to_string() const
{
    return std::to_string(this->x) + ", " + std::to_string(this->y);
}

        
    
