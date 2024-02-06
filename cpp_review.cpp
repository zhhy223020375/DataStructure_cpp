//
// Created by Zhang on 2024/1/4.
//
#include "iostream"

// 使用传值参数进行传值
int abc_value(int a, int b, int c){
    return a+b+c;
}
// 使用函数模板进行传值
template<class T>
T abc_t(T a, T b, T c){
    return a+b+c;
}
// 使用引用参数进行传值
// 这个时候原始的数据地址被传了进来，如果对传进来的地址进行操作，那么原始值将被改变
template<class T_1>
T_1 abc_refer(T_1& a, T_1& b, T_1& c){
//    a = 0;
    return a+b+c;
}
// 使用常量引用参数进行传值
template <class T_2>
T_2 abc_const_refer(const T_2& a, const T_2& b, const T_2& c){
//    a = 0; 这么搞就会报错
    return a+b+c;
}
template <class T_3>
T_3& abc_refer_re(T_3& a, T_3& b){
    return b;
}

int ab(int a, int b){
    if(a<=0||b<=0){
        throw "All Parameters should be > 0";
    }
    return a+b;
}
namespace cpp_review_pro{
    template <class T>
    bool make2dArray(T ** &a, int number_of_rows, int number_of_cols){
        try {
            a = new T * [number_of_rows];
            for(int i=0; i<number_of_rows; i++){
                a[i] = new T[number_of_cols];
            }
            return true;
        }
        catch (std::bad_alloc) {
            return false;
        }
    }
    template <class T>
    void delete2dArray(T ** &a, int number_of_rows){
        for(int i=0; i<number_of_rows; i++){
            delete []a[i];
        }
        delete []a;
        a=NULL;
    }
}

# include "Currency.h"

namespace recursive{
    template <class T>
    T Fob(T n){
        if (n <= 0){
            return 0;
        }
        else if (n == 1){
            return 1;
        }
        else{
            return Fob(n-1) + Fob(n-2);
        }
    }
}
//int main(void){
//    using namespace std;
//    cout << recursive::Fob(4) << endl;
//}

