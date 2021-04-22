//Create allocate and release function
#include<memory>
#include<iostream>

void use_dynamic_memory(int num);

int* return_dynamic_memory(int num);
void limit_dynamic_memory_scope(int num);

int* get_dynamic_array(const std::size_t size);
void delete_dynamic_array(int* array);
void use_dynamic_array(const std::size_t size);
