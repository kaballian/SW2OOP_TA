#pragma once

#include "car.h"

class hybrid_car : public car 
{
    private:
    double batt_cap;
    double batt_eff;

    public:
    hybrid_car() : car(), batt_cap(420), batt_eff(69){}
    hybrid_car(double batt_cap, double batt_eff) : car(), batt_cap(batt_cap), batt_eff(batt_eff){}
    hybrid_car(double batt_cap, double batt_eff, 
        std::string make, std::string model) : car(make, model), batt_cap(batt_cap), batt_eff(batt_eff){}

    double range();
    std::string to_string(void)const;

};