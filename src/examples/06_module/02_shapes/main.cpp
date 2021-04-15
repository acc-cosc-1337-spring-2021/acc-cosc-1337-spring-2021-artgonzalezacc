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
	vector<unique_ptr<Shape>> shapes;
	unique_ptr<Shape> line = make_unique<Line>();
	unique_ptr<Shape> circle = make_unique<Circle>();

	shapes.push_back(std::move(line));
	shapes.push_back(std::move(circle));

	for(auto& shape: shapes )
	{
		shape->draw();
	}

	return 0;
}