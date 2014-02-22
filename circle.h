#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"
#include <cmath>

class Circle : public Shape
{
public:
    Circle(double radius = 0.0) : m_radius(radius) {
    }

    static double perimeter(double radius) {
        return (2.0 * M_PI * radius);
    }

    static double area(double radius) {
        return (M_PI * radius * radius);
    }

    virtual double perimeter() const {
        return perimeter(m_radius);
    }

    virtual double area() const {
        return area(m_radius);
    }

    inline double radius() const {
        return m_radius;
    }

private:
    double m_radius;
};

#endif // CIRCLE_H
