#include "Checkout_counter.h"

Checkout_counter::Checkout_counter(const int id, const Product_catalog& Product_catalog) 
: id(id), productCatalog(Product_catalog), order(id)
{
}
const std::string Checkout_counter::end_sale()
{
    
    return this->order.to_string();
    
}
void Checkout_counter::start_sale()
{   
    ++orderIdGenerator;
    this->order.next_sale(orderIdGenerator);

}
void Checkout_counter::scan_item(int id, int count)
{
    const Item* item = productCatalog.get_item(id);
    if(!item)
    {   
        //if item is not found, do somthing else
        return;
    }
    this->order.add_item(item, count);

}
