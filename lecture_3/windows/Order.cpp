#include "Order.h"

void Order::next_sale(int order_id)
{
    this->id = order_id;
    lines.clear();
}

void Order::add_item(const Item* item)
{
    for(std::vector<Order_line>::iterator it = this->lines.begin(); it != this->lines.end(); ++it)
    {
        
    }
}