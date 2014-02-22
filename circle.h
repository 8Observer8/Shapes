#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class Circle : public Shape
{
public:
    Circle(double r = 0.0);

    /*virtual*/ double calcPerimeter();
    /*virtual*/ double calcArea();

    void setRadius(double r);
    double radius() const;

private:
    double mRadius;
};

#endif // CIRCLE_H
