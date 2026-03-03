#include "LinkedList.h" 
#include <stdexcept>
#include <iostream>

LinkedList::LinkedList() : size_(0)
{

}

void LinkedList::insert_front(const cat& obj)
{
    Link* temp_link = new Link{obj};
    this->head.set_next(temp_link);
    size_++;
}
LinkedList::~LinkedList()
{
    /*methodology - it very badly worded in the excersize
    head -> [A] -> [B] -> [C] -> null
    we must get where A is point to (B) before we delete A, we can do this
    until a node is pointing to NULL
    */

    // Link *p = &head; 
    Link *p = head.get_next();

    while(p != nullptr)
    {
        Link* p_next_link = p->get_next();
        delete p;
        p = p_next_link;
    }   
    head.set_next(nullptr);
}

void LinkedList::delete_front(void)
{
    Link* to_delete = this->head.get_next();
    if(to_delete == nullptr)
    {
        return; // we cannot delete the void
    }
    else
    {
        Link *new_next = to_delete->get_next();
        this->head.set_next(new_next);
        delete to_delete;
        this->size_--;    
    }
}
Link* LinkedList::get(int index)
{
    try{
        if(index < 0 || index >= size_){
            throw std::out_of_range("out of range");
        }
        Link* search = head.get_next();
        
        for(int i = 0; i < index; i++)
        {   
            //this essentially iterates through the list untill we arrive at the index
            search = search->get_next();
        }
    
        return search;


    }
    catch(std::out_of_range e)
    {
        std::cout << e.what()<< std::endl;
    }
}