#include "sieve.h"
#include <iostream>

namespace sieve{

std::vector<int> primes(int nbr){
   if(nbr < 2) return {};
   if(nbr == 2) return {2};
   std::vector<int> output;
   std::vector<bool> mask(nbr);
   std::fill(mask.begin(), mask.end(), false);
   for(int i = 2; i <= nbr; i++){
      if(mask[i] == false){
         mask[i] = true;
         output.push_back(i);
         for(int j = i; j <= nbr; j++){
            if(i*j <= nbr){
               mask[i*j] = true;
            }
         }
      }
   }
   
   return output;

}

}
