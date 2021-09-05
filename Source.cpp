#include <iostream>
//#include "clockType.h"
#include "boxType.h"

using namespace std;
int main() {

    // Commented out because of not using clockType for assignment
//    clockType myClock;
//    myClock.setTime(3, 5, 20);
//    myClock.printTime();
//    // Increment Hours, Minutes, Seconds
//    myClock.incrementHours();
//    myClock.incrementMinutes();
//    myClock.incrementSeconds();
//    myClock.printTime();
//
//    clockType myClock2;
//    myClock2.setTime(3, 5, 20);
//
//    myClock.equalTime(myClock2);
//    if(!myClock.equalTime(myClock2))
//        cout << "These do not match" << endl;
//    else
//        cout << "These clocks are the same" << endl;
//
//    cout << endl;
    rectangleType rectangle;
    rectangleType rectangle2(3.5, 5.7);
    rectangle.setDimension(3.5, 4.5);
    rectangle.getWidth();
    rectangle.getLength();
    cout << "Rectangle 1" << endl;
    rectangle.print();
    cout << endl;
    cout << "Rectangle 2" << endl;
    rectangle2.print();
    cout << endl;

    boxType box;
    boxType box2(4.6, 6.7, 9.0);
    cout << "Box 1" << endl;
    box.setDimension(3.4, 5.5, 7.7);
    box.getLength();
    box.getWidth();
    box.getHeight();
    box.area();
    box.print();
    cout << endl;
    cout << "Box 2" << endl;
    box2.print();
}
