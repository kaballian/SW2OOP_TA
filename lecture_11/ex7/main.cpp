#include <iostream>
#include "vehicle.h"
#include "car.h"
#include "hybrid_car.h"

#define OPG_NR 2

int main(void)
{

#if OPG_NR == 1

    
    hybrid_car hc1(123, 41);
    hybrid_car hc2(123, 41, "BMW", "545e");

    std::cout << hc1.to_string() << std::endl;
    std::cout << hc2.to_string() << std::endl;


#elif OPG_NR == 2



#endif
    
    return 1;
}


