#include "binary_search.h"
#include <stdio.h>
#include <math.h>
int *binary_search(int find, int *arr, size_t length){
  
   if(length == 0) return NULL; 
   int len = (int)length -1;
   int pos = (int)floor(len/2);
   if(arr[pos] == find) return &arr[pos];
   float diff;
   while(len != pos){
      diff = len - pos;
      if(find < arr[pos]){
         len = pos;
         pos = (int)floor(len/2);
      }else if(find > arr[pos]){
         pos = pos + (int)ceil(diff/2);
      }   
      if(arr[pos] == find) return &arr[pos];
   }
   return NULL;
}
