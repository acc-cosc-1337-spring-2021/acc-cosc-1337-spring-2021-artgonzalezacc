#include<iostream>
using std::cout;

#include "bank_account.h"

int main()
{
	BankAccount account = get_account(100);//variable-an instance of BankAccount object in memory
	
	display_account(account);

	cout<<"Deposit $50\n";
	account.deposit(50);
	cout<<"Balance: "<<account.get_balance()<<"\n";

	cout<<"Withdraw $10\n";
	account.withdraw(10);
	cout<<"Balance: "<<account.get_balance()<<"\n";

	return 0;
}