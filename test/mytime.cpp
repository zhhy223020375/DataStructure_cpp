//
// Created by Zhang on 2024/2/7.
//

#include "mytime.h"
#include <iostream>

Time::Time(int h, int m) {
    hours = h;
    minutes = m;
}

Time::~Time() {
    std::cout << "This Unit Dropped!" << std::endl;
}

void Time::add_min(int m) {
    minutes += m;
    while (minutes >= 60){
        minutes -= 60;
        hours += 1;
    }
}

void Time::add_h(int h) {
    hours += h;
}

void Time::reset() {
    hours = 0;
    minutes = 0;
}

Time Time::sum(const Time &t) const {
    Time sum;
    sum.minutes = t.minutes + minutes;
    sum.hours = t.hours + hours;
    while (sum.minutes >= 60){
        sum.minutes -= 60;
        sum.hours += 1;
    }
    return sum;
}

void Time::show() const {
    std::cout << "Hour:" << this->hours << std::endl;
    std::cout << "Minute:" << this->minutes << std::endl;
}

Time Time::operator+(const Time &t) const {
    Time sum;
    sum.minutes = t.minutes + minutes;
    sum.hours = t.hours + hours;
    while (sum.minutes >= 60){
        sum.minutes -= 60;
        sum.hours += 1;
    }
    return sum;
}

Time Time::operator*(float n) const {
    Time mult;
    mult.hours = hours * n;
    mult.minutes = minutes * n;
    return mult;
}

Time operator*(double n, const Time &t) {
    Time mult;
    mult.hours = n * t.hours;
    mult.minutes = n * t.minutes;
    return mult;
}


std::ostream & operator<<(std::ostream &os, const Time &t) {
    os << "Hours:" << t.hours << "Minutes:" << t.minutes;
    return os;

}



