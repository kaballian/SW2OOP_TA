#include "Person.h"

Person& Person::operator=(const Person &rhs)
{
    this->name_ = rhs.name_;
    this->age_ = rhs.age_;
    this->id    = rhs.id;
    return *this;
}

std::string Person::to_string(void)
{
    std::string res;

    res += "name: " + name_ + " age: " + std::to_string(age_) + " id: " + std::to_string(id); 
    return res;
}

bool Person::operator<(const Person&rhs)
{
    return this->id < rhs.id;
}
bool Person::operator>(const Person& rhs)
{
    return this->id > rhs.id;
}
bool Person::operator==(const Person& rhs) const
{
    return this->id == rhs.id;
}