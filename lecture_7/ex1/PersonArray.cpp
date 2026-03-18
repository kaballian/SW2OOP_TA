#include "personArray.h"

PersonArray::PersonArray(const PersonArray& obj)
{
    this->size_ = obj.size_;
    this->head_ = obj.head_;
    this->re_alloc_size = obj.re_alloc_size;

    p_arr = new Person[size_];
    for(int i = 0 ; i < size_; i++)
    {
        p_arr[i] = obj.p_arr[i];
        this->head_++;
    }

}

Person& PersonArray::operator[](int index)
{
    return p_arr[index];
}

bool PersonArray::operator==(const PersonArray& rhs)
{
    if(this == &rhs)
    {
        return true;
    }else{
        return false;
    }
}
bool PersonArray::contains(const Person& p)
{
    for(int i = 0 ; i < size_; i++)
    {
        if(p_arr[i] == p)
        {
            return true;
        }
    }
    return false;
}