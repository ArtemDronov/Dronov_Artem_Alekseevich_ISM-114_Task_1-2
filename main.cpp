#include <iostream>
#include <Point.h>
using namespace std;

int main()
{
    Point A(1.5, 2.5),
        B(2, 1);
    double p, f;

    cout << "A(" << A.getX() << ", " << A.getY() << ")" << endl;
    cout << "A distance to start: " << A.distanceToStart() << endl;
    A.toPolar(p, f);
    cout << "A to polar: p = " << p << ", � = " << f << endl;
    cout << endl;

    cout << "B(" << B.getX() << ", " << B.getY() << ")" << endl;
    cout << "B distance to start: " << B.distanceToStart() << endl;
    B.toPolar(p, f);
    cout << "B to polar: p = " << p << ", � = " << f << endl;
    cout << endl;

    cout << "A distance to B: " << A.distanceTo(B) << endl;
    cout << "(A == B) = ";
    if (A.equals(B))
        cout << "true";
    else
        cout << "false";
    cout << endl
         << endl;

    A.movingByX(0.5);
    cout << "A moving by X at 0.5" << endl;
    A.movingByY(-1.5);
    cout << "A moving by Y at -1.5" << endl;
    cout << endl;

    cout << "A(" << A.getX() << ", " << A.getY() << ")" << endl;
    cout << "B(" << B.getX() << ", " << B.getY() << ")" << endl;
    cout << "A distance to B: " << A.distanceTo(B) << endl;
    cout << "(A == B) = ";
    if (A.equals(B))
        cout << "true";
    else
        cout << "false";

    return 0;
}
