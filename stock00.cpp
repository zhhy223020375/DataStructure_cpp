//
// Created by Zhang on 2024/2/7.
//

#include "stock00.h"

void Stock00::set_tot() {
    total_val = shares * share_vol;
}

void Stock00::show() {
    std::cout << "Company:"<< company << std::endl;
    std::cout << "Shares:" << shares << std::endl;
    std::cout << "Share Price:" << share_vol << std::endl;
    std::cout << "Total Value:" << total_val << std::endl;
}

void Stock00::acquire(const std::string &co, long n, double pr) {
    company = co;
    std::cout << &co << std::endl;
    if (n < 0){
        std::cout << "Number of Shares can not be Negative!" << std::endl;
        shares = 0;
    }
    else{
        shares = n;
    }
    share_vol = pr;
    set_tot();
}

void Stock00::bug(long num, double price) {
    if (num < 0){
        std::cout << "Number of Stocks can not be Negative!" << std::endl;
    }
    else{
        share_vol = price;
        shares += num;
        set_tot();
    }
}

void Stock00::sell(long num, double price) {
    if (num < 0){
        std::cout << "Number of Stock can not be Negative!" << std::endl;
    }
    else{
        shares -= num;
        share_vol = price;
        set_tot();
    }
}

void Stock00::update(double price) {
    share_vol = price;
    set_tot();
}

Stock00::Stock00(const std::string &co, long n, double pr) {
    company = co;
    std::cout << &co << std::endl;
    if (n < 0){
        std::cout << "Number of Shares can not be Negative!" << std::endl;
        shares = 0;
    }
    else{
        shares = n;
    }
    share_vol = pr;
    set_tot();
}

Stock00::~Stock00() {

}


