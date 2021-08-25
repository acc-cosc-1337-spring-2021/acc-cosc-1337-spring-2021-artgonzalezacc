#include "overflow.h"
#include<climits>
/*
Function int_overflow creates an int num variable with value 2147483647, 
add 1 to it, and returns it

@param none
@return num + 1
*/
int int_overflow()
{
    auto max = 2147483647;
    max = max + 1;

    return max;
}

int double_underflow()
{
    auto ClosestToZeroDouble = __DBL_MIN__;
    auto TooCloseToZeroDouble = ClosestToZeroDouble / 10;

    return TooCloseToZeroDouble;
}