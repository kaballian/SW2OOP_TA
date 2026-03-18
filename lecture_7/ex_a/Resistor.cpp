#include "Resistor.h"




std::string Resistor::to_string() const
{
    return "resistance: " + std::to_string(this->resistance);

}

Resistor operator&(const Resistor& lhs, const Resistor& rhs)
{
    Resistor R(lhs.resistance + rhs.resistance);
    return R;
}
Resistor operator|(const Resistor& lhs, const Resistor& rhs)
{
    Resistor R(1/((1/lhs.resistance)+(1/rhs.resistance)));
    return R;
}