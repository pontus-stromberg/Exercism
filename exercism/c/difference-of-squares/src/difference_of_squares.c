#include "difference_of_squares.h"
#include <math.h>
#include <stdio.h>

unsigned int sum_of_squares(const unsigned int nbr){

   unsigned int sum = 0;
   for(unsigned int i = 1; i<=nbr; i++){
      sum += pow(i,2);
   } 
   return sum;
}

unsigned int square_of_sum(const unsigned int nbr){

   unsigned int sum = 0;
   for(unsigned int i = 1; i<= nbr; i++){
      sum += i;
   }
   int square = pow(sum, 2);
   return square;

}

unsigned int difference_of_squares(const unsigned int nbr){

   int diff = square_of_sum(nbr) - sum_of_squares(nbr);
   return diff;
}
