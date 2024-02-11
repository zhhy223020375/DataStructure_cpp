//
// Created by Zhang on 2024/2/6.
//
#include <iostream>
#include "LinearList/LinearList.h"
#include "LinearList/LinearList.cpp"
int main(void ) {
    int a = 20;
    ArrayList<int> arr_l1(10);
    ArrayList<int> arr_l2(arr_l1);
}
//// 在类的声明中使用模板
//template<typename T>
//class MyClass {
//public:
//    MyClass(T val); // 模板构造函数
//    void setValue(T val); // 模板成员函数
//    T getValue() const; // 模板成员函数
//
//private:
//    T data; // 模板数据成员
//};
//
//// 类外部的成员函数定义
//template<typename T>
//MyClass<T>::MyClass(T val) : data(val) {}
//
//template<typename T>
//void MyClass<T>::setValue(T val) {
//    data = val;
//}
//
//template<typename T>
//T MyClass<T>::getValue() const {
//    return data;
//}
//
//// 使用示例
//int main() {
//    // 实例化 MyClass 模板类，传入 int 类型
//    MyClass<int> myInt(42);
//    std::cout << "Value: " << myInt.getValue() << std::endl;

    // 实例化 MyClass 模板类，传入 double 类型
//    MyClass<double> myDouble(3.14);
//    std::cout << "Value: " << myDouble.getValue() << std::endl;
//
//    return 0;
//}
