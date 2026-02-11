#pragma once
#include <iostream>
#include "Order.h"
#include "Product_catalog.h"
class Checkout_counter
{
private:
    const int id;
    int orderIdGenerator=0;
    Order order;
    const Product_catalog& productCatalog; //class must have a reference to an instantiation and it cannot be null
    //this forced a constructor pattern to instantiate it (or atleast take reference to one)
public:
    Checkout_counter(const int id, const Product_catalog& Product_catalog);
    const std::string end_sale();
    void start_sale();
    void scan_item(int id, int count);
};