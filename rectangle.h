#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
public:
    inline double perimeter(double height, double width) const {
        return 2.0 * (height + width);
    }

    inline double area(double height, double width) const {
        return height * width;
    }
};

#endif // RECTANGLE_H
