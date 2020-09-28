#include "secret_handshake.h"
#include <stdbool.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

char const *response[4] = {"wink", "double blink", "close your eyes", "jump"};

const char **commands(int command){
  
   bool reverse = false;
   if(command/16 == 1){
      reverse = true;
      command -= 16;
   }
      
   char const **ret = malloc(sizeof(char *)*4);
   int count = 0;
   for(int i = 4; i >= 0; i--){
      if(command/(1<<i) == 1){
         ret[count] = malloc(sizeof(char)*MAX_LEN);
         ret[count] = response[i];
         command -= 1<<i;
         count++;
      }
   }
  
   if(!reverse && count > 1){
      char const *helper = malloc(sizeof(char)*MAX_LEN);
      for(int i = 0; i < count; i++){
         if(i >= count-1-i) break;
         helper = ret[i];
         ret[i] = ret[count-1-i];
         ret[count-1-i] = helper;
      }
   }

   return ret;
}
