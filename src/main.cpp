#include <iostream>
#include "Point.h"
#include "Vector3D.h"

int main() {
    Point p1(1,1);
    Point p2(2,2);
    Point p3(3,3);
    Point p4 = p1 + p3 ;
    Point p5 =  p4 * 2.0 ;
    std :: cout<<"p1="<<p5.getX()<<std::endl;
    Point p7 =  2.0 * p5;
    std::cout<<"p2="<<p7.getX()<<std::endl;
    Vector3D v1(1,2,3);
    std::cout<<"v1="<<v1.getX()<<std::endl;
    Vector3D v2(1,2,3);
    Vector3D v3 = v1 - v2;
    std::cout<<"v3="<<v3.getX()<<std::endl;

}
