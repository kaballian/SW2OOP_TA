#include "Complex.h"


Complex::Complex(const double x, const double y) 
: x(x), y(y){}

Complex Complex::add_ret_copy(const Complex& obj) const
{
    Complex temp(obj.x + this->x, obj.y + this->y);
    return temp;
}

Complex& Complex::add_to_this(const Complex& obj)
{
    this->x += obj.x;
    this->y += obj.y;
    return *this;
}
// Complex& Complex::add_to_this(const Complex &obj)
// {
    
// }
void Complex::write(std::ostream& os) const
{
    // if(!obj) return;
    // (*obj) << "x: " << this->x << " y: " << this->y<< "\n";
    os << "x: " << this->x << " y: " << this->y << "\n";
}

//exercise 3

Complex& Complex::multiply(const Complex& inp)
{
    this->x *= inp.x;
    this->y *= inp.y;
    return *this;
}

double Complex::norm()const
{
    /**
     * normlise complex numbers
     * z = x +iy
     * |z| = sqrt(z^2 + y^2)
     * z^=z/|z| = (x/|z|) + i(y/|z|)
     */

    return std::pow(this->x,2) + std::pow(this->y,2);
    

}