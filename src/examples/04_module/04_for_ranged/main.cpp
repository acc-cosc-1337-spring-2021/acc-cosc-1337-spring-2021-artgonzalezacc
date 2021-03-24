#include "for_ranged.h"

using std::cout; using std::string;

int main() 
{
	char letter = 'a';//simple type; not a class

	std::string name;
	
	//loop would be here
	name.push_back('0');//0
	name.push_back('1');//01
	name.push_back('1');//011

	

		
	
	
	
	
	
	
	
	loop_string_w_index(name);
	//loop_string_w_for_range(name);
	cout<<name<<"\n";

	/*cout<<"size of letter char in memory "<<sizeof(letter);

	cout<<"Address of name "<<&name<<"\n";
	cout<<"size of string address "<<sizeof(&name)<<"\n";
	cout<<"size of string class in memory "<<sizeof(name)<<"\n";
	cout<<"capacity of string "<<name.capacity()<<"\n";
	cout<<"size of characters in string "<<name.size()<<"\n";

	string name1("Mary");
	name1[0] = 'm';
	cout<<name1<<"\n";

	string name2{'J', 'o', 'e'};
	cout<<name2<<"\n";*/
	



	return 0;
}