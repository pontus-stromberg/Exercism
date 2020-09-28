#include "sublist.h"
#include <stdio.h>
#include <stdbool.h>

int compare(int *list_big, int *list_small, int count_big, int count_small){
   for(int i = 0; i < count_big; i++){
      if(list_small[0] == list_big[i]){
         if(count_small > count_big - i) return false;
         int counter = 0;
         for(int j = 0; j < count_small; j++){
            if(list_big[i + j] == list_small[j]){
               counter++;
               if(counter == count_small) return true;
            }else{
               counter = 0;
            }
         }
      }
   }
   return false;
}
int check_lists(int *list_comp, int *list_base, int count_comp, int count_base){
   if(count_comp == count_base){
      for(int i = 0; i < count_comp; i++){
         if(list_comp[i] != list_base[i]) return UNEQUAL;
      }
      return EQUAL;      
   }else if(count_comp > count_base){
      if(list_base == NULL) return SUPERLIST;
      if(compare(list_comp, list_base, count_comp, count_base)) return SUPERLIST;
   }else if(count_comp < count_base){
      if(list_comp == NULL) return SUBLIST;
      if(compare(list_base, list_comp, count_base, count_comp)) return SUBLIST;
   }
   return UNEQUAL;
}
