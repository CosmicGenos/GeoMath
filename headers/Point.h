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
    Point operator*(double scale);
    Point operator/(double scale);
    Point operator==(Point p);
    Point operator!=(Point p);
private:
    double x_, y_;
};

#endif //GEOMATH_POINT_H
