//circle.h
#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape.h"

class Circle: public Shape
{
public:
    void draw()override;    
};

#endif