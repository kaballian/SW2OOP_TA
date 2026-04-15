#pragma once
#include <vector>
#include <iterator>

template<typename T>
T sum(typename std::vector<T>::iterator begin, typename std::vector<T>::iterator end, T initial_sum)
{

    T res = initial_sum;

    for(; begin != end; begin++)
    {
        res += *begin;
    }

    return res;
}


template<typename Iterator>
typename std::iterator_traits<Iterator>::value_type
sum_2(Iterator begin, Iterator end, typename std::iterator_traits<Iterator>::value_type initial_sum)
{
    for(; begin != end; ++begin)
    {
        initial_sum += *begin;
    }
    return initial_sum;
}

