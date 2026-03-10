#include <iostream>
#include "Link.h"
#include "LinkedList.h"
#include "cat.h"
/*
ex 3
Linked list
*/


/*
cmake -S . -B build     --- to setup
cmake --build build     --- to build

*/

int main(void)
{

    LinkedList list;

    cat c1("boerge", 5, 30);
    cat c2("cesare" , 5, 40);
    cat c3("coco" , 3, 10);
    cat c4("carlo" , 4, 15);

    //inserts

    list.insert_front(c1);

    std::cout << "list content: " << std::endl;
    std::cout << list.to_string() << std::endl;


    list.insert_front(c2);
    list.insert_front(c3);
    list.insert_front(c4);

    std::cout << "list content multi element:" << std::endl;
    std::cout << list.to_string() << std::endl;

    list.delete_front();
    
    
    std::cout << "after deleting front:" << std::endl;
    std::cout << list.to_string() << std::endl;

    

    return 1;
}