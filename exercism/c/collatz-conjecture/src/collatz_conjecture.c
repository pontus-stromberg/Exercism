#include "collatz_conjecture.h"
#include <stdio.h>

int steps(int nbr){
   if(nbr < 1) return ERROR_VALUE;
   int count = 0;
   while(nbr != 1){
      if(nbr%2 == 0) nbr = nbr/2;
      else nbr = 3*nbr + 1;
      count++;
   }
   return count;
}
