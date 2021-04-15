//bank_account.h

#ifndef BRANCH_BANK_H
#define BRANCH_BANK_H

class BranchBank
{
public:
    BranchBank(int b) : branch_balance(b){}
    void update_balance(int b);
    int get_branch_balance()const {return branch_balance;}

private:
    int branch_balance;
};

#endif


#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H
#include<iostream>

class BankAccount
{
friend void friend_display_balance(const BankAccount& account);
friend void BranchBank::update_balance(int b);
friend std::ostream& operator<<(std::ostream& out, const BankAccount& a);
friend std::istream& operator>>(std::istream& in, BankAccount& a);
//friend BankAccount operator+(const BankAccount& a1, const BankAccount& a2);

public://access specifier
    BankAccount() = default; //synthesized default constructor
    explicit BankAccount(int b) : balance(b){ bank_balance += b;}
    virtual int get_balance()const = 0;//pure virtual function
    virtual void deposit(int amount) final;//locking them down
    virtual void withdraw(int amount) final;
    static int get_bank_balance(){return bank_balance;}
protected:
    int balance{0};//1 customer's balance
private:
    static int bank_balance;//all the bank's customer balances
};

//Free functions-NOT PART OF THE BANKACCOUNT CLASS
void display_account(const BankAccount& account);
//BankAccount get_account(int amount);

#endif