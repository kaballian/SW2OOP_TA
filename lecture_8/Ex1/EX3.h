#pragma once
#include <vector>


template<class T>
void sort(std::vector<T> &v)
{
    for(size_t i = 0; i < v.size(); i++)
    {
        for(size_t j = v.size() - 1; j>i; j--)
        {
            if(v[j-1] > v[j]) 
            {
                double temp = v[j-1];
                v[j-1] = v[j];
                v[j] = temp;
            }
        }
    }
}