#include <iostream>
#include "Point.h"


int main() {
    Point p1(1,1);
    Point p2(2,2);
    Point p3(3,3);
    Point p4 = p1 + p3 ;
    Point p5 =  p4 * 2.0 ;
    std :: cout<<"p1="<<p5.getX()<<std::endl;
}
