#pragma once
#include <string>

class Dato
{
private:
    std::string år ="N/A";
    std::string måned="N/A";
    std::string dag="N/A";

public:
    Dato() = default;
    Dato(std::string år, std::string måned, std::string dag) :
    år(år), måned(måned), dag(dag) {}

    std::string getÅr() {return this-> år;}
    std::string getMåned() {return this->måned;}
    std::string getDag() {return this->dag;}

    void setÅr(std::string n) {this->år= n;}
    void setMåned(std::string n) {this->måned= n;}
    void setDag(std::string n) {this->dag = n;}
};