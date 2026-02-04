#include <iostream>
#include "Complex.h"
#include "Sensor.h"
#include "Logger.h"
#include "Signals.h"



//const functions
void f(const int x)
{
    // x is read only but is a copy - the same as void f(int x) 
    // modification does not alter caller
}
//pass by reference to const
void f2(const Signals& s)
{
    /**
     * no copy
     * func cannot modify s
     * accepts both const and non const arguments
     */
}
//pass by pointer
void f3(const Signals* s)
{
    /**
     * s may be nullptr
     * func cannot modify *s
     * 
     * s = nullptr
     * s->amp=5 is illigal 
     */
}

/**
 * class member
 * void log(const Signals& s ) const
 * arg s wont be modifed 
 * member func wont modify class obj 
 */

void f4(const Signals& s)
{
/**
 * calls to this function
 * Signals a;
 * cosnt Signals b;
 * 
 * f4(a)  is ok
 * f4(b) is ok
 */

}

void f5(const Signals& s)
{
/**
 * calls to this function
 * Signals a;
 * cosnt Signals b;
 * 
 * f4(a)  is ok
 * f4(b) is illegal
 */

}




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



    //const and pointers

    int a = 5;
    int *ap = &a;

    //pointer to const
    int b = 4;
    int const* bp = &b;
    // *bp = 10; // not allowed
    int b2 = 10;
    bp = &b2;   // i promise not to modify what i point to
    
    //Const pointer
    int c = 12;
    int* const cp = &c;

    *cp = 20;
    int c2 = 40;
    // cp = &c2; // the pointer is stuck here forever

    //const pointer to const data
    int d = 50;
    const int* const dp = &d;
    //*dp = 100; //not allowed
    int d2 = 200; 
    //dp = &d2; //not allowed   //hands off everything
    //i cannot change what i point to and i cannot change is pointed to

    /*
    table               
    int *p                  can be changed      can repoint
    const int* p            cannot be changed   can repoint
    int* const p            can be changed      cannot repoint      
    const int* const p      cannot be changed   cannot repoint
    */
    
    //read the declaration backwards
    /**
     * const int * const p
     * p - is a const pointer, to a const int
     */






    return 1;

}