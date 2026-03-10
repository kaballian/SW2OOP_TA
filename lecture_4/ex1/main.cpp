#include <iostream>
#include "Die.h"
#include <vector>
#include <random>
#include <numeric>

int main(void)
{
    
    
    // std::random_device rd_;
    // std::mt19937 mt_{rd_()};
    // std::uniform_int_distribution<int> dist_(1,6);
    // // for(size_t i = 0 ; i <10; i++){
    // //     std::cout << dist_(mt_) << " ";
    // // }

    Die d1;
    // std::cout << "roll: " << d1.get_value() << std::endl;
    // std::vector<int> rolls(6,0); // 6 elements at value0

    


    int numOfRolls = 10000;
    // for(int i = 0; i < numOfRolls; i++)
    // {
    //     d1.roll();
    //     // std::cout << d1.get_value() << std::endl;
    //     rolls[d1.get_value() - 1] += 1;
    // }
    // for(int i = 0; i < rolls.size(); i++)
    // {
    //     std::cout << rolls[i] << std::endl;
    // }

    
    for(int i = 0 ; i < numOfRolls; i++)
    {
        d1.roll();
    }

    std::vector<double> frekks = d1.freq();
    for(std::vector<double>::iterator it = frekks.begin(); it != frekks.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    double accum = std::accumulate(frekks.begin(), frekks.end(), 0.0);
    std::cout << "accumulated frequencies: " << accum << std::endl;
    return 1;
}