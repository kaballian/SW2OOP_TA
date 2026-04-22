#include "account.h"


account::account(int acc) : balance(acc)
{
    if(acc < 0)
    {
        throw std::invalid_argument("account balance cannot be negative");
    }
}

void account::withdraw(int amount) 
{
    if((this->balance - amount) < 0)
    {
        throw std::invalid_argument("insufficient funds");
    }else{
        this->balance -= amount;
    }
    
    
}

void account::deposit(int amount)
{
    this->balance += amount;
}

int account::get_balance(void) const
{
    return this->balance;
}