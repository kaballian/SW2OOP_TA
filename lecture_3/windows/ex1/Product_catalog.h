#pragma once
#include <vector>
#include "Item.h"
#include <string>


class Product_catalog{


private:
    std::vector<Item> items;


public:
    Product_catalog();

   
    void add_item(int id, const std::string& name, double price);
    const Item* get_item(int id)const;
};