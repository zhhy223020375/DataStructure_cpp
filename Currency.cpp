//
// Created by Zhang on 2024/1/17.
//

#include "Currency.h"
#include "iostream"


void Currency::set_value(Currency::sign_type the_sign, unsigned long the_dollars, unsigned int the_cents) {
    if (the_cents > 99){
        throw "Cents Should be < 100";
    }
    sign = the_sign;
    dollars = the_dollars;
    cents = the_cents;
}
void Currency::set_value(double the_amount) {
    if (the_amount < 0){
        sign = minus;
    }
    else{
        sign = plus;
    }
    dollars = (unsigned long ) the_amount;
    cents = (unsigned int )((the_amount - dollars + 0.001) * 100);
}
Currency::Currency(Currency::sign_type the_sign, unsigned long the_dollars, unsigned int the_cents) {
    set_value(the_sign, the_dollars, the_cents);
}
Currency Currency::operator+(const Currency & x) const {
    Currency result;
    if(sign == plus){
        if (x.sign == plus){
            result.sign = plus;
            result.dollars = dollars + x.dollars;
            result.cents = cents + x.cents;
            if (result.cents > 99){
                result.cents -= 99;
                result.dollars ++;
            }
        }
        if (x.sign == minus){
            if (cents >= x.cents){
                result.cents = cents - x.cents;
                if (dollars >= x.dollars){
                    result.sign = plus;
                    result.dollars = dollars - x.dollars;
                }
                else{
                    result.sign = minus;
                    result.dollars = x.dollars - dollars;
                }
            }
        }
    }
    return result;
}

Currency &Currency::increment(const Currency & x) {
    *this = *this + x;
    return *this;
}
// 重载 << 运算符是一个很麻烦的操作，似乎要重载两边才能出来
void Currency::output() const {
    std::cout << "sign: " << sign << std::endl;
    std::cout << "dollars: " << dollars << std::endl;
    std::cout << "cents: " << cents << std::endl;
}
