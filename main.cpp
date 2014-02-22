#include <QCoreApplication>
#include <QTextStream>
#include "shape.h"
#include "circle.h"
#include "rectangle.h"

QTextStream cin(stdin);
QTextStream cout(stdout);

void printShapeInfo(Shape *ps) {
    cout << "p = " << ps->perimeter() << endl;
    cout.flush();
    cout << "s = " << ps->area() << endl;
    cout.flush();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Shape *pc = new Circle(3.0);
    pc->calcPerimeter();
    pc->calcArea();
    printShapeInfo(pc);
    delete pc;

    Shape *pr = new Rectangle(5, 10);
    pr->calcPerimeter();
    pr->calcArea();
    printShapeInfo(pr);
    delete pr;

    return a.exec();
}
