//
// Created by Zhang on 2024/2/6.
//
// 几个cpp常用的限定符：
// 1.auto
// 2.register
// 3.static
// 4.extern
// 5.thread_local
// 6.mutable
// 7.const
// 8. volatile
// 9.
#include "coordin.h"
#include <cmath>
int global_def = 10;
polar rect_to_polar(rect xypos){
    using namespace std;
    polar answer;
    answer.distance = sqrt(xypos.x*xypos.x + xypos.y*xypos.y);
    answer.angle = atan2(xypos.y, xypos.x);
    return answer;
}
rect poler_to_rect(polar dapos){
    using namespace std;
    rect answer{};
    answer.x = 0;
    answer.y = 0;
    return answer;
}