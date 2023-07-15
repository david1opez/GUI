#include "main.h"

#ifndef _DRAW_FIELD_OBJECTS_H_
#define _DRAW_FIELD_OBJECTS_H_

struct Styles {
    lv_style_t red_mesh;
    lv_style_t blue_mesh;
    lv_style_t goal;
    lv_style_t field;
    lv_style_t black_bumper;
    lv_style_t red_bumper;
    lv_style_t blue_bumper;
    lv_style_t red_circular_bumper;
    lv_style_t blue_circular_bumper;
};

struct Dimensions {
    double screen_width = 480;
    double screen_height = 240;
    double field_width = 140.5*FSF;
    double field_height = 140.5*FSF;
    double goal_width = 23.08*FSF;
    double goal_height = 39.37*FSF;
    double goal_thickness = 2*FSF;
    double goal_bumper_thickness = 1*FSF;
    double goal_bumper_spacing = 3*FSF;
    double goal_circular_bumper_diameter = 7.76*FSF;
    double central_bumper_thickness = 2.37*FSF;
    double central_vertical_bumper_height = 94.25*FSF;
    double central_horizontal_bumper_width = 49.13*FSF;
    double central_color_bumper_height = 23*FSF;
    double robot_width = 14*FSF;
    double robot_height = 14*FSF;
};

struct Coords {};

void draw_field_objects(V_Robot robot);

#endif // _DRAW_FIELD_OBJECTS_H_
