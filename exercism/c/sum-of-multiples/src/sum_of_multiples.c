#include "sum_of_multiples.h"
#include <stdio.h>

unsigned int sum_of_multiples(const unsigned int *multiples,
                              const size_t number_of_multiples,
                              const unsigned int up_to){

   unsigned int sum = 0;
   if(!multiples) return 0;
   for(unsigned int i = 1; i< up_to; i++){ 
      for(unsigned int n = 0; n < number_of_multiples; n++){
         if(multiples[n] > 0){
            if(i%multiples[n] == 0){
               sum += i;
               break;
            }
         }
      }
   }
   return sum;
}
