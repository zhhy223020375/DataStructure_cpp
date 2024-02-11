//
// Created by Zhang on 2024/1/17.
//

#ifndef Currency_
#define Currency_

// 其实这里定义类的时候，也定义了一个namespace，里边出现的所有东西，都是Currency这个名称空间里的东西
class Currency{
public:
    enum sign_type{plus, minus};
    // 构造函数
    Currency(sign_type the_sign = plus,
             unsigned long the_dollars = 0,
             unsigned int the_clients = 0);
    // 析构函数
    ~Currency(){};
    void set_value(sign_type, unsigned long , unsigned int );
    void set_value(double );
    sign_type get_sign() const {
        return sign;
    }
    unsigned long get_dollars() const{
        return dollars;
    }
    unsigned int get_cents() const{
        return cents;
    }
    Currency operator + (const Currency &) const;
    Currency & increment(const Currency &);
    void output() const;

private:
    sign_type sign;
    unsigned long dollars{};
    unsigned int cents{};
};

#endif