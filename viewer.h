#ifndef VIEWER_H
#define VIEWER_H

#include <QGLWidget>
#include "shape.h"

#include <vector>

class Viewer : public QGLWidget
{
public:
    Viewer(QWidget *pwgt = 0);
    void addForPainting(const myShapes::Shape &ps);

protected:
    virtual void initializeGL();
    virtual void resizeGL(int nWidth, int nHeight);
    virtual void paintGL();

private:
    std::vector<myShapes::Shape> shapes;
    void draw(const myShapes::Shape &ps, int xOffset, int yOffset);
};

#endif // VIEWER_H
