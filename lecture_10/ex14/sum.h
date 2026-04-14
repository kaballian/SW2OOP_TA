#pragma once
#include <vector>
#include <iterator>

template<typename T>
T sum(typename std::vector<T>::iterator begin, typename std::vector<T>::iterator end, T initial_sum)
{

    T res = initial_sum;

    for(begin; begin != end; begin++)
    {
        res += begin;
    }

    return res;
}

