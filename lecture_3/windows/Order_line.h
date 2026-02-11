#pragma once
#include <string>
#include "Item.h"

class Order_line
{

private:
    const Item* item;
    int count = 1;
public:
    Order_line(); //no arg
    Order_line(const Item* item, int count=1) : item(item), count(count){}

    const double subTotal() {return this->item->price * this->count;};
    const int getItemCd() {return this->item->id;};

    void add(int count) {this->count += count;};

    const std::string to_string();

    bool operator=(const Order_line& rhs) const;
   

};
