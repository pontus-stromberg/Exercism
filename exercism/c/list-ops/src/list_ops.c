#include "list_ops.h"
#include <stdio.h>

list_t *new_list(size_t len, list_value_t *data){
   list_t *list = malloc(sizeof(list_t)*len);
   list->length = len;
   for(int i = 0; i < (int)len; i++){
      list->values[i] = data[i];
   }
   return list;
}

list_t *append_list(list_t *list1, list_t *list2){
   list_t *list_ret = malloc(sizeof(list_t)*(list1->length + list2->length));
   for(int i = 0; i < (int)list1->length; i++){
      list_ret->values[i] = list1->values[i];
   }
   for(int i = 0; i < (int)list2->length; i++){
      list_ret->values[list1->length + i] = list2->values[i];
   }
   list_ret->length = list1->length + list2->length;
   return list_ret;
}

list_value_t foldl_list(list_t *list, list_value_t initial, list_value_t(*foldl)(list_value_t value, list_value_t initial)){
   if(list->length == 0) return initial; 
   list_value_t curr = initial;
   for(int i = 0; i < (int)list->length; i++){
      curr = foldl(list->values[i], curr);
   }
   return curr;
}

list_value_t foldr_list(list_t *list, list_value_t initial, list_value_t(*foldr)(list_value_t value, list_value_t initial)){
   if(list->length == 0) return initial;
   list_value_t curr = initial;
   for(int i = list->length -1; i >= 0; i--){
      curr = foldr(list->values[i], curr);
   }
   return curr;
}

list_t *reverse_list(list_t *list){
   
   list_t *ret_list = malloc(sizeof(list_t) * list->length);
   ret_list->length = list->length;
   for(int i = 0; i < (int)list->length; i++){
      ret_list->values[list->length -1 -i] = list->values[i];
   }
   return ret_list;
}

void delete_list(list_t *list){
   free(list);
}

list_t *filter_list(list_t *list, bool (*filter)(list_value_t value)){
   list_t *list_ret = malloc(sizeof(list_t)*list->length);
   list_ret->length = 0;
   for(int8_t i = 0; i < (int8_t)list->length; i++){
      if(filter(list->values[i])){
         list_ret->values[list_ret->length] = list->values[i];
         list_ret->length++; 
      }
   }
   return list_ret;
}

size_t length_list(list_t *list){
   return list->length;
}

list_t *map_list(list_t *list, list_value_t(*map)(list_value_t value)){
   list_t *list_ret = malloc(sizeof(list_t)*list->length);
   list_ret->length = 0;
   for(int i = 0; i < (int)list->length; i++){
      list_ret->values[i] = map(list->values[i]);
      list_ret->length++;
   }
   return list_ret;
}
