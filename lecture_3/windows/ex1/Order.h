#pragma once
#include <vector>
#include <string>
#include "Order_line.h"
#include "Item.h"
class Order{

    private:
    int id;
    const int register_id;
    std::vector<Order_line> lines;

    public:
    Order(); // no arg
    Order(int register_id) : register_id(register_id){}
    void next_sale(int order_id);
    void add_item(const Item* item, int count);
    const double total();
    const std::string to_string();

};