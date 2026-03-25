#pragma once
#include <iostream>
#include <string>

class Person
{
    private:
    std::string name_;
    int age_;
    int id;
    
    public:
    Person() : name_("noname"), age_(99), id(420) {}
    Person(std::string name, int age , int id) : name_(name), age_(age), id(id) {}
    Person(const Person& p) : name_(p.name_), age_(p.age_), id(p.id){}
    Person& operator=(const Person &rhs);
    std::string to_string(void);
    bool operator<(const Person&rhs);
    bool operator>(const Person&rhs);
    bool operator==(const Person&rhs)const;
};