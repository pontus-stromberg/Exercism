#if !defined(ROBOT_NAME_H)
#define ROBOT_NAME_H

#include <string>

namespace robot_name{

class robot{
   private:
      std::string r_name;
   public:
      robot();
      std::string name() const;
      void reset();

};

}

#endif
