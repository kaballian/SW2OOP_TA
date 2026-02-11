#include "Order.h"

void Order::next_sale(int order_id)
{
    this->id = order_id;
    lines.clear();
}

void Order::add_item(const Item* item, int count=1) 
{
    for(std::vector<Order_line>::iterator it = this->lines.begin(); it != this->lines.end(); ++it)
    {
        if(it->item->name == item->name)
        {
            it->add(count);
            return;
        }
    }
    Order_line tempOL{item};
    this->lines.push_back(tempOL);
}