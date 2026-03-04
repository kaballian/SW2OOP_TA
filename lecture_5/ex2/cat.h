#pragma once
#include <string>
#include <math.h>

class cat
{
    private:
    std::string name;
    int height;
    int weight;
    
    public:
    cat(const std::string &name, int height, int weight) 
    : name(name), height(height), weight(weight) {}

    double BMI() const {return this->weight / (pow(this->height, 2));}
    std::string to_string() const {return "name: " + name + " W: " + std::to_string(weight) + " H: " + std::to_string(height) + " BMI: " + std::to_string(BMI());}

};