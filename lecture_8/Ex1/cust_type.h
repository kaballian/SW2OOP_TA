#pragma once
#include <string>
class CUST_TYPE
{
    private:
    int value1;
    int value2;

    public:
    CUST_TYPE() : value1(69), value2(420) {}
    CUST_TYPE(int val1, int val2) 
        : value1(val1), value2(val2)
        {}
    CUST_TYPE(const CUST_TYPE& obj) 
        : value1(obj.value1), value2(obj.value2){}

    
        std::string to_string(void) const 
        {
            return "val1: " + std::to_string(value1) + " val2: " + std::to_string(value2);
        }
};