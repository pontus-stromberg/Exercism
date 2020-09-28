#include "nucleotide_count.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

char * count(const char * dna_str){

   int len = strlen(dna_str);
   int counter[4] = {0};
   char * ret_str = malloc(19);
   for(int i = 0; i<len; i++){
      switch(dna_str[i]){
         case 'A':
            counter[0]++;
            break;
         case 'C':
            counter[1]++;
            break;
         case 'G':
            counter[2]++;
            break;
         case 'T':
            counter[3]++;
            break;
         default:
            return ret_str;
      }
   }

   snprintf(ret_str, 22, "A:%d C:%d G:%d T:%d", counter[0], counter[1], counter[2], counter[3]);

   return ret_str;
}
