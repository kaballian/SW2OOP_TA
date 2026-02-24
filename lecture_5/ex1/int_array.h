#pragma once
#include <string>

class int_array
{
    private:
    int size_;
    int head_;
    int re_alloc_size;
    int *array_;

    public:
    int_array(int initialSize, int re_alloc_size);
    ~int_array();

    void push_back(int val);
    const std::string to_string();
    const int get_size();
    const int get_array_size();
};