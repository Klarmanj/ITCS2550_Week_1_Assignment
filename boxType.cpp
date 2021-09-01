#include <iostream>
#include "boxType.h"

using namespace std;

void boxType::setDimension(double l, double w, double h) {
    length = l;
    width = w;
    height = h;
}
double boxType::getHeight() const {
    return height;
}
double boxType::area() const {
    return 2*((length * width) + (length * height) + (width*height));
}
double boxType::volume() const {
    return (length * width * height);
}
void boxType::print() const {
    cout << "Length: " << length << endl;
    cout << "Width: " << width << endl;
    cout << "Height: " << height << endl;
}