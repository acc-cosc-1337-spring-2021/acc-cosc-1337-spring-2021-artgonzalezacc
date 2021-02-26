#include "for_ranged.h"

using std::vector;
using std::string;
using std::cout;

/*
Function loop_string_w_index 
The function uses an indexed for loop to iterate and display the characters in the
string as follows:
for string test displays

t
e
s
t

@param string str

*/
void loop_string_w_index(std::string str)
{
    for(decltype(str.size()) i=0; i < str.size(); ++i)
    {
        cout<<str[i]<<"\n";
    }
}


/*
Function loop_string_w_for_range 
The function uses a for ranged loop using auto to iterate and display the characters in the
string as follows:
for string test displays

t
e
s
t
*/
void loop_string_w_for_range(std::string str)
{
    for(auto s: str)
    {
        cout<<s<<"\n";
    }
}



