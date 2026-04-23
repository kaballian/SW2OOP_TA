#include "credit_account.h"

credit_account::credit_account(int credit, int balance) 
: account(balance), credit(credit)
{
    if(balance + credit < 0)
    {
        throw std::invalid_argument("balance and credit are below 0");
    }
}


void credit_account::withdraw(int amount)
{
    account::withdraw(amount);
}
