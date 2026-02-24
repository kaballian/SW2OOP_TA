#pragma once
#include <string>
#include <algorithm>
class int_array
{
    private:
    int size_; //size of the array
    int head_; //index of the latest addition
    int re_alloc_size; //new size of array
    int *array_; //the array lule

    public:
    int_array(int initialSize, int re_alloc_size);
    ~int_array();

    void push_back(int val);
    const std::string to_string();
    const int get_size();
    const int get_array_size();
};