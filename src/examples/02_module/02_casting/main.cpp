#include "casting.h"
#include <iostream>

using std::cout;  using std::cin;

int main()
{
    auto num = .01;
    cout<<"Enter a decimal number: ";
    cin>>num;

    cout<<"You typed: "<<num<<"\n";
    cout<<"Int Converted to double:  "<<convert_double_to_int(num);

    return 0;
}