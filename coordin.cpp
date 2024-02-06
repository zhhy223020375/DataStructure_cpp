//
// Created by Zhang on 2024/2/6.
//
#include "coordin.h"
#include <math.h>

polar rect_to_polar(rect xypos){
    using namespace std;
    polar answer;
    answer.distance = sqrt(xypos.x*xypos.x + xypos.y*xypos.y);
    answer.angle = atan2(xypos.y, xypos.x);
    return answer;
}
rect poler_to_rect(polar dapos){
    using namespace std;
    rect answer;
    answer.x = 0;
    answer.y = 0;
    return answer;
}