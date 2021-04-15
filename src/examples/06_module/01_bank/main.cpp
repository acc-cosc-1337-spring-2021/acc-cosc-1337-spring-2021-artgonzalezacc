#include "atm.h"
#include "bank_account.h"
#include "savings_account.h"
#include "checking_account.h"

#include<iostream>
using std::cout; using std::cin;

#include<memory>
using std::unique_ptr; using std::make_unique;

#include<vector>>
using std::vector;

int main()
{
	/*unique_ptr<SavingsAcount>  savings0 = make_unique<SavingsAcount>();
	cout<<"Savings Balance: "<<savings0->get_balance()<<"\n";
	
	unique_ptr<SavingsAcount> savings1 = make_unique<SavingsAcount>(1000);
	cout<<"Savings Balance: "<<savings1->get_balance()<<"\n";
	cout<<"Savings interest: "<<savings1->get_interest_earned()<<"\n\n";

	CheckingAccount checking(100);
	cout<<"Checking Balance: "<<checking.get_balance()<<"\n\n";*/

	//unique pointers
	//unique_ptr<BankAccount> a = make_unique<BankAccount>(100);
	unique_ptr<BankAccount> s = make_unique<SavingsAcount>(500);
	unique_ptr<BankAccount> c = make_unique<CheckingAccount>(100);
	cout<<"Balance: "<<s->get_balance()<<"\n";
	cout<<"Interest Earned: "<<static_cast<SavingsAcount*>(s.get())->get_interest_earned()<<"\n";
	
	vector<unique_ptr<BankAccount>> accounts;
	accounts.push_back(std::move(s));
	accounts.push_back(std::move(c));

	for(auto& account: accounts)
	{
		cout<<account->get_balance()<<"\n";
	}

	return 0;
}