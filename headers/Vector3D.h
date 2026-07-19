//
// Created by Kavindu on 7/13/2026.
//

#ifndef GEOMATH_VECTOR3D_H
#define GEOMATH_VECTOR3D_H
#include <iostream>


class Vector3D {
    double x_, y_, z_;

public:
    Vector3D(double x, double y, double z);
    double getX() const;
    double getY() const;
    double getZ() const;
    Vector3D operator+(Vector3D &v) const;
    Vector3D operator-(Vector3D &v) const;

};


#endif //GEOMATH_VECTOR3D_H
