#include "Link.h"

Link::Link()
{
    this->data = nullptr;
    this->next = nullptr;
}
Link::Link(const cat& data)
{
    this->next = nullptr;
    this->data = new cat(data);
}
Link::Link(const cat& data, Link* next)
{
    this->next = next;
    this->data = new cat(data);
}


Link::~Link()
{
    //only deallocate data, not the link itself
    delete data;
}

cat* Link::get_data()
{
    return data;
}
void Link::set_data(cat* data)
{
    this->data = data;
}
Link* Link::get_next()
{
    return next;
}
void Link::set_next(Link* next)
{
    this->next = next;
}

std::string Link::to_string()const 
{
    return (this->data)->to_string();
}