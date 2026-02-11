#pragma once
#include <string>


struct Item{
    Item(const int id, const std::string name, const double price ) : id(id), name(name), price(price) {}
    const int id;
    const std::string name;
    const double price;

    std::string to_string()const {
        return "name: " + name + " price: " + std::to_string(price);  
    }
};


