#include "atm.h"
#include "bank_account.h"
#include "savings_account.h"
#include "checking_account.h"

#include<iostream>
using std::cout; using std::cin;

#include<memory>
using std::unique_ptr; using std::make_unique;

int main()
{
	unique_ptr<SavingsAcount>  savings0 = make_unique<SavingsAcount>();
	cout<<"Savings Balance: "<<savings0->get_balance()<<"\n";
	
	unique_ptr<SavingsAcount> savings1 = make_unique<SavingsAcount>(1000);
	cout<<"Savings Balance: "<<savings1->get_balance()<<"\n";
	cout<<"Savings interest: "<<savings1->get_interest_earned()<<"\n\n";

	CheckingAccount checking(100);
	cout<<"Checking Balance: "<<checking.get_balance()<<"\n\n";

	//pointers
	BankAccount* a = new BankAccount(50);
	SavingsAcount* b = new SavingsAcount(500);
	
	
	

	return 0;
}