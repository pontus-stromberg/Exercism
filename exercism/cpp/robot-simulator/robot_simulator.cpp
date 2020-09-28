#include "robot_simulator.h"
#include <iostream>

namespace robot_simulator{

Robot::Robot(){
   pos = {0,0};
   bearing = NORTH;
}

Robot::Robot(std::pair<int, int> start_pos, Bearing b){
   pos = start_pos;
   bearing = b;
}

std::pair<int, int> Robot::get_position() const{
   return pos;
}

Bearing Robot::get_bearing() const{
   //bearing = (Bearing)((int)bearing + 1);
   //if(this->bearing == NORTH) this->bearing = Bearing::SOUTH;
   return bearing;
}

void Robot::turn_right(){
   bearing = (Bearing)((int)bearing + 1);
   if(bearing == 4) bearing = NORTH;
}

void Robot::turn_left(){
   bearing = (Bearing)((int)bearing - 1);
   if(bearing == -1) bearing = WEST; 
}

void Robot::advance(){
   if(bearing == EAST) pos.first++;
   if(bearing == SOUTH) pos.second--;
   if(bearing == WEST) pos.first--;
   if(bearing == NORTH) pos.second++;
}

void Robot::execute_sequence(std::string input){
   for(int i = 0; i < (int)input.length(); i++){
      switch(input[i]){
         case 'A': advance(); break;
         case 'R': turn_right(); break;
         case 'L': turn_left(); break;
      }
   }
}

}
