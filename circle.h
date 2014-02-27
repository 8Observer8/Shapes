#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"
#include <cmath>

namespace myShapes {

class Circle : public Shape
{
public:
    Circle(double radius = 0.0) : m_radius(radius) {
        calcCoordinates();
    }

    static double perimeter(double radius) {
        //return (2.0 * M_PI * radius)
        return 0.0;
    }

    static double area(double radius) {
        // return (M_PI * radius * radius)
        return 0.0;
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

    inline void setRadius(double radius) {
        m_radius = radius;
        calcCoordinates();
    }

protected:
    virtual void calcCoordinates();

private:
    int m_radius;
};

}

#endif // CIRCLE_H
