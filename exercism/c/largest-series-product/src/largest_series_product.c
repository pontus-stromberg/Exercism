#include "largest_series_product.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

int64_t largest_series_product(char *series, int len_series){
   int64_t big = 0;
   size_t len_arr = strlen(series);
   if(len_series > (int)len_arr) return -1;
   for(int i = 0; i <= (int)len_arr - len_series; i++){
      int64_t nbr = 1;
      for(int j = 0; j < len_series; j++){
         if(!isdigit(series[i + j])) return -1;
         nbr = nbr*(series[i + j] - 48);
      }
      if(nbr > big) big = nbr;
   }
   return big;
}
