#pragma once
#include <string>


class vehicle
{
private:
double fuel_consumption;
double fuel_capacity;
public:
vehicle() : fuel_consumption(0), fuel_capacity(0){}
vehicle(double consumption, double capacity) : fuel_consumption(consumption), fuel_capacity(capacity){}


std::string to_string(void);
double range();

};