#pragma once

#include <iostream>
#include <stdexcept>

class account
{
private:
    int balance;

public:
    account() : balance(100){}
    account(int acc);

    void withdraw(int amount);
    void deposit(int amount);
    int get_balance(void) const;


};