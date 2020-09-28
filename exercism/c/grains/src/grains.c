#include "grains.h"
#include <math.h>
#include <inttypes.h>
#include <stdio.h>

uint64_t square(uint8_t index){
  
   if(index>64 || index < 1) return 0;
   return (uint64_t) 1 << (index-1);

}

uint64_t total(){

   return UINT64_MAX;
}


