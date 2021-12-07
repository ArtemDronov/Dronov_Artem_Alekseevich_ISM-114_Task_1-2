#include "Point.h"
#include <cmath>
#include <limits>

Point::Point()
{
    x = 0.0;
    y = 0.0;
}

Point::Point(const double x_,const double y_)
{
    x = x_;
    y = y_;
}

double Point::getX() const {
    return x;
}
void Point::setX(const double x_){
    x = x_;
}
double Point::getY() const {
    return y;
}
void Point::setY(const double y_){
     y = y_;
}

void Point::movingByX(const double x_){
    x += x_;
}
void Point::movingByY(const double y_){
    y += y_;
}

double Point::distanceToStart() const{
    return sqrt(x*x + y*y);
}

void Point::toPolar(double& p, double& f){
    p = sqrt(x*x + y*y);
    f = atan(y/x);
}

double Point::distanceTo (const Point& p) const{
    return sqrt(pow(x-p.getX(),2) + pow(y-p.getY(),2));
}

bool Point::equals(const Point& p) const{
    double epsilon = std::numeric_limits<double>::epsilon();
    return (fabs(x - p.getX())<epsilon && fabs(y - p.getY())<epsilon);
}
