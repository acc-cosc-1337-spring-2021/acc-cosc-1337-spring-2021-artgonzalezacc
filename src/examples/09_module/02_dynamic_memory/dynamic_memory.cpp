#include "dynamic_memory.h"

//
using std::cout;

void use_dynamic_memory(int num)
{
    int* num_ptr = new int(num);//create dynamic memory
    cout<<*num_ptr<<"\n";//use memory
    delete num_ptr;//clear memory
}

int* return_dynamic_memory(int num)
{
    int* num_ptr = new int(num);
    return num_ptr;
}

void limit_dynamic_memory_scope(int num)
{
    int* val = return_dynamic_memory(num);
    cout<<*val<<"\n";
    delete val;
}

int* get_dynamic_array(const std::size_t size)
{
    cout<<"Create dynamic array\n";
    int* nums = new int[size]();
    return nums;
}

void delete_dynamic_array(int* array)
{
    cout<<"Delete dynamic array\n";
    delete[] array;
}

void use_dynamic_array(const std::size_t size)
{
    std::shared_ptr<int[]>nums(get_dynamic_array(size), delete_dynamic_array);

    for(std::size_t i=0; i < size; ++i)
    {
        cout<<nums[i]<<"\n";
    }

    cout<<"Exiting use dynamic array function...\n";
}