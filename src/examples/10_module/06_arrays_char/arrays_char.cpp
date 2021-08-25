//cpp
#include "arrays_char.h"

using std::cout;
using std::string;

void use_char_terminated()
{
    const int SIZE = 4;
    char name[SIZE];
    name[0] = 'J';
    name[1] = 'o';
    name[2] = 'e';
    name[3] = '\0';
    cout<<name<<"\n";

    std::size_t i = 0;
    while(name[i] != '\0')
    {
        cout<<name[i]<<"\n";
        i++;
    }
}

void use_char_not_terminated()
{
    const int SIZE = 4;
    char name[SIZE]{'J', 'o', 'e'};
    
    cout<<name<<"\n";

    std::size_t i = 0;
    while(name[i] != '\0')
    {
        cout<<name[i]<<"\n";
        i++;
    }

}

void use_string_terminated()
{
    string name = "Joe Doe";
    cout<<name<<"\n";
    name = "Joe\0Doe";
    cout<<name<<"\n";
}