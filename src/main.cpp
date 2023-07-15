#include "main.h"

void on_center_button() {};

V_Robot robot(18, 18, 0, 0, 0);

void initialize() {
	draw_field_objects(robot);
};

void disabled() {};

void competition_initialize() {};

void autonomous() {};

void opcontrol() {
	while(true) {
        robot.update_coords(0, 0, 0);
    };
};
