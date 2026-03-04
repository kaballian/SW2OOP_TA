#pragma once
#include <string>
#include "cat.h"  

class Link
{

    private:
    Link * next;
    cat* data;

    public:
    Link();
    Link(const cat& data);
    Link(const cat& data, Link* next);

    ~Link();

    cat* get_data();
    void set_data(cat* data);
    Link* get_next();
    void set_next(Link* next);

    std::string to_string()const ;

};