#include "raindrops.h"

namespace raindrops{
std::string convert(int nbr){
   std::string ret;
   if(nbr%3 == 0) ret.append("Pling");
   if(nbr%5 == 0) ret.append("Plang");
   if(nbr%7 == 0) ret.append("Plong");
   if(ret.empty()) ret = std::to_string(nbr);
   return ret;
}
}
