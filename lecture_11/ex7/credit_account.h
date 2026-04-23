#pragma once
#include "account.h"


class credit_account : public account
{

    private:
    int credit;

    public:
    credit_account() : account(), credit(100){}
    credit_account(int credit, int balance) : account(balance), credit(credit){}

    
    void withdraw(int amount);

};