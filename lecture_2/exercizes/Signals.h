#pragma once
#include <string>

class Signals
{
private:
    double amplitude;
    double frequency;
public:
    Signals(double amp=0, double freq=0):amplitude(amp), frequency(freq) {}

    std::string to_string() const {return "amp: "  + std::to_string(amplitude) + "\nfreq: " + std::to_string(frequency) ;} 
};