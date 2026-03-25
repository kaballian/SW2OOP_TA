#pragma once
#include <vector>
#include <iterator>



template<typename T>
class Set
{
    private:
    std::vector<T> data;
    
    public:
    Set() {}
    Set(const Set<T>& obj) : data(obj.data){}

    
    void push_back(const T &t);
    bool contains(const T &t);

    size_t size() const {return this->data.size();}

    T operator[](int index);

};


template<typename T>
void Set<T>::push_back(const T &t)
{
    data.push_back(t);
}

template<typename T>
bool Set<T>::contains(const T &t)
{
    typename std::vector<T>::iterator it;

    for(it = data.begin(); it != data.end(); ++it)
    {
        if(it == t)
        {
            return true;
        }
    }
    return false;
}
template <typename T>
T Set<T>::operator[](int index)
{
    return data[index];
}
