#ifndef VIEWER_H
#define VIEWER_H

#include <QGLWidget>
#include "shape.h"

#include <vector>
#include <memory>

class Viewer : public QGLWidget
{
public:
    Viewer(QWidget *pwgt = 0);

    void addForPainting(std::shared_ptr<myShapes::Shape> ps) {
        m_pshapes.push_back(ps);
    }

protected:
    virtual void initializeGL();
    virtual void resizeGL(int nWidth, int nHeight);
    virtual void paintGL();

private:
    std::vector<std::shared_ptr<myShapes::Shape> > m_pshapes;
    void draw(std::shared_ptr<myShapes::Shape> ps, int xOffset, int yOffset);
};

#endif // VIEWER_H
