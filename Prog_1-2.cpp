#include <iostream>
#include <cmath>
using namespace std;

class Point {
private:
    double x, y;

public:
    Point() {
        x = 0.0;
        y = 0.0;
    }

    Point(double x_, double y_) {
        x = x_;
        y = y_;
    }

    double getX() { return x; }
    void setX(double x_) { x = x_; }

    double getY() { return y; }
    void setY(double y_) { y = y_; }

    void movingByX(double x_) { x += x_; }
    void movingByY(double y_) { y += y_; }

    double distanceToStart() { return sqrt(x * x + y * y); }

    void toPolar() {
        cout << "p = " << sqrt(x * x + y * y) << ", ф = " << atan(y / x);
    }

    double distanceTo(Point& p) {
        return sqrt(pow(x - p.getX(), 2) + pow(y - p.getY(), 2));
    }

    bool equals(Point& p) {
        return (x == p.getX() && y == p.getY());
    }
};

int main() {
    Point A(1.5, 2.5),
        B(2, 1);

    cout << "A(" << A.getX() << ", " << A.getY() << ")" << endl;
    cout << "A distance to start: " << A.distanceToStart() << endl;
    cout << "A to polar: ";  A.toPolar(); cout << endl;
    cout << endl;

    cout << "B(" << B.getX() << ", " << B.getY() << ")" << endl;
    cout << "B distance to start: " << B.distanceToStart() << endl;
    cout << "B to polar: ";  B.toPolar(); cout << endl;
    cout << endl;

    cout << "A distance to B: " << A.distanceTo(B) << endl;
    cout << "(A == B) = ";
    if (A.equals(B)) cout << "true";
    else cout << "false";
    cout << endl << endl;

    A.movingByX(0.5);
    cout << "A moving by X at 0.5" << endl;
    A.movingByY(-1.5);
    cout << "A moving by Y at -1.5" << endl;
    cout << endl;

    cout << "A(" << A.getX() << ", " << A.getY() << ")" << endl;
    cout << "B(" << B.getX() << ", " << B.getY() << ")" << endl;
    cout << "A distance to B: " << A.distanceTo(B) << endl;
    cout << "(A == B) = ";
    if (A.equals(B)) cout << "true";
    else cout << "false";

    return 0;
}
