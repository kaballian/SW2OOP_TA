#include "car.h"

std::string car::to_string(void)const{
    return vehicle::to_string() + " make: " + this->make + " model: " + this->model;
}

