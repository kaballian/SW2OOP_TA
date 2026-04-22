#include "vehicle.h"


std::string vehicle::to_string(void) const
{
    std::string res = "";

    res = "fuel consumption: " + std::to_string(this->fuel_consumption) + " fuel capacity: " + std::to_string(this->fuel_capacity);
    return res;
}

double vehicle::range()
{
    return this->fuel_capacity * this->fuel_consumption;
}