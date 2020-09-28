#include "perfect_numbers.h"

kind classify_number(int nbr){
   if(nbr <= 0) return ERROR;
   int sum = 0;
   for(int i = 1; i < nbr; i++){
      if(nbr%i == 0){
         sum += i;
      }
   }
   if(sum == nbr) return PERFECT_NUMBER;
   else if(sum > nbr) return ABUNDANT_NUMBER;
   else return DEFICIENT_NUMBER;
}
