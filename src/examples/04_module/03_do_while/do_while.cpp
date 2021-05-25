#include "do_while.h"

using std::cout; using std::cin;

//Write code for void function prompt_user to loop until
//user opts not to continue.  
void prompt_user()
{
    char choice;

    do
    {
        cout<<"Type Y to continue N to exit: ";
        cin>>choice;
    }
    while(choice == 'y' || choice == 'Y');
}


