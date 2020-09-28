#include "gigasecond.h"

namespace gigasecond {

   boost::posix_time::ptime advance(boost::posix_time::ptime p){
      return p + boost::posix_time::seconds(1000000000);
   }

}  // namespace gigasecond
