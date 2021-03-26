//bank_account.cpp
#include "bank_account.h"

void BankAccount::deposit(int amount)
{ 
    if(amount > 0)
    {
        balance += amount;
    }
}

void BankAccount::withdraw(int amount)
{
    if(amount > 0 && amount <= balance)
    {
        balance -= amount;
    }
}

//FREE FUNCTIONS DEFINITIONS
void display_account(const BankAccount& account)
{
    std::cout<<"Display Account--Balance is: "<<account.get_balance()<<"\n";
}

BankAccount get_account(int amount)
{
    BankAccount account(amount);
    return account;
}