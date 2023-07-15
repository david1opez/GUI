#include "main.h"

Dimensions dimensions;
Coords coords;

Styles styles = {
    .red_mesh = create_style({
        .color = LV_COLOR_RED,
        .opa = LV_OPA_30,
    }),
    .blue_mesh = create_style({
        .color = LV_COLOR_BLUE,
        .opa = LV_OPA_30,
    }),
    .goal = create_style({
        .color = LV_COLOR_GRAY,
        .border_width = dimensions.goal_thickness,
    }),
    .field = create_style({
        .color = LV_COLOR_GRAY,
    }),
    .black_bumper = create_style({
        .color = LV_COLOR_BLACK,
    }),
    .red_bumper = create_style({
        .color = LV_COLOR_RED,
        .opa = LV_OPA_60
    }),
    .blue_bumper = create_style({
        .color = LV_COLOR_BLUE,
        .opa = LV_OPA_60
    }),
    .red_circular_bumper = create_style({
        .radius = LV_RADIUS_CIRCLE,
        .color = LV_COLOR_RED,
        .opa = LV_OPA_60
    }),
    .blue_circular_bumper = create_style({
        .radius = LV_RADIUS_CIRCLE,
        .color = LV_COLOR_BLUE,
        .opa = LV_OPA_60
    }),
};

lv_obj_t * field;

// Central Bumpers
lv_obj_t * central_vertical_bumper;
lv_obj_t * central_horizontal_top_bumper;
lv_obj_t * central_horizontal_bottom_bumper;
lv_obj_t * central_blue_bumper;
lv_obj_t * central_red_bumper;

// Corner Bumpers
lv_obj_t * corner_top_blue_bumper;
lv_obj_t * corner_bottom_blue_bumper;
lv_obj_t * corner_top_red_bumper;
lv_obj_t * corner_bottom_red_bumper;

// Goal Bumpers
lv_obj_t * goal_top_red_bumper;
lv_obj_t * goal_bottom_red_bumper;
lv_obj_t * goal_top_blue_bumper;
lv_obj_t * goal_bottom_blue_bumper;
lv_obj_t * goal_circular_top_blue_bumper;
lv_obj_t * goal_circular_bottom_blue_bumper;
lv_obj_t * goal_circular_top_red_bumper;
lv_obj_t * goal_circular_bottom_red_bumper;

// Goals
lv_obj_t * goal_blue_mesh;
lv_obj_t * goal_red_mesh;
lv_obj_t * goal_red;
lv_obj_t * goal_blue;

void draw_field() {
    field = create_rectangle({
        .x = dimensions.screen_width/2 - dimensions.field_width/2,
        .y = dimensions.screen_height/2 - dimensions.field_height/2,
        .width = dimensions.field_width,
        .height = dimensions.field_height,
    });

    lv_obj_set_style(field, &styles.field);
};

void draw_field_objects(V_Robot robot) {
    robot.draw(field);
};
