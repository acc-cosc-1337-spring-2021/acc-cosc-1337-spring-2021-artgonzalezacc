#include "arrays_mem.h"

int main() 
{
	//use_stack_array();
	//array_months();
//	array_and_pointers();

	//const int SIZE = 3;
    //int numbers[SIZE]{1, 2,3};//CREATES a list/array of 3 elements
	
	//display_array(numbers, SIZE);
	int times_table[ROWS][COLS];

	populate_times_table(times_table, ROWS);
	display_times_table(times_table, ROWS);

	return 0;

}