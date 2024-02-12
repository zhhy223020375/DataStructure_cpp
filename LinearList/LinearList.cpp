//
// Created by Zhang on 2024/2/11.
//
#include <iostream>
#include "LinearList.h"
#ifndef DATA_STRUCTURE_CPP_LINEARLIST_CPP
#define DATA_STRUCTURE_CPP_LINEARLIST_CPP
// 线性表的数组实现
//int init_capacity = 10;
template <typename T>
class ArrayList:public LinearList<T>{
protected:
    T * ele_ptr;
    int arr_len;
    int linear_len;
    void change_arr_length(float n){
        int n_i = n * arr_len;
        T * new_ptr = new T[n_i];
        for (int i = 0; i < linear_len; i++) {
            new_ptr[i] = ele_ptr[i];
        }
        std::cout << "New!" << std::endl;
        delete []ele_ptr;
        ele_ptr = new_ptr;
    }
public:
//    构造函数
    ArrayList(int init_capacity=10){
        if (init_capacity < 1){
            throw "Parameters Error!";
        }
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
        std::cout << "[";
        for(int i=0; i<linear_len; i++){
            std::cout << ele_ptr[i] << " ";
        }
        std::cout << "] " << "The Array Has Been Dropped!" << std::endl;
        delete [] ele_ptr;
    }

    [[nodiscard]] bool empty()const override{
        return linear_len == 0;
    }
//    解释一下这个[[nodiscard]]，它是说明函数的返回值必须被main函数使用
//    再解释一下override，它是说明这个函数是派生类覆盖重写抽象基类的虚函数得到的东西
    [[nodiscard]] int size() const override{
        return linear_len;
    }
    [[nodiscard]] T get(int index) const override{
        if(index >= linear_len){
            throw "Parameters Error!";
        }
        return ele_ptr[index];
    }
    [[nodiscard]] int index(const T & element) const override{
        for (int i = 0; i < linear_len; i++) {
            if (ele_ptr[i] == element){
                return i;
            }
        }
        return -1;
    }
    void erase(int index) override{
        if (index >= linear_len){
            throw "Parameters Error!";
        }
        linear_len--;
        for(int i = index; i<linear_len; i++){
            ele_ptr[i] = ele_ptr[i+1];
        }
    }

    void insert(int index, const T & element) {
        if (linear_len==arr_len){
            change_arr_length(2);
        }
        linear_len++;
        for (int i = linear_len; i >= index; i--) {
            ele_ptr[i] = ele_ptr[i-1];
        }
        ele_ptr[index] = element;
    }
    friend std::ostream & operator<<(std::ostream& os, ArrayList & arr_list) {
        for (int i = 0; i < arr_list.linear_len; i++) {
            os << arr_list.ele_ptr[i] << " ";
        }
        return os;
    }
    T & operator[](int index){
        if (index >= linear_len){
            throw "Parameters Error!";
        }
        return ele_ptr[index];
    }
};

template <typename T>
struct chain_node{
    T element;
    chain_node<T> * next;
};

template <typename T>
class ChainList:public LinearList<T>{
protected:
    chain_node<T> * root;
    int linear_len;
public:
    ChainList(){
        root = NULL;
        linear_len = 0;
    }
    ChainList(const ChainList<T> &chain_list){
        if (chain_list.linear_len == 0){
            linear_len = 0;
            root = NULL;
        }
        else{
            chain_node<T> * cur_node = new chain_node<T>;
            chain_node<T> * this_node = chain_list.root;
            cur_node->element = root->element;
            cur_node->next = NULL;
            root = cur_node;
            for (int i = 0; i < chain_list.linear_len-1; i++) {
                this_node = this_node->next;
                chain_node<T> * new_node = new chain_node<T>;
                new_node->element = this_node->element;
                new_node->next = NULL;
                cur_node->next = new_node;
                cur_node = new_node;
            }
        }
    }
    [[nodiscard]] bool empty() const override{
        return linear_len == 0;
    }
    [[nodiscard]] int size() const override{
        return linear_len;
    }
    [[nodiscard]] T get(int index) const override{
        if (index >= linear_len){
            throw "Parameters Error!";
        }
        chain_node<T> * cur_node = root;
        for (int i = 0; i < index; i++) {
            cur_node = cur_node->next;
        }
        return cur_node->element;
    }
    [[nodiscard]] int index(const T & element) const{
        chain_node<T> * cur_node = root;
        for (int i = 0; i < linear_len; i++) {
            if (cur_node->element == element){
                return i;
            }
            cur_node = cur_node->next;
        }
        return -1;
    }
    void erase(int index) override{
        chain_node<T> * cur_node = root;
        if (index == 0){
            chain_node<T> * del_node = cur_node;
            cur_node = cur_node->next;
            root = cur_node;
            delete del_node;
        }
        else{
            for (int i = 0; i < index -1; i++) {
                cur_node = cur_node->next;
            }
            chain_node<T> * del_node = cur_node->next;
            cur_node->next = del_node->next;
            delete del_node;
        }
        linear_len--;
    }

    void insert(int index, const T & element)override{
        if (index > linear_len){
            throw "Parameters Error!";
        }
        if (index == 0){
            chain_node<T> * new_node = new chain_node<T>;
            new_node->element = element;
            new_node->next = root;
            root = new_node;
        }
        else{
            chain_node<T> * new_node = new chain_node<T>;
            chain_node<T> * cur_node = root;
            for (int i = 0; i < index-1; i++) {
                cur_node = cur_node->next;
            }
            new_node->element = element;
            new_node->next = cur_node->next;
            cur_node->next = new_node;
        }
        linear_len++;
    }
    void set_size(int new_size){
        if (new_size>=linear_len){
            return;
        }
        chain_node<T> * cur_node = root;
        for (int i = 0; i < new_size; i++) {
            cur_node = cur_node->next;
        }
        chain_node<T> * del_node;
        for (int i = new_size; i < linear_len; i++) {
            del_node = cur_node;
            cur_node = cur_node->next;
            delete del_node;
        }
        linear_len = new_size;
    }
    friend std::ostream & operator<<(std::ostream & os, const ChainList<T> & chian_list){
        chain_node<T> * cur_node = chian_list.root;
        for (int i = 0; i <chian_list.linear_len ; i++) {
            os << cur_node->element << " ";
            cur_node = cur_node->next;
        }
        return os;
    }
    T & operator[](int index){
        if (index>linear_len){
            throw "Parameters Error!";
        }
        chain_node<T> * cur_node = root;
        for (int i = 0; i < index; i++) {
            cur_node = cur_node->next;
        }
        return cur_node->element;
    }
};
#endif //DATA_STRUCTURE_CPP_LINEARLIST_CPP


