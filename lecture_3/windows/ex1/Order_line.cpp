#include "Order_line.h"



const std::string Order_line::to_string(){
    return this->item->name + "" + std::to_string(this->count) + "" + std::to_string(subTotal());
}


bool Order_line::operator=(const Order_line& rhs) const
{
    if(this->item->id == rhs.item->id)
    {
        return true;
    }else{
        return false;
    }
}
