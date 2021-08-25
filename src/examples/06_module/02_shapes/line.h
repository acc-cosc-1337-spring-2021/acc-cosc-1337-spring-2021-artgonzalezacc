//line.h
#ifndef LINE_H
#define LINE_H
#include "shape.h"

class Line: public Shape
{
public:
    void draw()override;
};

#endif