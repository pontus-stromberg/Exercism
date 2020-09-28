#if !defined(CLOCK_H)
#define CLOCK_H

#include <string>

namespace date_independent{

class clock{
   public:
      static clock at(int, int);
   private:
      clock(int, int);
      int hour;
      int minute;
};

}

#endif
