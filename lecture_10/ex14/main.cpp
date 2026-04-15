#include <iostream>
#include "vect_3.h"
#include "sum.h"
#include <vector>

#define OP_NR 1

int main(void)
{
#if OP_NR == 1
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


#endif

    


    

    return 1;
}