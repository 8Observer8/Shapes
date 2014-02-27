#include "viewer.h"
#include <utility>
#include <QDebug>

Viewer::Viewer(QWidget* pwgt) :
    QGLWidget(pwgt)
{
}

void Viewer::draw(std::shared_ptr<myShapes::Shape> ps, int xOffset, int yOffset)
{
    glPointSize(2.0);
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    for (int i = 0; i < ps->amountOfPoints(); ++i) {
        std::pair<int, int> point = ps->point(i);
//        qDebug() << "x = " << point.first << "; xOffset = " << xOffset;
//        qDebug() << "y = " << point.second << "; yOffset = " << yOffset;
        int x = point.first + xOffset;
        int y = point.second + yOffset;
        glVertex2f(x, y);
    }
//    qDebug() << "";
    glEnd();
}

/*virtual*/ void Viewer::initializeGL()
{
    qglClearColor(Qt::white);
}

/*virtual*/ void Viewer::resizeGL(int nWidth, int nHeight)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glViewport(0, 0, (GLint)nWidth, (GLint)nHeight);
    glOrtho(0, 400, 200, 0, -1, 1);
}

/*virtual*/ void Viewer::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    int xGeneralOffset = 50;
    int yGeneralOffset = 100;
    int xOffset = 0;
    int yOffset = 0;
    for (std::size_t i = 0; i < m_pshapes.size(); ++i) {
        if (( (i+1) % 2) != 0) { // Odd, one-based
            xOffset = xGeneralOffset;
            yOffset += yGeneralOffset;
        } else {
            xOffset = xGeneralOffset + 150;
        }
        if (i == 0 || i == 1) {
            yOffset = 50;
        }
        draw(m_pshapes[i], xOffset, yOffset);
    }
}
