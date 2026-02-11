#include "Order.h"

void Order::next_sale(int order_id)
{
    this->id = order_id;
    lines.clear();
}

void Order::add_item(const Item* item, int count) 
{
    for(std::vector<Order_line>::iterator it = this->lines.begin(); it != this->lines.end(); ++it)
    {
        if(it->getItem()->name == item->name)
        {
            it->add(count);
            return;
        }
    }
    Order_line tempOL{item};
    this->lines.push_back(tempOL);
}

const double Order::total(){
    double res = 0.0;

    for(std::vector<Order_line>::iterator it = this->lines.begin(); it != this->lines.end(); ++it)
    {
        res += it->subTotal();
    }

    return res;
}

const std::string Order::to_string()  
{
    std::string output;
    output += "Register: " + std::to_string(this->register_id)+ "\n";
    output += "Order id: " + std::to_string(this->id) + "\n";
    for(std::vector<Order_line>::iterator it = this->lines.begin(); it != this->lines.end(); ++it)
    {
        output += it->to_string() + " ";
    }
    return output;
}