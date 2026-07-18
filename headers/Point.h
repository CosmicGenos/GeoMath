//
// Created by Kavindu on 7/13/2026.
//

#ifndef GEOMATH_POINT_H
#define GEOMATH_POINT_H

class Point {
public:
    Point();
    Point(double x, double y);
    Point(const Point &p);
    double getX() const;
    double getY() const;
    void setX(double x);
    void setY(double y);
    double distance(const Point &p) const;
    double distanceFromStart() const;
    Point Scale(int scale) const;
    Point operator+(const Point &p) const;
    Point operator-(const Point& p) const;
    Point operator*(double scale) const;

private:
    double x_, y_;
};

Point operator*(double scale, const Point& p);

#endif //GEOMATH_POINT_H
