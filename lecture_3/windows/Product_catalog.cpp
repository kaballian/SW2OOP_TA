#include "Product_catalog.h"

Product_catalog::Product_catalog(){} // no arg

void Product_catalog::initialize_vector()
{
    this->items.reserve(10);
}

void Product_catalog::reallocate_vector(const int size)
{
    this->items.resize(this->items.size() + size); //increased the current size by the current size
}

void Product_catalog::add_item(int id, const std::string& name, double price)
{
    Item tempitem{id, name, price};
    this->items.push_back(tempitem);   
}

const Item* Product_catalog::get_item(int id)
{

    for(std::vector<Item>::iterator it = this->items.begin(); it != this->items.end(); ++it)
    {
        if(it->id == id)
        {
            return &*it;
        }
    } 
    return nullptr;

}