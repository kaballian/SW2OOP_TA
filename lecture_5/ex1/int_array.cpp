#pragma once
#include "int_array.h"

int_array::int_array(int initialSize, int re_alloc_size)
: size_(initialSize), re_alloc_size(re_alloc_size)
{
    this->head_= 0;
    array_ = new int[size_];
}

void int_array::push_back(int val)
{
    //must increase the array size if the head==size
    if(head_ == size_)
    {
        int newSize = head_+1;
        int *temp = new int[newSize]; // allocate new array +1
        std::copy(array_, array_ + head_, temp);
        
        //free memory
        delete[] array_;
        //update pointer
        array_ = temp; 
        //update size
        size_ = newSize;
    }else{
    array_[head_++] = val;
    }
}

const std::string int_array::to_string()
{
    std::string output = "";

    for(int i = 0; i < this->size_; i++)
    {
        output += std::to_string(array_[i]) + " ";
    }
    return output;
}

const int int_array::get_size()
{
    return this->head_;
}

const int int_array::get_array_size()
{
    return this->size_;
}

