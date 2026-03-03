#include "LinkedList.h" 

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
    Link *p = head.get_next();
    if(size_ > 0)
    {
        while(p->get_next() != nullptr)
        {
            
        }
    }
}