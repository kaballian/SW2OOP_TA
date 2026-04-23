#pragma once

#include <random>

std::random_device rd;
std::mt19937 rng(rd());
std::uniform_int_distribution<int> distribution(1,100);
inline int get_number(){
    return distribution(rng);
}