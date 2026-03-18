#pragma once
#include <string>
#include <math.h>
class Resistor{
    private:
    double resistance;

    public:
    Resistor() : resistance(0.0) {}
    Resistor(double res) : resistance(res) {}
    std::string to_string() const;

    friend Resistor operator&(const Resistor& lhs, const Resistor& rhs);
    friend Resistor operator|(const Resistor& lhs, const Resistor& rhs);


};