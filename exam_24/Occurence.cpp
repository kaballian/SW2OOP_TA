#include "Occurence.h"

int occurence(std::vector<int> list , int target)
{
    //return number of occurences in a list, given a target

    int count = 0;
    for(auto i : list)
    {
        if(i == target)
        {
            count++;
        }
    }
    return count;
}
void occurence_array(int* values, int size, int target, int* result)
{
    int count = 0;
    for(int i = 0; i < size; i++)
    {
        if(values[i] == target)
        {
            count++;
        }
    }
    
    *result = count;
}