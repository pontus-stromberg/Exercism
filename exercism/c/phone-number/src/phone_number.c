#include "phone_number.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

char *phone_number_clean(const char input[]){
   input = input;
   char *result = malloc(sizeof(char)*10);
   int index = 0;
   for(int i = 0; i < (int)strlen(input); i++){
      if(isdigit(input[i])){
         if(index != 0 || input[i] != '1'){
            result[index] = input[i];
            index++;
         }
      } 
   }
   if(index!=10 || result[3] < 50) strcpy(result, "0000000000");
   return result;
}
