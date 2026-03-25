#pragma once
#include <vector>
#include <iterator>

template<class T>
bool exists(std::vector<T>& data, T exists)
{
    /*!
    when using iterators in templates
    it must be typenamed
    because vector<T>::iterator is a dependent type
    the compiler does not know if its a type unless you
    tell explicitly
    */
    
    for(const auto& val : data)
    {
        if(val == exists)
        {
            return true;
        }
    }

    return false;
    
}