//bank_account.h
#include<iostream>

class BankAccount
{
public://access specifier
    BankAccount() = default; //synthesized default constructor
    BankAccount(int b) : balance(b){}
    int get_balance()const {return balance;}
    void deposit(int amount);
    void withdraw(int amount);
private:
    int balance{0};//protect data integry-Encapsulation
};

//Free functions-NOT PART OF THE BANKACCOUNT CLASS
void display_account(const BankAccount& account);
BankAccount get_account(int amount);
