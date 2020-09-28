#include "gigasecond.h"
#include <math.h>

time_t gigasecond_after(time_t date){
   
   time_t ms_after = (long long) date + pow(10,9);
   return ms_after;
}
