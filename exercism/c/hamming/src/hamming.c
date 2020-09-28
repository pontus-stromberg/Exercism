#include "hamming.h"
#include <stdio.h>
#include <string.h>

int compute(char * str1, char * str2){

   if(str1 == NULL) return -1;
   if(str2 == NULL) return -1;
   if(strlen(str1) != strlen(str2)) return -1;

   int len = strlen(str1);
   int hamming = 0;

   for(int i=0; i<len; i++){
   
      if(str1[i]!=str2[i]) hamming++; 

   }

   return hamming;

}

