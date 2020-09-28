#ifndef ROBOT_SIMULATOR_H
#define ROBOT_SIMULATOR_H

#define DEFAULT_X_COORDINATE 0
#define DEFAULT_Y_COORDINATE 0
#define DEFAULT_BEARING 0

enum {HEADING_NORTH, HEADING_EAST, HEADING_SOUTH, HEADING_WEST};

typedef struct{
   int x_position;
   int y_position;
}grid_t;

typedef struct{
   int bearing;
   grid_t grid;
}robot_grid_status_t;

robot_grid_status_t robot_init();

robot_grid_status_t robot_init_with_position(int heading, int x, int y);

void robot_turn_right(robot_grid_status_t *r);

void robot_turn_left(robot_grid_status_t *r);

void robot_advance(robot_grid_status_t *r);

void robot_simulator(robot_grid_status_t *r, char *command);
#endif
