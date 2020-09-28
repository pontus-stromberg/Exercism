#include "sieve.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

uint32_t sieve(uint32_t limit, uint32_t result_array[], uint32_t array_len){
   bool primes[limit-1];
   memset(primes, false, sizeof(primes));
   uint32_t count = 0;
   for(uint32_t i = 2; i <= limit; i++){
      uint32_t nbr = i;
      if(primes[nbr] == false){
         result_array[count] = nbr;
         count++;
         if(count == array_len) return count;
      }
      do{
         if(primes[nbr] == false){
            primes[nbr] = true;
         }
         nbr += i;
      }while(nbr <= limit);
   }
   return count;
}
