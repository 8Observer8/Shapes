#ifndef CIRCLE_H
#define CIRCLE_H

#include <cmath>

class Circle
{
public:
    inline double perimeter(double radius) const {
        return (2.0 * M_PI * radius);
    }

    inline double area(double radius) const {
        return (M_PI * radius * radius);
    }
};

#endif // CIRCLE_H
