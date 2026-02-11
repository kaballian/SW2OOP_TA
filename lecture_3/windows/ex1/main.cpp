#include <iostream>
#include "Item.h"
#include "Order.h"
#include "Order_line.h"
#include "Product_catalog.h"
#include "Checkout_counter.h"



int main(void)
{
    
    Product_catalog PC;
    
    PC.add_item(1, "Apple", 3);
    PC.add_item(2, "Orange", 4);
    PC.add_item(3, "Mango", 5);

    Checkout_counter counter1{1, PC};
    Checkout_counter counter2{2, PC};
    
    counter1.start_sale();
    counter1.scan_item(1, 5);
    counter1.scan_item(1, 5);
    counter1.scan_item(2, 5);
    counter1.scan_item(3, 5);
    auto res = counter1.end_sale();
    
    std::cout << res <<" \n"; 
    
    return 1;
}

