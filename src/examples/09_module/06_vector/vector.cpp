#include "vector.h"

using std::cout;

//
Vector::Vector()
 : size{0}, space{0}, elements{nullptr}
{

}

 Vector::Vector(std::size_t s)
 : size(0), space{s}, elements{new int[s]}
 {
     cout<<"Constructor(s)-create memory "<<elements<<" \n";

     for(std::size_t i=0; i < size; ++i)
     {
         elements[i] = 0;
     }
 }

/*
1 Initialize size for v1
2 Initialize memory for v1
3 copy element values from v to v1
*/
Vector::Vector(const Vector& v)
: size{v.size}, space{v.space}, elements{new int[v.size]}
{
    cout<<"Execute copy constructor "<<elements<<"\n";

    for(std::size_t i=0; i < v.size; ++i)
    {
        elements[i] = v.elements[i];
    }
}

/*
1-Create temporary memory for v1
2-Copy values from v into temporary memory v1
3-Delete v1 elements memory
4-Point elements memory to temporary memory
5-Return a reference to this vector
*/
Vector& Vector::operator=(const Vector& v)
{
    int* temp = new int[v.size];

    for(std::size_t i=0; i < v.size; ++i)
    {
        temp[i] = v.elements[i];
    }

    delete[] elements;

    elements = temp;
    cout<<"Copy assignment operator "<<elements<<"\n";
    size = v.size;

    return *this;
}

/*
1-Get v.elements memory
2-Get size from v
3-point v.elements to nothing (nullptr); v size to 0
*/
Vector::Vector(Vector&& v)
: size{v.size}, elements{v.elements}
{
    cout<<"Move constructor "<<elements<<"\n";
    v.size = 0;
    v.elements = nullptr;
}

/*
1-Clear orginal dynamic memory
2-point elements to v.elements
3-get size from v
4-point v.elements to nullptr
5-set v.size to 0
*/
Vector& Vector::operator=(Vector&& v)
{
    delete elements;
    elements = v.elements;
    cout<<"Move assignment "<<elements<<"\n";
    size = v.size;
    v.elements = nullptr;
    v.size = 0;

    return *this;
}
/*
1-Make sure new allocation is greater than space
2-Create temp dynamic memory of size new allocation
3-copy values from old memory array to temp array
4-Delete the old array
5-set elements to temp memory array
6-set space = new allocation
*/
void Vector::Reserve(std::size_t new_allocation_size)
{
    if(new_allocation_size <= space)
    {
        return;
    }

    int* temp = new int[new_allocation_size];

    for(std::size_t i=0; i < size; ++i)
    {
        temp[i] = elements[i];
    }

    delete[] elements;
    elements = temp;
    space = new_allocation_size;
}

/*
1-Call reserve function with new allocation size
2-initialize elements beyond size
3-set size to new allocation
*/
void Vector::Resize(std::size_t  new_allocation_size)
{
    Reserve(new_allocation_size);

    for(std::size_t i=size; i < new_allocation_size; ++i)
    {
        elements[i] = 0;
    }

    size = new_allocation_size;
}

/*
1-if space 0 call Reserve w Reserve Default size
2-else if size == space call Reserve w space * reserve default multiplier
3-set value to current element at size
4-inrement size
*/
void Vector::Pushback(int value)
{
    if(space == 0)
    {
        Reserve(RESERVE_DEFAULT_SIZE);
    }
    else if (space == size)
    {
        Reserve(space * RESERVE_DEFAULT_MULTIPLIER);
    }
    
    elements[size] = value;
    size++;
}

Vector::~Vector()
{
    cout<<"Clear, delete, free memory "<<elements<<"\n";
    delete[] elements;
}

//free function
void use_stack_vector()
{
    Vector v(3);
}

void use_heap_vector()
{
    Vector* v = new Vector(3);
    //use the vector
    delete v;//clear memory
}

Vector get_vector()
{
    Vector v(3);
    return v;
}