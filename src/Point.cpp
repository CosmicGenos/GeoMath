//
// Created by Kavindu on 7/13/2026.
//
#include "headers/Point.h"
#include <cmath>
#include <iostream>

Point::Point():x_(0),y_(0) {
    std::cout<<"Point constructor"<<std::endl;
}

Point::Point(double x, double y):x_(x),y_(y) {
    std::cout<<"Point constructor"<<std::endl;
}

Point::Point(const Point& p):x_(p.getY()),y_(p.getY()) {
    std::cout<<"deep copy constructor"<<std::endl;
}

double Point::getX() const{
    return x_;
}
double Point::getY() const {
    return y_;
}

void Point::setX(double const x) {
    x_ = x;
}

void Point::setY(double const y) {
    y_ = y;
}

double Point::distance(const Point &p) const{
    return sqrt((pow(p.getX() - x_,2) + pow(p.getY() - y_,2)));
}

