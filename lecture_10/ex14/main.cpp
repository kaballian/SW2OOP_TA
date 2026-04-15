#include <iostream>
#include "vect_3.h"
#include "sum.h"
#include <vector>

#define OPG_NR 15

int main(void)
{
#if OPG_NR == 14
    vect v1(1.0, 2.0);
    vect v2(2.0, 3.0);
    vect v3(4.0, 5.0);
    // vect v4 = v1 + v2;
    vect v4(5.0 ,6.0);

    // std::cout << v4.to_string() << std::endl;



    std::vector<vect> myVect{v1,v2,v3,v4};

    std::vector<vect>::iterator it_start = myVect.begin();
    std::vector<vect>::iterator it_end = myVect.end();

    vect v5 = sum<vect>(it_start, it_end, vect{0,0});

    std::cout << v5.to_string() << std::endl;

#elif OPG_NR == 15
    /*iterator traits extracts value type from whatever iterator
    is passed unto it*/
    /*the return type is determined at compile time from the
    iterator that is passed into it*/

    std::vector<int> myVect2 = {1,5,4,76,78,2,3,4};

    std::vector<int>::iterator being = myVect2.begin();
    std::vector<int>::iterator end = myVect2.end();

    int val = sum_2(being, end, 0);
    std::cout << "val: " << val << std::endl;


#endif

    


    

    return 1;
}