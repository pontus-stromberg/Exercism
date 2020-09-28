#include "sum_of_multiples.h"

namespace sum_of_multiples{

int to(std::vector<int> multiples, int end){

   if(multiples.size() == 0) return 0;
   int sum = 0;
   for(int i = multiples[0]; i < end; i++){
      for(int nbr : multiples){
         if(i%nbr==0){
            sum += i;
            break;
         }
      }
   }

   return sum;

}

}
