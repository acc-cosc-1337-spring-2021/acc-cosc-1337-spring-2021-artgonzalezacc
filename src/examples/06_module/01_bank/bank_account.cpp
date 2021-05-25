//bank_account.cpp
#include "bank_account.h"

void BranchBank::update_balance(int b)
{
    branch_balance += b;
    BankAccount::bank_balance += b;
}

int BankAccount::get_balance()const
{
    return balance;
}

void BankAccount::deposit(int amount)
{ 
    if(amount > 0)
    {
        balance += amount;
        bank_balance += amount;
    }
}

void BankAccount::withdraw(int amount)
{
    if(amount > 0 && amount <= balance)
    {
        balance -= amount;
        bank_balance -= amount;
    }
}

int BankAccount::bank_balance = 0;//initialize static variable

//FRIEND FUNCTION it is a free function
void friend_display_balance(const BankAccount& account)
{
    std::cout<<"Friend Display Account - Balance is: "<<account.balance<<"\n";
}

std::ostream& operator<<(std::ostream& out, const BankAccount& a)
{
    out<<"cout Overload Display Account - Balance is: "<<a.balance<<"\n";

    return out;
}

 std::istream& operator>>(std::istream& in, BankAccount& a)
 {
    int amount;
    std::cout<<"Enter amount: ";
    in>>amount;
    a.balance += amount;

    return in;
 }

/*BankAccount operator+(const BankAccount& a1, const BankAccount& a2)
{
    BankAccount account(a1.balance + a2.balance);
    return account;
}*/

//FREE FUNCTIONS DEFINITIONS
void display_account(const BankAccount& account)
{
    std::cout<<"Display Account--Balance is: "<<account.get_balance()<<"\n";
}

/*BankAccount get_account(int amount)
{
    BankAccount account(amount);
    return account;
}*/