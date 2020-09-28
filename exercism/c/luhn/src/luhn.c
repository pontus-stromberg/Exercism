#include "luhn.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

bool luhn(char *nbr){
   int sum = 0;
   int count = 0;
   for(int i = (int)strlen(nbr) - 1; i >= 0; i--){
      if(isdigit(nbr[i])){
         if(count%2 != 0){
            int add = (nbr[i] - '0')*2;
            if(add > 9) add -= 9;
            sum += add;
         }else{
            sum += nbr[i] - '0';
         }
      count++;
      }else if(nbr[i] != ' ') return false;
   }
   if(count < 2) return false;
   return sum%10 == 0;

}
