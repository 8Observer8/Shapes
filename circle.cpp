#include "circle.h"
#include <cmath>

Circle::Circle(double r) :
    mRadius(r)
{
}

/*virtual*/ double Circle::calcPerimeter()
{
    mPerimeter = 2.0 * M_PI * mRadius;
    return mPerimeter;
}

/*virtual*/ double Circle::calcArea()
{
    mArea = M_PI * mRadius * mRadius;
    return mArea;
}

void Circle::setRadius(double r)
{
    mRadius = r;
}

double Circle::radius() const
{
    return mRadius;
}
