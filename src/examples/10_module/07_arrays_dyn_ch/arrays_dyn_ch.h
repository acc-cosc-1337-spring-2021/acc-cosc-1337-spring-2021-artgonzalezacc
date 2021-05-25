#include<iostream>
#include<memory>

//dynamic array allocation and deallocation functions
//use getline to end char w \0 auto and show example of manual char termination 
void use_dynamic_char_array(const std::size_t size);

char* get_dynamic_char_array(const std::size_t size);
void limit_dynamic_char_array_scope(const std::size_t size);

char* get_dynamic_char_mem(std::size_t size);
void delete_dynamic_char_mem(char* array);
void limit_dynamic_char_mem_scope(std::size_t size);