//cpp
#include "arrays_dyn_ch.h"

using std::cout; using std::cin;
using std::shared_ptr;

void use_dynamic_char_array(const std::size_t size)
{
    char* name = new char[size];//create memory
    cout<<"Enter name: ";//use memory
    cin.getline(name, size);
    cout<<name<<"\n";

    delete[] name;
}

char* get_dynamic_char_array(const std::size_t size)
{
    char* char_ptr = new char[size];//create dynamic memory
    return char_ptr;
}

void limit_dynamic_char_array_scope(const std::size_t size)
{
    char* name = get_dynamic_char_array(size);//create memory
    cout<<"Enter name: ";
    cin.getline(name, size);
    cout<<name<<"\n";

    delete[] name;
}

char* get_dynamic_char_mem(std::size_t size)
{
    cout<<"Create memory\n";
    char* char_ptr = new char[size];//create dynamic memory
    return char_ptr;
}

void delete_dynamic_char_mem(char* array)
{
    cout<<"Delete memory\n";
    delete[] array;
}

void limit_dynamic_char_mem_scope(std::size_t size)
{
    shared_ptr<char[]> name(get_dynamic_char_mem(size), delete_dynamic_char_mem);//create
    cout<<"Enter name: ";
    cin.getline(name.get(), size);
    cout<<name<<"\n";
}