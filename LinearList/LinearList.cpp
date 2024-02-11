//
// Created by Zhang on 2024/2/11.
//

#include "LinearList.h"
#ifndef DATA_STRUCTURE_CPP_LINEARLIST_CPP
#define DATA_STRUCTURE_CPP_LINEARLIST_CPP
// 线性表的数组实现
//int init_capacity = 10;
template <typename T>
class ArrayList:public LinearList{
public:
//    构造函数
    ArrayList(int init_capacity=10){
        arr_len = init_capacity;
        ele_ptr = new T [arr_len];
        linear_len = 0;
    }
//    复制构造函数
    ArrayList(const ArrayList & arr){
        arr_len = arr.arr_len;
        ele_ptr = new T [arr_len];
        linear_len = arr.linear_len;
        for(int i=0; i<linear_len;i++){
            ele_ptr[i] = arr.ele_ptr[i];
        }
    }
    ~ArrayList(){
        std::cout << *ele_ptr << " has been dropped!" << std::endl;
        delete [] ele_ptr;
    }
protected:
    T * ele_ptr;
    int arr_len;
    int linear_len;
};

#endif //DATA_STRUCTURE_CPP_LINEARLIST_CPP


