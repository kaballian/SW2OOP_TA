#include <iostream>
#include "Resistor.h"
int main(void)
{
    
    Resistor R1(10);
    Resistor R2(15);
    Resistor R3(20);
    Resistor R4(20);


    Resistor R5 = R1 & R2;
    Resistor R6 = R3 | R4;


    std::cout << "R1: " << R1.to_string() << std::endl;
    std::cout << "R2: " << R2.to_string() << std::endl;
    std::cout << "R3: " << R3.to_string() << std::endl;
    std::cout << "R4: " << R4.to_string() << std::endl;
    std::cout << "R5: " << R5.to_string() << std::endl;
    std::cout << "R6: " << R6.to_string() << std::endl;

    
    return 1;
}