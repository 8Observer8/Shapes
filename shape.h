#ifndef SHAPE_H
#define SHAPE_H

#include <vector>
#include <utility>

namespace myShapes {

class Shape
{
public:

    Shape() {}
    virtual ~Shape() {

    }

    virtual double perimeter() const = 0;
    virtual double area() const = 0;

    inline void setPoinstSize(int pointSize = 2) {
        m_pointSize = pointSize;
    }

    inline int pointSize() const {
        return m_pointSize;
    }

    inline const std::vector<std::pair<int, int> > &points() const {
        return m_points;
    }

protected:
    virtual void calcCoordinates() = 0;
    int m_pointSize;
    std::vector<std::pair<int, int> > m_points;
};

}

#endif // SHAPE_H
