#include "hybrid_car.h"


double hybrid_car::range()
{
    return batt_eff * batt_cap;
}

std::string hybrid_car::to_string(void)const
{
    return car::to_string() + " batt cap: " + std::to_string(this->batt_cap) + " batt eff: " + std::to_string(this->batt_eff);
}