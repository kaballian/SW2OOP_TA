#include "savings_account.h"
savings_account::savings_account(int limit) : account(), withdraw_limit(limit)
{
    if(limit < 0)
    {
        throw std::invalid_argument("limit cannot be negative");
    }
}

savings_account::savings_account(int limit, int amount) 
: account(amount), withdraw_limit(limit) 
{
    if(limit < 0)
    {
        throw std::invalid_argument("limit cannot be negative");
    }
}


void savings_account::withdraw(int amount)
{
    account::withdraw(amount);
}
