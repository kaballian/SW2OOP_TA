#pragma once
#include "account.h"


class savings_account : public account
{

private:
    int withdraw_limit;

public:
    savings_account() : account(), withdraw_limit(50) {}
    savings_account(int limit);
    savings_account(int limit, int amount);

    void withdraw(int amount);
};