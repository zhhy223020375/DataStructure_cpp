//
// Created by Zhang on 2024/2/6.
//
#include <iostream>
#include "coordin.h"

int main(void ){
    using namespace std;
    int a = 10;
    int b = 100;
    cout << &a << endl;
    {
        int c = 10;
        int a = 20;
        cout << a << endl;
        cout << &a << endl;
    }
    cout << &a << endl;
    cout << a << endl;

}