#include <iostream>
#include "rectangleType.h"
class boxType: public rectangleType{
    double height;
public:
    void setDimension(double, double, double);
    double getHeight() const;
    double area() const;
    double volume() const;
    void print() const;
    boxType(){
        length = 5;
        width = 10;
        height = 4;
    }
    boxType(double l, double w, double h){
        length = l;
        width = w;
        height = h;
    }
};

