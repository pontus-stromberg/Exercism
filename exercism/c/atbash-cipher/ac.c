#include "atbash_cipher.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

const int code[26] = {25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

char *atbash_encode(char *input){
   int i = 0;
   char x;
   int diff;
   char letter;
   char *ret = malloc(sizeof(char)*50);
   int index = 0;
   while(input[i] != '\0'){
      letter = tolower(input[i]);
      if(letter >= 97 && letter <= 122){
         if((index+1)%6 == 0 && index != 0){
            ret[index] = ' ';
            index++;
         }
         x = code[(int)letter-97];
         diff = x-(letter-97);
         ret[index] = letter + diff;
         index++;
      }else if(letter >= 48 && letter <= 57){
         ret[index] = letter;
         index++;
      }
      i++;
   }
   ret[index] = '\0';
   return ret;
}

char *atbash_decode(char *input){
   
   return input;   
}
