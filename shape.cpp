#include "shape.h"
 
Shape::Shape() :
    mPerimeter(0.0),
    mArea(0.0)
{
}
 
Shape::~Shape()
{
}
 
double Shape::perimeter() const
{
    return mPerimeter;
}
 
double Shape::area() const
{
    return mArea;
}
