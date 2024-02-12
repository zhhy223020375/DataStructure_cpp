//
// Created by Zhang on 2024/2/12.
//

//#include "LinearList/LinearList.h"
//#include "LinearList/LinearList.cpp"
#include "D:\data_structure_cpp\LinearList\LinearList.cpp"
#include <iostream>
using namespace std;
void C5_E1(){
    ArrayList<char> arr_l1(10);
    cout << arr_l1 << endl;
    arr_l1.insert(0,'a');
    arr_l1.insert(1,'b');
    arr_l1.insert(2,'c');
    arr_l1.insert(3,'d');
    arr_l1.insert(4,'e');
    cout << arr_l1 << endl;
    arr_l1.insert(0, 'f');
    cout << arr_l1 << endl;
    arr_l1.insert(3, 'g');
    cout << arr_l1 << endl;
    arr_l1.insert(7, 'h');
    cout << arr_l1 << endl;
    arr_l1.erase(0);
    cout << arr_l1 << endl;
    arr_l1.erase(4);
    cout << arr_l1 << endl;
    cout << arr_l1[0] << endl;
    arr_l1[0] = '0';
    cout << arr_l1 << endl;
}
