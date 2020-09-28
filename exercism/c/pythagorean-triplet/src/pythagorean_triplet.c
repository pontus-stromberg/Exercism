#include "pythagorean_triplet.h"
#include <math.h>
#include <stdio.h>

triplets_t *triplets_with_sum(uint16_t sum){
   
   sum = sum;
   triplets_t *triplets = malloc(10);
   triplets->count = 0;
   
   uint16_t a = 1;
   uint16_t b = 2;
   uint16_t c = 3;
   while(c < sum/2){
      c = sqrt(pow(a,2) + pow(b,2));
      if(fmod(sqrt((pow(a,2) + pow(b,2))), 1) == 0){
         if(a+b+c == sum && c > b){
            printf("a b c %d %d %d\n", a, b, c);
            triplets[triplets->count].triplets->a = a;
            triplets[triplets->count].triplets->b = b;
            triplets[triplets->count].triplets->c = c;
            triplets->count++;
         }
      }
      if(a+1 == b || a+b+c > sum){
         b++;
         a = 1;
      }else{
         a++;
      }
   }
   return triplets;
   
}

void free_triplets(triplets_t *triplets){
   free(triplets);
}
