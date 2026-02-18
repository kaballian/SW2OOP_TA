#pragma once
#include <random>
#include <vector>
#include <iostream>
#include <algorithm>
class Die{
    public:
    Die() { roll();}
    void roll();
    [[nodiscard]] int get_value() const {return value;};
    
    static std::vector<double> freq();
    static void log_dice_rolls();


    private:
    int value{1};
    static int NumOfRoll;
    static std::vector<int> rolls_;
    static std::mt19937 gen_;
    static std::uniform_int_distribution<int> dist_;

    static int number_of_throws(){return NumOfRoll;}
    

};  
