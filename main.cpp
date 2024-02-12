//
// Created by Zhang on 2024/2/6.
//
#include <iostream>
//#include "LinearList/LinearList.h"
#include "LinearList/LinearList.cpp"
//#include "chapter_exercise/chapter_5.h"
using namespace std;

int main(void ) {
    ChainList<char> chain_l1;
    chain_l1.insert(0, 'a');
    chain_l1.insert(1, 'b');
    chain_l1.insert(2, 'c');
    chain_l1.insert(3, 'd');
    chain_l1.insert(4, 'e');
    cout << chain_l1 << endl;
    chain_l1.insert(0, 'f');
    cout << chain_l1 << endl;
    chain_l1.insert(3, 'g');
    cout << chain_l1 << endl;
    chain_l1.insert(7, 'h');
    cout << chain_l1 << endl;
    chain_l1.erase(0);
    cout << chain_l1 << endl;
    chain_l1.erase(4);
    cout << chain_l1 << endl;
    chain_l1.set_size(5);
    cout << chain_l1 << endl;
    cout << chain_l1[2] << endl;
    chain_l1[2] = 't';
    cout << chain_l1 << endl;
}
