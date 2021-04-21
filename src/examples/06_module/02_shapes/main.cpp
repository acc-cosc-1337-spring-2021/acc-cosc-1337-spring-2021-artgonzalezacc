//main
#include <iostream>
#include<memory>
#include<vector>
#include "shape.h"
#include "line.h"
#include "circle.h"
/*
Create a Shape pointer of type Line
Create vector of Shape pointers
iterate with auto
*/
#include<memory>
using std::unique_ptr; using std::make_unique;
#include<vector>
using std::vector;

int main() 
{
	const int SIZE = 3;
	Circle circles[SIZE];//CREATE a circles array

	circles[0].draw();
	circles[1].draw();
	circles[2].draw();

	return 0;
}