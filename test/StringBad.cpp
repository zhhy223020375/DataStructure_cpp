//
// Created by Zhang on 2024/2/10.
//

#include "StringBad.h"
#include <cstring>
#include <iostream>

int StringBad::num_strings = 0;
StringBad::StringBad(const char *s) {
    len = std::strlen(s);
    str = new char[len+1];
    std::strcpy(str, s);
    num_strings++;
    std::cout << num_strings << " Has Been Created!" << std::endl;
}

StringBad::StringBad() {
    len = 4;
    str = new char[len+1];
    std::strcpy(str, "C++");
    num_strings++;
    std::cout << "Num Strings: " << num_strings << " Has Been Created!" << std::endl;
}

StringBad::~StringBad() {
    num_strings--;
    delete [] str;
    std::cout << "Num Strings: " << num_strings << " Has Been Dropped!" << std::endl;
}

std::ostream &operator<<(std::ostream &os, const StringBad &s) {
    os << s.str;
    return os;
}

StringBad::StringBad(StringBad &s) {
    str = new char [s.len +1];
    std::strcpy(str, s.str);
    len = s.len;
    num_strings++;
    std::cout << "Num Strings: "<< num_strings << "Has Been Created!" << std::endl;
}

StringBad & StringBad::operator=(const StringBad &s) {
    if(this == &s){
        return *this;
    }
    delete [] str;
    len = s.len;
    str = new char [len+1];
    std::strcpy(str, s.str);
    return *this;
}

StringBad &StringBad::operator+(const StringBad &s) {
    StringBad * res = new StringBad;
    res->len = len + s.len;
    res->str = new char [len+1];
    std::strcpy(res->str, str);
    for(int i=0; i<s.len;i++){
        res->str[len+i] = s.str[i];
    }
    res->str[res->len] = '\0';
    return *res;
}




