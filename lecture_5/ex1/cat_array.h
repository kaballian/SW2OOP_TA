#pragma once
#include "cat.h"
#include <string>
#include <stdexcept>
class cat_array
{

    private:
    cat** array;
    int head;
    int size;
    int re_alloc_size;

    public:
    cat_array(int initialSize, int re_alloc_size);
    ~cat_array();
    void add(std::string n, int w, int h);
    int get_array_size() const{return size;}
    cat get(int index) const;
};