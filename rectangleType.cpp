#include <iostream>
#include "rectangleType.h"

using namespace std;

void rectangleType::setDimension(double l, double w) {
    length = l;
    width = w;
}
double rectangleType::getLength() const {
    return length;
}
double rectangleType::getWidth() const {
    return width;
}
double rectangleType::area() const {
    return (length * width);
}
double rectangleType::perimeter() const {
    return ((length*2) + (width*2));
}
void rectangleType::print() const {
    cout << "Length: " << length << endl;
    cout << "Width: " << width << endl;
    cout << "Area: " << area() << endl;
    cout << "Perimeter: " << perimeter() << endl;
}