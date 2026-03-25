#include <iostream>
#include <vector>
#include "Max.h"
#include "Exists.h"
#include "Person.h"
#include "string"



int main(void)
{

    std::vector<float> w = {1.2,3.4,23,42.1,52.2,4.3,5,6,7,5};
    std::cout << max(w) << std::endl;
    std::vector<int> w2 = {};
    try{
        std::cout << max(w2) << std::endl;
    }catch (std::out_of_range &e)
    {
        std::cout << e.what() << std::endl;
    }

    
    if(exists(w, (float)3.4))
    {
        std::cout << "exists" << std::endl;
    }else{
        std::cout << "does not exists" << std::endl;
    }
    
    Person p1 {"Alex", 32, 320}; 
    Person p2 {"simon", 32, 420}; 
    Person p3 {"max", 31, 1200};
    Person p4 {"jakob", 26, 141};

    std::vector<Person> ps = {
        p1,p2,p3
    };

    std::cout << p1.to_string() << std::endl;
    std::cout << p2.to_string() << std::endl;
    std::cout << p3.to_string() << std::endl;
    std::cout << p4.to_string() << std::endl;
    
    if(exists(ps, p4))
    {
        std::cout << "person exists" << std::endl;
    }else{
        std::cout << "person does not exists" << std::endl;
    }

 
    return 1;
}