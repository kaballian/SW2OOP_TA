#include <iostream>
#include "Interpolation.h"
#include <vector>
#include "Occurence.h"
#include "Parkeringsbøde.h"
#include "Dato.h"
void opgave1(void)
{
    float input =0;
    float y0, y1, x0, x1, x;
    bool running = true;
    float result = 0;

    while(running)
    {
        std::cout << "enter 1st point x co1ordinate:" << std::endl;
        std::cin >> x0;
        std::cout << "enter 1st point y coordinate:" << std::endl;
        std::cin >> y0;
        std::cout << "enter 2nd point x coordinate:" << std::endl;
        std::cin >> x1;
        std::cout << "enter 2nd point y coordinate:" << std::endl;
        std::cin >> y1;
        std::cout << "enter target x coordinate" << std::endl;
        std::cin >> x;

        std::cout << "___________________________" << std::endl;

        result = linearInterpolation(x0, y0, x1, y1, x);
        printCoordinates(x, result);
    }

}


void opgave2(void)
{
    std::vector<int> list1 = {1,1,1,1};
    int target1 = 1;
    std::vector<int> list2 = {31,43,1,53,43,10,37,87,37,43,21};
    int target2 = 43;

    int res1 = occurence(list1, target1);
    int res2 = occurence(list2, target2);
    std::cout << "res1 " << res1 << std::endl;
    std::cout << "res2 " << res2 << std::endl;
}
void opgave2_5(void)
{
    const int size1 = 4;
    int arr1[size1] = {1,1,1,1};
    const int size2 = 11;
    int arr2[size2] = {31,43,1,53,43,10,37,87,37,43,21};
    int target1 = 1;
    int target2 = 43;

    int res1 = 0;
    int res2 = 0;
    occurence_array(arr1, size1, target1, &res1);
    occurence_array(arr2, size2, target2, &res2);

    std::cout << "res1 " << res1 << std::endl;
    std::cout << "res2 " << res2 << std::endl;

}
void opgave3(void)
{
    Dato dato1;
    Dato dato2("1994","3", "11");

    Parkeringsbøde pb1("lufthavn", 1000, dato1);
    Parkeringsbøde pb2("lufthavn", 1000, dato2);
    
    

}

int main(void)
{
    // opgave1();
    // opgave2();
    // opgave2_5();
    opgave3();
    return 1;
}