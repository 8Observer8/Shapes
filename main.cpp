#include <QCoreApplication>
#include <QTextStream>
#include "circle.h"
#include "rectangle.h"

QTextStream cin(stdin);
QTextStream cout(stdout);

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Circle *pc = new Circle;
    double radius = 5.5;
    cout << endl;
    cout << "Circle:" << endl;
    cout << "Radius = " << radius << endl;
    cout << "Perimeter = " << pc->perimeter(radius) << endl;
    cout << "Area = " << pc->area(radius) << endl;
    cout.flush();
    delete pc;

    Rectangle *pr = new Rectangle;
    double height = 5.0;
    double width = 10.0;
    cout << endl;
    cout << "Rectangle:" << endl;
    cout << "Height = " << height << endl;
    cout << "Width = " << width << endl;
    cout << "Perimeter = " << pr->perimeter(height, width) << endl;
    cout << "Area = " << pr->area(height, width) << endl;
    cout.flush();
    delete pr;

    return a.exec();
}
