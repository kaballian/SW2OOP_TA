#pragma once
#include "Link.h"
#include "cat.h"

class LinkedList
{
private:
    // Link head;
    int size_;
public:
    LinkedList();
    ~LinkedList();
    Link head; //implemented as composition and not pointer! (SENTINEL HEAD)
    void insert_front(const cat& obj);
    void delete_front(void);

    void insert_after(const cat& obj, Link& link);
    void delete_after();

    Link* get(int index);

    const int size(void) const {return this->size_;}

    std::string to_string()const;


};