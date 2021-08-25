#include "atm.h"
#include "bank_account.h"
#include "savings_account.h"
#include "checking_account.h"

#include<iostream>
using std::cout; using std::cin;

#include<memory>
using std::unique_ptr; using std::make_unique;

#include<vector>
using std::vector;

int main()
{
	const int SIZE = 3;
	SavingsAcount accounts[SIZE]{SavingsAcount(50), SavingsAcount(100), 
	                             SavingsAcount(150)};

	cout<<accounts[0]<<"\n";
	cout<<accounts[1]<<"\n";
	cout<<accounts[2]<<"\n";

	for(auto account: accounts)
	{
		cout<<account<<"\n";
	}

	SavingsAcount* ptr = accounts;
	cout<<"\n\n"<<*ptr<<"\n";
	cout<<ptr->get_balance()<<"\n";
	
	return 0;
}