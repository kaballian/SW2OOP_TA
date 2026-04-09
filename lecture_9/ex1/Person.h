#pragma once
#include <string>
#include <iostream>

class Person
{

    private:
    int SSN_;
    std::string name;

    public:
    Person() : SSN_(420), name("N/A"){}
    Person(int ssn, std::string name) : SSN_(ssn), name(name){}
    Person(const Person & to_copy) : SSN_(to_copy.SSN_), name(to_copy.name) { std::cout <<"copy called for" << SSN_ << std::endl;}
    friend std::ostream& operator<<(std::ostream& out, const Person& rhs);
    bool operator<(const Person& rhs) const;

};


