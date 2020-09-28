#include "nth_prime.h"
#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "../../sieve/src/sieve.c"

/*
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
*/

int nth(int nbr){

   static uint32_t result_array[1000];
   
   int limit = nbr < 10 ? 20 : nbr * 2;
   printf("nbr limit %d %d\n", nbr, limit);

   if(nbr < 1) return 0;
//   uint32_t *primes = malloc(sizeof(*primes)*nbr);
   uint32_t count = 0;
   while(true){
      uint32_t *primes = malloc(sizeof(*primes)*nbr);
      count = sieve(limit, primes, nbr);
      if(count == nbr){
         return primes[count];
      }
   }



/*
   int limit = 100;
   bool primes[limit+1];
   memset(primes, false, sizeof(primes));
   int count = 0;
   int current = 2;
   int i = 2;
   while(i <= limit){
      printf("nbr i count current %d %d %d %d\n", nbr, i, count, current);
      if(nbr == count) return current;
      if(i == limit){
         printf("limit reached\n");
         limit = limit*10;
         //bool helper[limit+1];
         //memset(helper, false, sizeof(helper));
         free(primes);
         printf("test");
         bool primes[limit+1];
         memset(primes, false, sizeof(primes));
         //primes = helper;
         //free(helper);
         limit *= 10;
         //nbr = nbr;
         //rrealloc limit = limit*10
      }
      if(!primes[i]){
         current = i;
         count++;
         primes[i] = true;
      }
      int index = i;
      while(index < limit){
         if(!primes[index]) primes[index] = true;
         index += i;
      }
      i++;
   }

   return current;
*/
}
