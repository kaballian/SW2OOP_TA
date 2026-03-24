#include <iostream>
#include <vector>
#include "Max.h"





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




    return 1;
}