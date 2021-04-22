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
	//dynamic array of objects
	const int SIZE = 3;
	Shape* circles = new Circle[SIZE];

	circles[0].draw();
	circles[1].draw();
	circles[2].draw();
	std::cout<<"\n\n";

	delete[] circles;

	//dynamic array of dynamic objects
	Shape** shapes = new Shape*[SIZE];
	shapes[0] = new Circle();
	shapes[1] = new Line();
	shapes[2] = new Circle();

	shapes[0]->draw();
	shapes[1]->draw();
	shapes[2]->draw();

	delete shapes[0];
	delete shapes[1];
	delete shapes[2];

	delete[] shapes;

	return 0;
}