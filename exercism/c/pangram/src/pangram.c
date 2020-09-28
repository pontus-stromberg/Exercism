#include "pangram.h"
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

bool is_pangram(const char *sentence){

   bool ret = true;
   if(sentence == NULL) return false;
   if(sentence[0] == '\0') return false;

   int n = 0;
   bool letters[26] = {false};
   int index = 0;

   while(sentence[n] != '\0'){      
      index = tolower(sentence[n]) - 97;   
      letters[index] = true;
      n++;
   }

   for(int i = 0; i < 26; i++){
      if(letters[i] == false) return false;
   }

   return ret;

}
