#include "pascals_triangle.h"
#include <stdlib.h>
#include <stdio.h>

size_t **create_triangle(int rows){
   if(rows < 0) return NULL;
   size_t **t;
   t = malloc(sizeof(int)*rows);
   t[0] = malloc(sizeof(int)*rows);
   for(int i = 1; i < rows; i++){
      t[i] = malloc(sizeof(int)*rows);
   }
   for(int i = 0; i < rows; i++){
      for(int j = 0; j < rows; j++){
         if(j == 0){
            t[i][j] = 1;
         }else if(i == 0){
            t[i][j] = 0;
         }else{
            t[i][j] = t[i-1][j-1] + t[i-1][j];
         }
      }   
   }
   return t;
}

void free_triangle(size_t **t, int rows){ 
   for(int i = 0; i < rows; i++){
      free(t[i]);
   }
   free(t);
}
