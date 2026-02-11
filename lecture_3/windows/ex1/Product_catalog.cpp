#include "Product_catalog.h"

Product_catalog::Product_catalog(){} // no arg



void Product_catalog::add_item(int id, const std::string& name, double price)
{
    Item tempitem{id, name, price};
    this->items.push_back(tempitem);   
}

const Item* Product_catalog::get_item(int id) const
{

    for(std::vector<Item>::const_iterator it = this->items.begin(); it != this->items.end(); ++it)
    {
        if(it->id == id)
        {
            return &*it;
        }
    } 
    return nullptr;

}