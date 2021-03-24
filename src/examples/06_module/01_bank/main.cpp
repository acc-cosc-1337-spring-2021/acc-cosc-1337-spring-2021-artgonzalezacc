#include<iostream>
#include<string>
using std::string;
using std::cout;
#include "bank_account.h"

int main()
{
	string name;//variable

	BankAccount account;//variable-an instance of BankAccount object
	cout<<"Balance: "<<account.get_balance()<<"\n";

	return 0;
}