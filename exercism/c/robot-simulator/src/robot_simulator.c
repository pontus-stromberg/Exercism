#include "robot_simulator.h"
#include <string.h>

robot_grid_status_t robot_init(){
   robot_grid_status_t r;
   r.bearing = 0;
   r.grid.x_position = 0;
   r.grid.y_position = 0;
   return r;
}

robot_grid_status_t robot_init_with_position(int heading, int x, int y){
   robot_grid_status_t r;
   if(heading >= 0 && heading <= 3){
      r.bearing = heading;
   }else{
      r.bearing = DEFAULT_BEARING;
   }
   r.grid.x_position = x;
   r.grid.y_position = y;
   return r;
}

void robot_turn_right(robot_grid_status_t *r){
   r->bearing++;
   if(r->bearing > 3) r->bearing = 0;
}

void robot_turn_left(robot_grid_status_t *r){
   r->bearing--;
   if(r->bearing < 0) r->bearing = 3;
}

void robot_advance(robot_grid_status_t *r){
   switch (r->bearing){
      case 0:
         r->grid.y_position++;
         break;
      case 1:
         r->grid.x_position++;
         break;
      case 2:
         r->grid.y_position--;
         break;
      case 3:
         r->grid.x_position--;
         break;
   }
}

void robot_simulator(robot_grid_status_t *r, char *command){
   for(int i = 0; i < (int)strlen(command); i++){
      switch (command[i]){
         case 'L':
            robot_turn_left(r);
            break;
         case 'R':
            robot_turn_right(r);
            break;
         case 'A':
            robot_advance(r);
            break;
      }
   }
}

