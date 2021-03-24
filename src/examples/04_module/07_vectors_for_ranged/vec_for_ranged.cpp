#include "for_ranged.h"

using std::cout;
using std::vector;

/*
Function loop_vector_w_for_ranged
The function creates an int vector with values 9, 10, 99, 5, 67
and displays the numbers to screen using a for ranged loop with auto as follows: 9 10 99 5  67

@param none
*/


/*
Function loop_vector_w_for_ranged_val

Displays the numbers to screen using.

@param vector<int>
*/
void loop_vector_w_for_ranged(std::vector<int> nums)
{
    for(auto num: nums)
    {
        cout<<num<<"\n";
        num = -1;
    }
    
    cout<<"\n\n vector results\n";

    for(auto num: nums)
    {
        cout<<num<<"\n";
        
    }

}

/*
Function loop_vector_w_for_ranged_ref

Displays the numbers to screen 

@param vector<int>&
*/
void loop_vector_w_for_ranged_ref(std::vector<int>& nums)
{
    for(auto& num: nums)
    {
        cout<<num<<"\n";
        num = -1;
    }    

    cout<<"\n\n REF vector results\n";

    for(auto num: nums)
    {
        cout<<num<<"\n";
        
    }

}


/*
Function loop_vector_w_for_ranged_const_ref

Displays the numbers to screen

@param const vector<int>&
*/

vector<int> get_vector()
{
    vector<int> nums;
    nums.push_back(5);
    nums.push_back(1);
    nums.push_back(10);//5, 1, 10

    return nums;
}