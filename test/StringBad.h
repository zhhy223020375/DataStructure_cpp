//
// Created by Zhang on 2024/2/10.
//
#include <iostream>
#ifndef DATA_STRUCTURE_CPP_STRINGBAD_H
#define DATA_STRUCTURE_CPP_STRINGBAD_H


class StringBad {
private:
    char * str;
    int len;
    static int num_strings;
public:
    StringBad(const char * s);
    StringBad(StringBad & s);
    StringBad();
    ~StringBad();
    StringBad & operator=(const StringBad &s);
    StringBad & operator+(const StringBad &s);
    friend std::ostream & operator<<(std::ostream & os, const StringBad &s);
};


#endif //DATA_STRUCTURE_CPP_STRINGBAD_H
