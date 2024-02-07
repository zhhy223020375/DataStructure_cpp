//
// Created by Zhang on 2024/2/6.
//
// 能放入头文件的东西：
// 1.函数原型
// 2.常数变量：由define和const定义
// 3.结构声明
// 4.类声明
// 5.模板声明
// 6.内联函数

// 如果在调用这个hpp文件的时候，项目中已经define了这些东西，那么hpp文件就不会被重新编译
#ifndef DATA_STRUCTURE_CPP_COORDIN_H
#define DATA_STRUCTURE_CPP_COORDIN_H

struct polar{
    double distance;
    double angle;
};
struct rect{
    double x;
    double y;
};
// prototypes
polar rect_to_polar(rect xypos);
rect poler_to_rect(polar dapos);
//int golabl_1 = 100;
extern int global;
extern int global_def;
//int global_def = 10;
#endif //DATA_STRUCTURE_CPP_COORDIN_H
