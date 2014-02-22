#ifndef SHAPE_H
#define SHAPE_H

class Shape
{
public:
    Shape();
    virtual ~Shape();

    virtual double calcPerimeter() = 0;
    virtual double calcArea() = 0;

    double perimeter() const;
    double area() const;

protected:
    double mPerimeter;
    double mArea;
};

#endif // SHAPE_H
