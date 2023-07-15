#include "main.h"

#ifndef _V_ROBOT_H_
#define _V_ROBOT_H_

class V_Robot {
    private:
        lv_obj_t * robot;
        static lv_point_t points[5];
        lv_obj_t * parent;
    public:
        int x;
        int y;
        int theta;
        int width;
        int height;

        V_Robot();
        V_Robot(int width, int height, int x, int y, int theta);

        void draw(lv_obj_t * parent);
        void update_coords(int x, int y, int theta);
};

#endif // _V_ROBOT_H_
