#ifndef SHAPE_H
#define SHAPE_H

#include <vector>
#include <utility>

namespace myShapes {

class Shape
{
public:

    Shape() {
    }

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

    std::pair<int, int> point(int index) const {
        return m_points[index];
    }

    int amountOfPoints() {
        return m_points.size();
    }

protected:
    void addPoint(int x, int y) {
        m_points.push_back(std::make_pair(x, y));
    }

private:
    int m_pointSize;
    std::vector<std::pair<int, int> > m_points;
};

}

#endif // SHAPE_H
