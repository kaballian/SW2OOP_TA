#include <iostream>
#include "cat_array.h"




/*
cmake -S . -B build     --- to setup
cmake --build build     --- to build

*/

int main(void)
{  

    cat_array ca{2,1};
    ca.add("boerge", 2,1);
    ca.add("cesare",3,2);

    cat c2 = ca.get(0);
    cat c3 = ca.get(1);

    std::cout << c2.to_string() << std::endl;
    std::cout << c3.to_string() << std::endl;


    std::cout << "length: " << ca.get_array_size() << std::endl;

    ca.add("coco", 1,1);
    try{
        cat c4 = ca.get(2);
        std::cout << c4.to_string() << std::endl;
        std::cout << "length: " << ca.get_array_size() << std::endl;
        }catch(const std::runtime_error &e)
            {
                std::cerr << e.what() << std::endl;
            }
                
        



    // std::cout << "fuck" << std::endl;
    return 1;
}