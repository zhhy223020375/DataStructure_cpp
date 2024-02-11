//
// Created by Zhang on 2024/2/7.
//

#include <ostream>
#ifndef DATA_STRUCTURE_CPP_MYTIME_H
#define DATA_STRUCTURE_CPP_MYTIME_H


class Time {
protected:
    int hours;
    int minutes;
public:
    Time(int h=0, int m=0);
    ~Time();
    void add_min(int m);
    void add_h(int h);
    void reset();
    Time sum(const Time & t) const;
    Time operator+(const Time & t) const;
    Time operator*(float n) const;
    void show() const;
    friend Time operator*(double n, const Time &t);
//    void operator<<(std::ostream & os );
    friend std::ostream & operator<<(std::ostream &os, const Time &t);
};



#endif //DATA_STRUCTURE_CPP_MYTIME_H
