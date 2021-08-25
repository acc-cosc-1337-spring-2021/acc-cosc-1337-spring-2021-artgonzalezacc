//
#ifndef MY_VECTOR_H
#define MY_VECTOR_H
#include<cstddef>
#include<iostream>

template<typename T>
class Vector
{
public:
    Vector();
    Vector(std::size_t s);
    Vector(const Vector<T>& v);//copy constructor Rule 1 of 3 - Rule of 3 c++ legacy
    Vector<T>& operator=(const Vector<T>& v);//copy assignment Rule 2 of 3 - Rule of 3 legacy c++
    Vector(Vector<T>&& v);//move constructor Rule 4 of 5 - Rule of 5 modern c++
    Vector<T>& operator=(Vector<T>&& v);//move assignment Rule 5 of5 - Rule of 5 modern c++
    std::size_t Size()const {return size; }
    std::size_t Capacity()const{return space;}
    T& operator[](std::size_t i) {return elements[i];}
    T& operator[](std::size_t i)const{return elements[i];}
    void Reserve(std::size_t new_allocation_size);
    void Resize(std::size_t  new_allocation_size);
    void Pushback(T value);
    ~Vector();//destructor Rule 3 of 3, Rule of 3 legacy c++
private:
    std::size_t size;//number of elements
    std::size_t space;//number of elements + free slots
    T* elements;
    const int RESERVE_DEFAULT_SIZE{8};
    const int RESERVE_DEFAULT_MULTIPLIER{2};
};

//free functions
void use_stack_vector();
void use_heap_vector();
Vector<int> get_vector();

template<class T>//is a step toward generic programming
T add(T a, T b)
{
    return a + b;
}

#endif