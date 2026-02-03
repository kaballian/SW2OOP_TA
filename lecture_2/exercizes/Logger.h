#pragma once
#include <string>
#include <iostream>
class Logger
{
private:
    std::string file_name;

public:
    Logger();
    Logger(const std::string& name) : file_name(name){}

    void write_in(std::string text) {std::cout << text << std::endl;} 
};