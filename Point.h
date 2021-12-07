#ifndef POINT_H
#define POINT_H


class Point
{
private:
   double x, y;
public:
    Point();
    Point(const double x_,const double y_);
    double getX() const;
    void setX(const double x_);
    double getY() const;
    void setY(const double y_);
    void movingByX(const double x_);
    void movingByY(const double y_);
    double distanceToStart() const;
    void toPolar(double& p, double& f);
    double distanceTo (const Point& p) const;
    bool equals(const Point& p) const;
};

#endif // POINT_H
