
#include "Address.h"

Address::Address()
{

}

std::string Address::to_string()
{
    std::string res = "";

    res = street + " " 
    + std::to_string(number) + " "
    + std::to_string(floor) + " "
    + zipcode + " "
    + city + " "
    + country;

    return res;

}