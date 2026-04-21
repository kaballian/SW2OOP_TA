#include "vehicle.h"


std::string vehicle::to_string(void)
{
    std::string res = "";

    res = "fuel consumption: " + std::to_string(this->fuel_consumption) + " fuel capacity: " + std::to_string(this->fuel_capacity);
    return res;
}