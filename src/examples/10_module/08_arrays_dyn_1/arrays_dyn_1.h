#ifndef MY_STRING_H
#define MY_STRING_H
#include<iostream>
#include<memory>

class String
{
friend std::ostream& operator<<(std::ostream& out, const String& s);
friend std::istream& operator>>(std::istream& in, String& s);

public:
    String(std::size_t s): size(s), sequence{new char[s]}{std::cout<<"Create memory\n";}
    ~String(){std::cout<<"Delete memory\n"; delete[]sequence;}
private:
    char* sequence;
    std::size_t size;
};

#endif