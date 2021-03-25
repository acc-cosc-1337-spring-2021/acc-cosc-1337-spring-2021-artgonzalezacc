#include<iostream>
using std::cout;

#include "bank_account.h"

int main()
{
	BankAccount account;//variable-an instance of BankAccount object in memory
	cout<<"Balance: "<<account.get_balance()<<"\n";

	cout<<"Deposit $50\n";
	account.deposit(50);
	cout<<"Balance: "<<account.get_balance()<<"\n";

	cout<<"Withdraw $10\n";
	account.withdraw(10);
	cout<<"Balance: "<<account.get_balance()<<"\n";

	return 0;
}