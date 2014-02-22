#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

class Rectangle : public Shape
{
public:

    Rectangle(double height = 0.0, double width = 0.0) :
        m_height(height),
        m_width(width)
    {
    }

    static double perimeter(double height, double width) {
        return 2.0 * (height + width);
    }

    static double area(double height, double width) {
        return height * width;
    }

    virtual double perimeter() const {
        return perimeter(m_height, m_width);
    }

    virtual double area() const {
        return area(m_height, m_width);
    }

    inline double height() const {
        return m_height;
    }

    inline double width() const {
        return m_width;
    }

private:
    double m_height;
    double m_width;
};

#endif // RECTANGLE_H
