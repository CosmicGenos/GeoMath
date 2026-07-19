//
// Created by Kavindu on 7/13/2026.
//

#include "../headers/Vector3D.h"
#include <iostream>

Vector3D::Vector3D(double x, double y, double z) : x_(x), y_(y), z_(z) {
    std::cout<<"Vector3D::Vector3D()"<<std::endl;
}
double Vector3D::getX() const {
    return x_;
};

double Vector3D::getY() const {
    return y_;
}
double Vector3D::getZ() const {
    return z_;
}

Vector3D Vector3D::operator+(Vector3D &v) const {
    return{x_ + v.getX(),y_ + v.getY(),z_ + v.getZ()};
};

Vector3D Vector3D::operator-(Vector3D &v) const {
    return {x_ - v.getX(),y_ - v.getY(),z_ - v.getZ()}; 
};