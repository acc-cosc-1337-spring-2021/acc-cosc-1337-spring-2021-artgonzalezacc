
//dynamic array allocation and deallocation
#include "arrays_dyn_ch.h"

int main()
{
	//use_dynamic_char_array(10);
	//limit_dynamic_char_array_scope(15);
	std::cout<<"Before function\n";
	limit_dynamic_char_mem_scope(10);
	std::cout<<"After function\n";
	
	return 0;
}