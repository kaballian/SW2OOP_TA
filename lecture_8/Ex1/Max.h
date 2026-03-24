#pragma once
#include <vector>
#include <iterator>
#include <stdexcept>

template<class T>
T max(std::vector<T>vec)
{
    if(vec.empty())
        throw std::out_of_range("out of range");
    
    T temp = vec[0];
    for(int i = 0; i < vec.size(); i++)
    {
        if(temp < vec[i])
        {
            temp = vec[i];
        }
    }

    return temp;
}