#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

class Rectangle : public Shape
{
public:
    Rectangle(double height = 0.0, double width = 0.0);

    /*virtual*/ double calcPerimeter();
    /*virtual*/ double calcArea();

    void setHeight(double height);
    double height() const;

    void setWidth(double width);
    double width() const;

private:
    double mHeight;
    double mWidth;
};

#endif // RECTANGLE_H
