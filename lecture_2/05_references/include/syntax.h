#pragma once

#include <iostream>

using namespace std;

void syntax() {
    int a{4};
    int b{40};
    int &c = a;
    std::cout<<"a:"<<a<<" c:"<<c<<" b:"<<b<<"\n";
    c=b;//c is NOT reassigned to be an alias for b bus simply assigned the value of b
    std::cout<<"a:"<<a<<" c:"<<c<<" b:"<<b<<"\n";
    c=100;//c and therefore a are updated, BUT not b
    //int& c; //will not compile c MUST be assigned
    std::cout<<"a:"<<a<<" c:"<<c<<" b:"<<b<<"\n";
}
