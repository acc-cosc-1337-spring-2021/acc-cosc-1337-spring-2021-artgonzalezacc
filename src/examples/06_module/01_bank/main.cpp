#include<iostream>
using std::cout; using std::cin;

#include "atm.h"
#include "bank_account.h"

int main()
{
	BankAccount a1(100);
	BankAccount a2(200);
	BankAccount account = a1 + a2;//get_account(100);//variable-an instance of BankAccount object in memory
	cin>>account;
	/*char choice;
	
	do
	{
		ATM atm;

		atm.scan_card();
		atm.display_balance();
		cout<<"Continue? y or n";
		cin>>choice;

	}while(choice == 'y' || choice == 'Y');*/

	cout<<account;
	friend_display_balance(account);
	display_account(account);

	cout<<"Deposit $50\n";
	account.deposit(50);
	cout<<"Balance: "<<account.get_balance()<<"\n";

	cout<<"Withdraw $10\n";
	account.withdraw(10);
	cout<<"Balance: "<<account.get_balance()<<"\n";

	return 0;
}