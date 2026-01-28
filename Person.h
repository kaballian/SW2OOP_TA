#pragma once
#include <string>

class Person
{

private:
    std::string name;
    int age;
    
public:
    Person(std::string name="N/A", int age=99) : name(name), age(age) {}
    void setName(std::string n) {this->name = n;}
    void setAge(int n) {this->age = n;}

    std::string getName(){return this->name;}
    int getAge(){return this->age;}

};