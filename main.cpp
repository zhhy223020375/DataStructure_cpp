//
// Created by Zhang on 2024/2/6.
//
#include <iostream>
#include "test/coordin.h"
#include "test/stock00.h"
#include "test/mytime.h"
#include "test/StringBad.h"
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
void func1(StringBad s){
    std::cout << s << std::endl;
}
int main(void ){
//    std::cin << char a ;
    StringBad str_bad1("String Bad 1");
    std::cout << str_bad1 << std::endl;
    func1(str_bad1);
    std::cout <<str_bad1 <<std::endl;
    StringBad str_bad2;
    str_bad2 = str_bad1;
    std::cout << str_bad2 << std::endl;
    std::cout << str_bad1+str_bad2 << std::endl;
}
