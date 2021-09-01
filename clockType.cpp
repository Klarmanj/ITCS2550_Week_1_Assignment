#include <iostream>
#include "clockType.h"

using namespace std;

void clockType::setTime(int h, int  m, int s) {
    hr = h;
    min = m;
    sec = s;
}

void clockType::getTime(int &h, int &m, int &s) const {
    h = hr;
    m = min;
    s = sec;
}

void clockType::printTime() const {
    cout << "Hours: " << hr << endl;
    cout << "Minutes: " << min << endl;
    cout << "Seconds: " << sec << endl;
}
int clockType::incrementHours() {
    return hr++;
}
int clockType::incrementMinutes() {
    return min++;
}
int clockType::incrementSeconds() {
    return sec++;
}
bool clockType::equalTime(const clockType& clock2) const {
    return hr == clock2.hr && sec == clock2.sec && min == clock2.min;
}