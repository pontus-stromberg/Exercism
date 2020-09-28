#include "prime_factors.h"

namespace prime_factors{

std::vector<int> of(int nbr){
   std::vector<int> ret;
   while(nbr > 1){
      for(int i = 2; i <= nbr; i++){
         if(nbr%i == 0){
            ret.push_back(i);
            nbr /= i;
            break;
         }
      }
   }
   return ret;
}

}
