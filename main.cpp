#include <QApplication>
#include "shape.h"
#include "rectangle.h"
#include "circle.h"
#include "triangle.h"
#include "viewer.h"
#include <utility>
#include <iostream>
#include <memory>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Viewer viewer;
    viewer.resize(400, 200);

    std::shared_ptr<myShapes::Shape> pt(new myShapes::Triangle(30, 50));
    std::shared_ptr<myShapes::Shape> pr2(new myShapes::Rectangle(100.0, 25.0));
    std::shared_ptr<myShapes::Shape> pr3(new myShapes::Rectangle(100.0, 25.0));
    std::shared_ptr<myShapes::Shape> pc(new myShapes::Circle(50.0));

    viewer.addForPainting(pt);
    viewer.addForPainting(pc);
    viewer.addForPainting(pr2);
    viewer.addForPainting(pr3);

    viewer.show();
    return a.exec();
}
