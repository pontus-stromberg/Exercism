#if !defined(ROBOT_SIMULATOR_H)
#define ROBOT_SIMULATOR

#include <utility>
#include <string>

namespace robot_simulator{

//enum Bearing {SOUTH, WEST, NORTH, EAST};
enum Bearing {NORTH, EAST, SOUTH, WEST};

class Robot{
   private:
      Bearing bearing; 
      std::pair<int, int> pos;
   public:
      Robot();
      Robot(std::pair<int, int>, Bearing);
      std::pair<int, int> get_position() const;
      Bearing get_bearing() const;
      void turn_right();
      void turn_left();
      void advance();
      void execute_sequence(std::string);
};

}

#endif
