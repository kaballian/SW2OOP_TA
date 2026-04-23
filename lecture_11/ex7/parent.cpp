#include "parent.h"
#include "randdo.h"


parent::parent()
{}
parent::parent(const int number_of_resources) : size_of_resources(number_of_resources)
{
    random_resources = new resource *[size_of_resources];

    for(int i = 0; i < number_of_resources; i++)
    {
        random_resources[i]= new resource(get_number());
    }
} 

parent::parent(const parent& other)
{
    /*copy content*/
    this->size_of_resources = other.size_of_resources;
    random_resources = new resource*[size_of_resources];

    /*deep copy*/
    for(int i = 0; i < size_of_resources; ++i)
    {
        random_resources[i] = new resource(*rhs.random_resource[i]);

    }


}

parent& parent::operator=(const parent& rhs)
{
    if(this == &rhs)
    {
        return *this;
    }

    for(int i = 0; i < size_of_resources; ++i)
    {
        delete random_resources[i];
    }
    delete[] random_resources;

    size_of_resources = rhs.size_of_resources;
    random_resources = new resource*[size_of_resources];    
    
    /*deep copy*/

    for(int i = 0; i < size_of_resources; ++i)
    {
        random_resources[i] = new resource(*rhs.random_resources[i]);
    }

    return *this;

}
