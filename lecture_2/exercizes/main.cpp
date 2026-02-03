#include <iostream>
#include "Complex.h"
#include "Sensor.h"
#include "Logger.h"
#include "Signals.h"




//exercise 2/3/4
int main(void)
{
    // const Complex c1(1,1);
    // Complex c2(2,2);
    // const Complex csum = c2.add_ret_copy(&c1);

    // std::cout << "x: " << csum.getX() << std::endl;
    // std::cout << "y: " << csum.getY() << std::endl;

    
    // exercise 2
    const Complex c1(1,1);
    Complex c2(2,2);
    const Complex c3(3,3);
    const Complex c4(4,4);
    const Complex c5(5,5);

    const Complex c_sum = c1.add_ret_copy(c2);
    c_sum.write(std::cout);

    c2.write(std::cout);
    c2.add_to_this(c1).add_to_this(c3).add_to_this(c4).add_to_this(c5);
    c2.write(std::cout);



    //exercise 3

    Complex c6(2,3);
    const Complex c_mult = c6.multiply(c3);
    c_mult.write(std::cout);

    std::cout << "normalized: " << c_mult.norm() << std::endl;
 

    
    //exercise 4
    Logger log{"data_"};
    Signals sig1{1.2, 54.39};
    Signals sig2{5.2, 32.97};
    Sensor sen1{log, sig1};
    Sensor sen2{log, sig2};

    sen1.detect(sig1);

    return 1;

}