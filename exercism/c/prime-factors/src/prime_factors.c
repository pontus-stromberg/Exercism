#include "prime_factors.h"

size_t find_factors(uint64_t nbr, uint64_t buf[]){
   size_t i = 0;
   while(nbr > 1){
      uint64_t div = 2;   
      while(nbr%div != 0){
         div++;
      }
      nbr /= div;
      buf[i] = div;
      i++;
   }
   return i;
}
