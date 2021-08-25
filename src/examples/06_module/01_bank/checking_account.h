//checking_account.h
#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H
#include "bank_account.h"

class CheckingAccount: public BankAccount
{
public:
    CheckingAccount(){}   
    CheckingAccount(int b) : BankAccount(b){}
    int get_balance()const override{return balance + 10; }
};


#endif