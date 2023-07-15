#include "main.h"

lv_point_t V_Robot::points[5];

V_Robot::V_Robot() {
    this->width = 18;
    this->height = 18;
    this->x = 0;
    this->y = 0;
    this->theta = 0;
};

V_Robot::V_Robot(int width, int height, int x, int y, int theta) {
    this->width = width;
    this->height = height;

    this->x = x;
    this->y = y;
    this->theta = theta;
};

void V_Robot::draw(lv_obj_t* parent) {
    this->x = this->x-((this->width)/2);
    this->y = this->y-((this->height)/2);

    this->robot = lv_line_create(parent, NULL);

    this->points[0].x = x;
    this->points[0].y = y;
    this->points[1].x = x + this->width;
    this->points[1].y = y;
    this->points[2].x = x + this->width;
    this->points[2].y = y + this->height;
    this->points[3].x = x;
    this->points[3].y = y + this->height;
    this->points[4].x = x;
    this->points[4].y = y;

    lv_line_set_points(this->robot, this->points, 5);

    static lv_style_t robot_style;
    lv_style_copy(&robot_style, &lv_style_plain);
    robot_style.line.color = LV_COLOR_GREEN;
    robot_style.line.width = 2;

    lv_line_set_style(this->robot, &robot_style);
};

void V_Robot::update_coords(int x, int y, int theta) {
    this->x = this->x-((this->width)/2);
    this->y = this->y-((this->height)/2);

    this->points[0].x = x;
    this->points[0].y = y;
    this->points[1].x = x + this->width;
    this->points[1].y = y;
    this->points[2].x = x + this->width;
    this->points[2].y = y + this->height;
    this->points[3].x = x;
    this->points[3].y = y + this->height;
    this->points[4].x = x;
    this->points[4].y = y;

    lv_line_set_points(this->robot, this->points, 5);

    double radians = this->theta * (3.14159 / 180.0);
    int center_x = x + (this->width / 2);
    int center_y = y + (this->height / 2);

    for (int i = 0; i < 5; i++) {
        int translated_x = this->points[i].x - center_x;
        int translated_y = this->points[i].y - center_y;

        this->points[i].x = (int)(translated_x * cos(radians) - translated_y * sin(radians)) + center_x;
        this->points[i].y = (int)(translated_x * sin(radians) + translated_y * cos(radians)) + center_y;
    }

    lv_line_set_points(this->robot, this->points, 5);
};
