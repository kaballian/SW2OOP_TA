#pragma once
#include <string>
class Address
{

private:
    std::string street;
    int number;
    int floor;
    std::string zipcode;
    std::string city;
    std::string country;

public:
    Address();
    std::string to_string();

    Address& set_street (std::string street) {this->street = street; return *this;}
    Address& set_number (int number){this->number = number;return *this;}
    Address& set_floor (int floor){this->floor = floor;return *this;}
    Address& set_zipcode (std::string zipcode) {this->zipcode = zipcode;return *this;}
    Address& set_city (std::string city){this->city = city;return *this;}
    Address& set_country (std::string country){this->country = country;return *this;}

};