#include "for_ranged.h"

using std::cout;
using std::vector;

/*
Function loop_vector_w_index 
The function creates an int vector with values 9, 10, 99, 5, 67
and displays the numbers to screen using an indexed for loop as follows: 9 10 99 5  67

@param none


*/
void loop_vector_w_index(std::vector<int> nums)
{
    for(std::size_t i = 0; i < nums.size(); ++i)
    {
        cout<<nums[i]<<"\n";
        nums[i] = -1;
    }
}



/*
Function loop_vector_w_index_val 
Displays the incoming parameter vector numbers to screen using an indexed for loop.

@param vector<int>
*/



/*
Function loop_vector_w_index_ref
Displays the incoming parameter vector numbers to screen using an indexed for loop.

@param vector<int>&
*/
void loop_vector_w_index_ref(std::vector<int>& nums)
{
    for(std::size_t i = 0; i < nums.size(); ++i)
    {
        cout<<nums[i]<<"\n";
        nums[i] = -1;
    }
}


/*
Write code for function loop_vector_w_index_const_ref
Displays the incoming parameter vector numbers to screen use indexed loop

@param const vector<int>&
*/

