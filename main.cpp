//
// Created by Zhang on 2024/2/6.
//
#include <iostream>
#include "coordin.h"
#include "stock00.h"
int func_1(void ){
    using namespace std;
    static int func_in_1 = 5;
    cout << func_in_1 << endl;
    func_in_1 ++;
    int func_in_2 = 2;
    cout << func_in_2 << endl;
    func_in_2 ++;
    return 0;
}
int global = 0;
const static int one_file = 10;
// 这个东西和直接拿来用得到的效果是一样的
//extern int golabl_1 = 1000;

int main(void ){
    Stock00 stock_1("000001.SZ", 20, 12.5);
//    std::string symbol = "000001.SZ";
//    std::cout << &symbol << std::endl;
//    stock_1.acquire(symbol, 20, 12.5);
    stock_1.show();

}