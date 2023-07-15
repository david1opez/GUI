#include "main.h"

lv_obj_t * create_rectangle(const ObjParams& params) {
    lv_obj_t * obj = lv_obj_create(params.parent, NULL);
    lv_obj_set_pos(obj, params.x, params.y);
    lv_obj_set_size(obj, params.width, params.height);

    return obj;
};

lv_style_t create_style(const ObjStyleParams& params) {
    lv_style_t obj_style;

    lv_style_copy(&obj_style, &lv_style_plain);

    obj_style.body.main_color = params.color;
    obj_style.body.grad_color = params.gradient;
    obj_style.body.border.width = params.border_width;
    obj_style.body.border.color = params.border_color;
    obj_style.body.radius = params.radius;
    obj_style.body.opa = params.opa;

    return obj_style;
}
