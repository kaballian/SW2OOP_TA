#include "cat_array.h"

cat_array::cat_array(int initialSize, int re_alloc_size)
    : size(initialSize), re_alloc_size(re_alloc_size) 
{
    head = 0;
    array = new cat*[initialSize];//{nullptr};
    for(int i = 0; i < size; i++)
    {
        array[i] = nullptr;
    }
}
cat_array::~cat_array()
{
    for(int i = 0; i < size; i++)
    {
        delete array[i];
    }
    delete []array;
}
void cat_array::add(std::string n, int w, int h)
{
    

    if(head == size)
    {
        //create new larger array
        int newSize = size + re_alloc_size;
        cat **temp_arr = new cat*[newSize];
        //copy old pointers
        for(int i = 0; i < size; i++)
        {
            temp_arr[i] = array[i];
        }
        //initialize new empty slots as nullptrs
        for(int i = size; i < newSize; i++)
        {
            temp_arr[i] = nullptr;
        }
        //delete the old data
        delete []array;
        //update the pointer
        array = temp_arr;
        //update the size
        size = newSize;
        
    }
    array[head++] = new cat(n,w,h);
}

cat cat_array::get(int index) const
{
    return *array[index];
}