#pragma once

class resource
{

private:
    int value_;
public:
    resource() : value_(10){}
    explicit resource(const int value) : value_(value){}
    int get_value()const {return this->value_;}


};