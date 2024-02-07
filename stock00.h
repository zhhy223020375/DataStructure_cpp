//
// Created by Zhang on 2024/2/7.
//

#ifndef DATA_STRUCTURE_CPP_STOCK00_H
#define DATA_STRUCTURE_CPP_STOCK00_H
#include <iostream>

class Stock00 {
private:
    std::string company;
    long shares;
    double share_vol;
    double total_val;
    void set_tot();
public:
    Stock00(const std::string & co, long n, double pr);
    ~Stock00();
    void acquire(const std::string & co, long n, double pr);
    void bug(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show();
};


#endif //DATA_STRUCTURE_CPP_STOCK00_H
