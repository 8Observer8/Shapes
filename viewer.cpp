#include "viewer.h"

Viewer::Viewer(QWidget* pwgt) :
    QGLWidget(pwgt)
{
}

void Viewer::addForPainting(const myShapes::Shape &ps)
{
    shapes.push_back(ps);
}

void Viewer::draw(const myShapes::Shape &ps, int xOffset, int yOffset)
{
    std::vector<std::pair<int, int> > p;
    p = ps.points();

    glPointSize(2.0);
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    for (int i = 0; i < p.size(); ++i) {
        int x = p[i].first;
        int y = p[i].second;
        glVertex2f(x, y);
    }
    glEnd();
}

/*virtual*/ void Viewer::initializeGL()
{
    qglClearColor(Qt::white);
}

void Viewer::resizeGL(int nWidth, int nHeight)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glViewport(0, 0, (GLint)nWidth, (GLint)nHeight);
    glOrtho(0, 400, 200, 0, -1, 1);
}

void Viewer::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    for (int i = 0; i < shapes.size(); ++i) {
        draw(shapes[i], 0, 0);
    }
}
