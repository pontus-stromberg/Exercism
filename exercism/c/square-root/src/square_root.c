#include "square_root.h"
#include <math.h>
#include <stdio.h> 

unsigned short squareRoot(unsigned short radicant)
{
   unsigned short res = 0;
   unsigned short bit = 1 << 14;

   printf("bit %d radicant %d\n", bit, radicant);

   while (bit > radicant){
      bit >>= 2;
      printf("while bit %d\n", bit);
   }

   while (bit != 0) {
      printf("while radicant %d >= res %d + bit %d\n", radicant, res, bit);
      if (radicant >= res + bit) {
         radicant -= res + bit;
         res = (res >> 1) + bit;
      } else {
         res >>= 1;
      }
      bit >>= 2;
   }
   printf("return res %d\n", res);
   return res;
}

unsigned int squareRoot_easy(unsigned int nbr){

   double root = sqrt(nbr);
   
   return (int)root;

}
