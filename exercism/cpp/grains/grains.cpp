#include "grains.h"

namespace grains{

long long square(int nbr){
   return 1ULL << (nbr-1);
}

long long total(){
   long long sum = 0;
   for(int i = 1; i <= 64; i++){
      sum += square(i);
   }
   return sum;
}

}
