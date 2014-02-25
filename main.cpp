#include <QApplication>
#include <QTextStream>
#include "shape.h"
#include "circle.h"
#include "rectangle.h"
#include "viewer.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Viewer viewer;
    viewer.resize(400, 200);

    myShapes::Shape *pc = new myShapes::Circle(3.0);
    viewer.addForPainting(*pc);
//    delete pc;

//    myShapes::Shape *pr = new myShapes::Rectangle(5.0, 10.0);
//    delete pr;

    viewer.show();
    return a.exec();
}
