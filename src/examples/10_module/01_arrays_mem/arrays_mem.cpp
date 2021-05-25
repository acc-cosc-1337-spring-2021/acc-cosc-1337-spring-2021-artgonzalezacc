//write code for for stack_array and display each element to screen
#include "arrays_mem.h"

using std::cout;

void use_stack_array()
{
    const int SIZE = 3;
    int numbers[SIZE]{};//CREATES a list/array of 3 elements
    
    for(int i=0; i < SIZE; ++i)
    {
        cout<<numbers[i]<<"\n";
    }
}

void array_months()
{
    const int NUM_OF_MONTHS = 3;

    int month_number[NUM_OF_MONTHS]{1, 2, 3};
    std::string names[NUM_OF_MONTHS]{"Jan", "Feb", "Mar"};

    for(int i=0; i < NUM_OF_MONTHS; ++i)
    {
        cout<<month_number[i]<<" "<<names[i]<<"\n";
    }
}

void array_and_pointers()
{
    const int SIZE = 3;
    int numbers[SIZE]{1, 2,3};//CREATES a list/array of 3 elements

    cout<<numbers<<"\n";
    int* ptr = numbers;
    cout<<*ptr<<"\n" ;

    *ptr++;
    cout<<*ptr<<"\n" ;

    *ptr++;
    cout<<*ptr<<"\n" ;

    *ptr--;
    cout<<*ptr<<"\n" ;
}

void display_array(int* nums, int SIZE)
{
    for(int i=0; i < SIZE; ++i)
    {
        cout<<nums[i]<<"\n";
    }
}

void populate_times_table(int times_table[][COLS], int ROWS)
{
    for(int i=0; i < ROWS; ++i)
    {
        for(int j=0; j < COLS; ++j)
        {
            times_table[i][j] = (i+1) * (j+1);
        }
    }
}

void display_times_table(int times_table[][COLS], int ROWS)
{
    for(int i=0; i < ROWS; ++i)
    {
        for(int j=0; j < COLS; ++j)
        {
            cout<<std::setw(5)<<times_table[i][j];
        }

        cout<<"\n";
    }    
}