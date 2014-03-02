#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"
#include <cmath>
#include <QDebug>

namespace myShapes {

const double PI = 2.0 * std::acos(0.0);

class Circle : public Shape
{
public:
    Circle(double radius = 0.0) : m_radius(radius) {
        calcCoordinates();
    }

    static double perimeter(double radius) {
        return (2.0 * PI * radius);
    }

    static double area(double radius) {
        return (PI * radius * radius);
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

    virtual inline void setRadius(double radius) {
        m_radius = radius;
        calcCoordinates();
    }

private:
    void calcCoordinates() {
        const std::size_t n = 40;
        for (std::size_t i = 0; i < n; ++i) {
            double angle = 2.0 * PI * (double) i / (double) n;
            int x = (int) ( m_radius + m_radius * std::cos(angle) );
            int y = (int) ( m_radius + m_radius * std::sin(angle) );
            addPoint(x, y);
        }

    }

    int m_radius;
};

}

#endif // CIRCLE_H
