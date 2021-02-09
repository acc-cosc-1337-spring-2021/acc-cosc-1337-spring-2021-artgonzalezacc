#include "overflow.h"
#include<iostream>

using std::cout;  using std::cin;

int main()
{
    auto max = 2147483647;

    cout<<"The max int in C++ is: "<<max<<"\n";
    cout<<"Add 1 to create C++ weirdness: \n";
    cout<<"Max + 1 is: "<<int_overflow();
    

    return 0;
}