#include<iostream>
#include "switch.h"

using std::cin;  using std::cout;

int main() 
{
	auto option = 0;
	cout<<"Enter option [1-4]: ";
	cin>>option;

	auto result = menu(option);

	cout<<result;

	return 0;
}