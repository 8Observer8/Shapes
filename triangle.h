#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "shape.h"
#include <cmath>

namespace myShapes {

class Triangle : public Shape
{
public:
    Triangle(double a = 0.0, double b = 0.0) :
        m_a(a),
        m_b(b)
    {
        int x = a;
        int y = b;
        addPoint(x, 0);
        addPoint(x, y);
        addPoint(0, y);

        c();
    }

    static double perimeter(double a, double b, double c) {
        return (a + b + c);
    }

    static double area(double a, double b) {
        return ( 1/2 * (a * b) );
    }

    virtual double perimeter() const {
        return perimeter(m_a, m_b, m_c);
    }

    virtual double area() const {
        return area(m_a, m_b);
    }

    inline double a() const {
        return m_a;
    }

    inline double b() const {
        return m_b;
    }

    inline double c() {
        m_c = std::sqrt( std::pow(m_a, 2) + std::pow(m_b, 2) );
        return m_c;
    }

    inline void setA(double a) {
        m_a = a;
        c();
    }

    inline void setB(double b) {
        m_b = b;
        c();
    }

private:
    double m_a, m_b, m_c;
};

}

#endif // TRIANGLE_H
