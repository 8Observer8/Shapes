#include "rectangle.h"

Rectangle::Rectangle(double height, double width) :
    mHeight(height),
    mWidth(width)
{
}

/*virtual*/ double Rectangle::calcPerimeter()
{
    mPerimeter = 2.0 * (mHeight + mWidth);
    return mPerimeter;
}

/*virtual*/ double Rectangle::calcArea()
{
    mArea = mHeight * mWidth;
    return mArea;
}

void Rectangle::setHeight(double height)
{
    mHeight = height;
}

double Rectangle::height() const
{
    return mHeight;
}

void Rectangle::setWidth(double width)
{
    mWidth = width;
}

double Rectangle::width() const
{
    return mWidth;
}
