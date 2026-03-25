#pragma once

#include <string>
#include <stdexcept>

template<typename T>
class dyn_array {
public:
    dyn_array(int initial_size, int re_alloc_size) 
        : size_(initial_size), re_alloc_size_(re_alloc_size) {}
        
    dyn_array(const dyn_array &obj) 
    : size_(obj.size_), 
    head_(obj.head_), 
    re_alloc_size_(obj.re_alloc_size_),
    array_(new T *[obj.size_])
    {
        for(int i = 0 ; i < head_; i++)
        {
            array_[i] = nullptr;
        }
        for(auto i = 0; i < head_; i++)
        {
            array_[i] = new T(*obj.array_[i]);
        }
    }

    ~dyn_array()
    {
        for(auto i = 0; i < head_; i++)
        {
            delete array_[i];
        }
        delete[] array_;
    }

    void add(const T &);

    T get(int index);

    [[nodiscard]] int get_size() const {return this->head_;}

    [[nodiscard]] int get_array_size() const {return this-size_;}

    [[nodiscard]] int get_re_alloc_size() const {return re_alloc_size_;}

private:
    int size_;
    int head_;
    int re_alloc_size_;
    T **array_;
};


template <typename T>
T dyn_array<T>::get(int index) 
{
    if(index < 0 || index + 1 > head_)
    {
        throw std::out_of_range("index out of range");
    }
    return *array_[index];
}

template <typename T>
void dyn_array<T>::add(const T& obj)
{
    if(head_ == size_)
    {
        T **ptr = new T*[size_ + re_alloc_size_];
        for(auto i = 0; i < head_; i++)
        {
            ptr[i] = array_[i];
        }
        for(int i = head_; i < size_; i++)
        {
            ptr[i] = nullptr;
        }
        size_ += re_alloc_size_;
        delete[] array_;
        array_ = ptr;
    }
    array_[head_++] = new T(obj);
}

