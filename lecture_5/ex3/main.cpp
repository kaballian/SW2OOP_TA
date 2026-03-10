#include <iostream>

#include "Address.h"

int main(void)
{
    Address a;
    std::cout << a.to_string() << std::endl;

    a.set_city("Sin city")
    .set_country("LA LA LAND")
    .set_floor(1000)
    .set_number(1000000)
    .set_street("elm street")
    .set_zipcode("90028");

    std::cout << a.to_string() << std::endl;
    return 1;
}

