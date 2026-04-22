#pragma once
#include "vehicle.h"

class car : public vehicle
{
    private:
    std::string make;
    std::string model;

    public:
    car() : vehicle(), make("N/A"), model("N/A"){}
    car(std::string make, std::string model) : vehicle(), make(make), model(model){}
    car(std::string make, std::string model, double fuel_con, double fuel_cap) 
    : vehicle(fuel_con, fuel_cap), 
    make(make), 
    model(model){}


    std::string to_string(void) const;

};