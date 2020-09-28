#include "difference_of_squares.h"

#include <cmath>

namespace difference_of_squares{

uint64_t square_of_sum(int nbr){
   uint64_t sum = 0;
   for(int i = 1; i <= nbr; i++){
      sum += i;
   }
   return pow(sum, 2);
}

uint64_t sum_of_squares(int nbr){
   
   uint64_t sum = 0;
   for(int i = 1; i <= nbr; i++){
      sum += pow(i,2);
   }
   return sum;
}

uint64_t difference(int nbr){
   return square_of_sum(nbr) - sum_of_squares(nbr);
}

}
