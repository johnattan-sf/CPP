#include <iostream>
#include "point2d.h"
#include "point3d.h"

using namespace std;

int main()
{
    point2d p1;

    point2d *p2 = new point2d();

    point2d p3(1.0, 1.0);

    point2d *p4 = new point2d(2.0, 2.0);

    point3d p5;

    point3d p6(1, 2, 3);

    cout << "Ponto 1: ";
    cout << "(" << p1.getX() << ", " << p1.getY() << ")" << endl;

    cout << "Ponto 2: ";
    cout << "(" << p2->getX() << ", " << p2->getY() << ")" << endl;

    cout << "Ponto 3: ";
    cout << "(" << p3.getX() << ", " << p3.getY() << ")" << endl;

    cout << "Ponto 4: ";
    cout << "(" << p4->getX() << ", " << p4->getY() << ")" << endl;

    cout << "Ponto 5: ";
    cout << "(" << p5.getX() << ", " << p5.getY() << ", " << p5.getZ() << ")" << endl;

    cout << "Ponto 6: ";
    cout << "(" << p6.getX() << ", " << p6.getY() << ", " << p6.getZ() << ")" << endl;

    return 0;
}
