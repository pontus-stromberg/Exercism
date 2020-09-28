#include "clock.h"

namespace date_independent{

clock::clock(int h, int m){
   hour = h;
   minute = m;
}

std::string clock::at(int h, int m){
   clock(h, m)//hour = h;
   //minute = m;
   return "test";
}

}
