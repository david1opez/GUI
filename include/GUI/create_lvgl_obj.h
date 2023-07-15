#include "main.h"

#ifndef _CREATE_LVGL_OBJ_H_
#define _CREATE_LVGL_OBJ_H_

struct ObjParams {
    double x = 0;
    double y = 0;
    double width = 50;
    double height = 50;
    lv_obj_t * parent = lv_scr_act();
};

lv_obj_t * create_rectangle(const ObjParams& params);

struct ObjStyleParams {
    lv_style_t style_object = lv_style_plain;
    lv_obj_t * obj;
    int radius = 0;
    lv_color_t color = LV_COLOR_BLACK;
    lv_color_t gradient = color;
    lv_opa_t opa = LV_OPA_100;
    double border_width = 0;
    lv_color_t border_color = LV_COLOR_BLACK;
};

lv_style_t create_style(const ObjStyleParams& params);

#endif // _CREATE_LVGL_OBJ_H_
