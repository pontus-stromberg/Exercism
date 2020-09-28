#include "series.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

series_results_t series(char *input, unsigned int length){
   series_results_t s;
   s.substring_count = 0;
   unsigned int len = strlen(input) -(length-1);
   if(length < 1) return s;
   s.substring = calloc(len, sizeof(char *));
   for(unsigned int i = 0; i < len; i++){
      s.substring[i] = calloc(length, sizeof(char));
      strncpy(s.substring[i], input++, length);
      s.substring_count++;
   } 
   return s;
}
