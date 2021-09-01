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
    boxType();
    boxType(double, double, double);
};

