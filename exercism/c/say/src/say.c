#include "say.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int say(int64_t nbr, char **ans){
   
   *ans = malloc(sizeof(char)* (MAXLEN + 1)); 
   if(nbr == 0){
      sprintf(*ans, "%s", "zero");
      return 0;
   }

   if(nbr < 0 || nbr >999999999999) return -1;
   int64_t value = 1;
   int digits = 0;
   while(nbr >= value){
      digits++;
      value *= 10;
   }

   ans = ans;
   return 0;
}
