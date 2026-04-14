#include "vect.h"




std::string vect::to_string(void)
{

    std::string res = "";
    res = "x: " + std::to_string(this->x) + " y: " + std::to_string(this->y);
    return res;
}