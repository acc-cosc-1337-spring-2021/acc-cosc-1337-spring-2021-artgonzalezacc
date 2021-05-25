#include "while.h"
//Using a while loop write code for sum_of_squares function that accepts an int and returns  
//the sum of all the squares of that number from 1 to the number. 
//Example: sum_of_squares(4) 
//1*1 + 2 * 2 + 3*3 + 4*4 = 30
int sum_of_squares(int num)
{
    auto sum = 0;
    auto index = 1;

    while(index <= num)
    {
        sum = sum + index * index;
        index++;
    }

    return sum;
}

//Using a while loop write code for display function that accepts a string and displays 
//each character of the string in a line
//Example: display("Hello")
/*
result:

0-H
1-e
2-l
3-l
4-0

*/
void display(std::string str)
{
    auto index = 0;

    while(index < str.length())
    {
        std::cout<<str[index]<<"\n";
        index++;
    }
}

