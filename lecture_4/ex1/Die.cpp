#include "Die.h"   

std::mt19937 Die::gen_{ std::random_device{}() };
std::uniform_int_distribution<int> Die::dist_{ 1, 6 };

std::vector<int> Die::rolls_(6,0);
int Die::NumOfRoll = 0;

void Die::roll()
{

    this->value = dist_(gen_);
    rolls_[value - 1] += 1;
    NumOfRoll++;
    if((NumOfRoll % 1000) == 0)
    {
        log_dice_rolls();
    }
    
}

void Die::log_dice_rolls()
{   
    std::cout << "roll: " << NumOfRoll << " ";
    for(int i = 0; i < (int)rolls_.size(); i++)
    {
        std::cout << i+1 << ":" <<rolls_[0] << " ";
    }
    std::cout << std::endl;
}

std::vector<double> Die::freq()
{
    
    int totRolls = number_of_throws();
    std::vector<double> temp(rolls_.size(), 0);
    std::transform(
        rolls_.begin(), 
        rolls_.end(), 
        temp.begin(),
        [totRolls](int val) 
        {return static_cast<double>(val) / totRolls;}
    );    

    return temp;

}