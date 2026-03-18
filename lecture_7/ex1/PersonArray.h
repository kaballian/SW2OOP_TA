#pragma once
#include "Person.h"


class PersonArray
{

    private:
    Person* p_arr;
    int size_; 
    int head_;
    int re_alloc_size;

    public:
    PersonArray() : size_(10), head_(0),
    re_alloc_size(5), p_arr(new Person[size_]){}
    PersonArray(const PersonArray& obj);

    Person& operator[](int index);
    bool operator==(const PersonArray& lhs);
    bool contains(const Person& p);

    



};