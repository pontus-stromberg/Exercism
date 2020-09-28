#include "nth_prime.h"
#include <iostream>
#include <algorithm>

namespace nth_prime{

int nth(int nbr){
   printf("start\n");
   int limit = 100;
   bool mask[100] = {true}; 
   std::fill_n(mask, 100, true);
   int count = 0;
   int current = 0;
   for(int i = 2; i <= limit; i++){
      printf("i mask %d %d\n", i, mask[i]);
      if(mask[i]){
         //mask[i] = true;
         count++;
         std::cout << "add " << i << std::endl;
         if(count == nbr){
            //std::cout << "return " << i << std::endl;
            current = i;
            break;
         }
         for(int j = i; j <= limit; j++){
            mask[i*j] = false; 
         }
      }
      if(i+1 == limit){
         limit *= 2;
         std::fill_n(mask, 200, true);
      }
   }
   printf("return current\n");
   return current;
}

}
