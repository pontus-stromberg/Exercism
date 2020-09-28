#include "robot_name.h"
#include <cstdlib>
#include <iostream>
#include <unordered_set>

namespace robot_name{
static std::unordered_set<std::string> used_names;
robot::robot(){
   r_name = "dummy";
   reset();
}

std::string robot::name() const{
   return r_name;
}

void robot::reset(){
   int size = used_names.size();
   std::string new_name = "dummy";
   do{
      new_name[0] = rand() % 26 + 65;
      new_name[1] = rand() % 26 + 65;
      new_name[2] = rand() % 10 + 48;
      new_name[3] = rand() % 10 + 48;
      new_name[4] = rand() % 10 + 48;
      used_names.insert(new_name);
   }while((int)used_names.size() != size + 1);
   r_name = new_name;
}

}
