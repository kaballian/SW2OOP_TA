#pragma once
#include <iostream>
template<class T>
T linearInterpolation(T x0, T y0, T x1, T y1, T x)
{
    T y;

    y = y0 + ((y1-y0)*(x-x0)) / (x1-x0);

    return y;
}

void printCoordinates(float x, float y)
{
    std::cout << "(" << x << "," << y << ")" << std::endl;
}