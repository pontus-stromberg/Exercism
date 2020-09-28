#include "matching_brackets.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int match(char left, char right){
   if((left == '(' && right == ')') || (left == '[' && right == ']') || (left == '{' && right == '}')) return MATCH;
   if(right == ')' || right == ']' || right == '}') return NOT_MATCH;
   return CONTINUE;
}

bool is_paired(const char *input){
   
   size_t len = strlen(input);
   char lefts[MAX_LEFTS];
   int index_left = 0;
   for(size_t i = 0; i < len; i++){
      if(input[i] == '(' || input[i] == '[' || input[i] == '{'){
         lefts[index_left] = input[i];
         index_left++;
      }else if(index_left-1 >= 0){
         if(match(lefts[index_left-1], input[i]) == MATCH){
            index_left --;
         }else if(match(lefts[index_left-1], input[i]) == NOT_MATCH){
            return false;
         }
      }
   }
   return index_left == 0;
}
