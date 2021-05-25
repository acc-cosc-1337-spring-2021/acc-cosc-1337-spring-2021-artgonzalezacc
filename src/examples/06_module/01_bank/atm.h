//atm.h
#ifndef ATM_H
#define ATM_H
#include<iostream>
#include<stdlib.h>//rand function
#include<vector>
#include "bank_account.h"

class ATM
{
public:
    ATM();
    void display_balance()const;
    void scan_card();
private:
    std::vector<BankAccount> accounts;
    int get_balance_from_DB();
    int customer_index;

};

#endif
