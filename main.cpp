//
// Created by Zhang on 2024/2/6.
//
#include <iostream>
#include "coordin.h"
#include "stock00.h"
#include "mytime.h"
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
//    Stock00 stock_1("000001.SZ", 20, 12.5);
////    std::string symbol = "000001.SZ";
////    std::cout << &symbol << std::endl;
////    stock_1.acquire(symbol, 20, 12.5);
//    stock_1.show();
    Time time1(1, 10);
    Time time2(2, 20);
    time1.show();
    time2.show();

    Time * pointer_3 = new Time(3, 30);
    pointer_3->show();
//    delete pointer_3;
    std::cout << '!' << std::endl;
    Time time4 = time1+time2;
    Time time5 = time1.sum(*pointer_3);
    time4.show();
    time5.show();
    Time time6 = time1 * 3.2;
    time6.show();
// 这个形式3.2这个double的对象调用的mult这个方法，这个方法被运算符重载了，他和前边儿的那个Time对象调用有本质的区别
    Time time7 = 3.2*time1;
    time7.show();
    std::cout << time1 << std::endl;
}