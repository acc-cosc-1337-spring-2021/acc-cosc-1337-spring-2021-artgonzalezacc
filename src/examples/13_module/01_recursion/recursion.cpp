#include "recursion.h"
#include<iostream>
using std::cout;
//Write code for recursive display function
void display(int num)
{
    if(num == 0)
    {
        cout<<"base case\n";
        return;
    }

    cout<<"hello..load to stack\n";
    display(num-1);
    cout<<"hello..unload from stack\n";
}

//Write code for recursive factorial
int factorial(int n)
{
    int f;//track return value for factorial
    int r;//track recursive function call return value

    if(n == 0)
    {
        cout<<"base case\n";
        return 1;
    }

    cout<<"load stack "<<n-1<<"\n";
    r = factorial(n-1);
    f = n * r;
    cout<<"unload stack n: "<<n<<" r: "<<r<<" f: "<<f<<"\n";

    return f;
}