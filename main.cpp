#include <QApplication>
#include "shape.h"
#include "rectangle.h"
#include "circle.h"
#include "triangle.h"
#include "viewer.h"
#include <utility>
#include <memory>
#include <QDebug>

namespace myShapes
{

typedef std::shared_ptr<Triangle> TrianglePtr;
typedef std::shared_ptr<Circle> CirclePtr;
typedef std::shared_ptr<Rectangle> RectanglePtr;

}

using namespace myShapes;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Viewer viewer;
    viewer.resize(400, 200);

//    myShapes::Triangle *pt = new myShapes::Triangle(30.0, 50.0);
//    myShapes::Circle *pc = new myShapes::Circle(50.0);
//    myShapes::Rectangle *pr1 = new myShapes::Rectangle(100.0, 25.0);
//    myShapes::Rectangle *pr2(new myShapes::Rectangle(100.0, 25.0));

//    std::shared_ptr<myShapes::Triangle> pt(new myShapes::Triangle(30.0, 50.0));
//    std::shared_ptr<myShapes::Circle> pc(new myShapes::Circle(50.0));
//    std::shared_ptr<myShapes::Rectangle> pr1(new myShapes::Rectangle(100.0, 25.0));
//    std::shared_ptr<myShapes::Rectangle> pr2(new myShapes::Rectangle(100.0, 25.0));


    TrianglePtr pt(new myShapes::Triangle(30.0, 50.0));
    CirclePtr pc(new myShapes::Circle(50.0));
    RectanglePtr pr1(new myShapes::Rectangle(100.0, 25.0));
    RectanglePtr pr2(new myShapes::Rectangle(100.0, 25.0));

    viewer.addForPainting(pt);
    viewer.addForPainting(pc);
    viewer.addForPainting(pr1);
    viewer.addForPainting(pr2);

    viewer.show();

    pc->setRadius(25.0);

    return a.exec();
}
