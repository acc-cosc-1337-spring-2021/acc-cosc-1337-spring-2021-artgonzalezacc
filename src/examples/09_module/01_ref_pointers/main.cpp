#include "ref_pointers.h"
#include<iostream>
using std::cout;

#include<memory>
using std::unique_ptr; using std::make_unique;

#include<vector>
using std::vector;

int main() 
{
	//references
	int num = 0, num1 = 5;
	int& num_ref = num;

	cout<<"Value of num: "<<num<<"\n";
	cout<<"Address of num: "<<&num<<"\n";
	cout<<"Value of num via num_ref: "<<num_ref<<"\n\n";

	num_ref = num1;//We got the value of num1 5??important to remember 
	cout<<"Value of num1 via num_ref: "<<num_ref<<"\n";
	cout<<"Address of num1: "<<&num1<<"\n";
	cout<<"Address of num: "<<&num_ref<<"\n\n";

	//pointers
	int num2 = 10, num3 = 15;
	int* num_ptr = &num2;

	cout<<"Value of num2: "<<num2<<"\n";
	cout<<"Address of num2: "<<&num2<<"\n";
	cout<<"Value of num2 via num_ptr: "<<*num_ptr<<"\n";
	cout<<"Address of num2 via num_ptr: "<<num_ptr<<"\n";
	cout<<"Address of num_ptr: "<<&num_ptr<<"\n\n";

	num_ptr = &num3;
	cout<<"Value of num3: "<<num3<<"\n";
	cout<<"Address of num3: "<<&num3<<"\n";
	cout<<"Value of num3 via num_ptr: "<<*num_ptr<<"\n";
	cout<<"Address of num3 via num_ptr: "<<num_ptr<<"\n\n\n";

	//dynamic memory
	int* ptr_num = new int(5);//create
	cout<<"Value : "<<*ptr_num<<"\n\n";//use memory
	delete ptr_num;//release memory

	//smart pointer-unique pointer
	unique_ptr<int> up_num = make_unique<int>(100);
	cout<<"Value of up num: "<<*up_num<<"\n";
	cout<<"Address of up num: "<<&up_num<<"\n\n";

	vector<unique_ptr<int>> numbers;
	numbers.push_back(std::move(up_num));
	cout<<"Value of element 0: "<<*numbers[0]<<"\n";

	return 0;
}