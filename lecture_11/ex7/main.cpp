#include <iostream>
#include "vehicle.h"
#include "car.h"
#include "hybrid_car.h"
#include "account.h"
#include "savings_account.h"
#include "credit_account.h"


#define OPG_NR 3

int main(void)
{

#if OPG_NR == 1

    
    hybrid_car hc1(123, 41);
    hybrid_car hc2(123, 41, "BMW", "545e");

    std::cout << hc1.to_string() << std::endl;
    std::cout << hc2.to_string() << std::endl;


#elif OPG_NR == 2

    try{
        savings_account sa1(400);
        savings_account sa2;

    }catch(const std::invalid_argument& e)
    {
        
    }

#elif OPG_NR == 3




#endif
    
    return 1;
}


