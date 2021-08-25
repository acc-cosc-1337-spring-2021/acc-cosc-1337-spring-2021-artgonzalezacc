#include "constants.h"
#include<iostream>

using std::cout; using std::cin;

int main()
{
    auto radius = .01;
    cout<<"Enter radius of a circle: ";
    cin>>radius;

    cout<<"Area of circle is: "<<get_area_of_circle(radius);
    
    return 0;
}