#include "binary.h"
#include <string.h>
#include <stdio.h>

int convert(char *binary){
   int ret = 0;
   int index = 1;
   for(int i = (int)strlen(binary) - 1; i >= 0; i--){
      if(binary[i] < '0' || binary[i] > '1') return INVALID;
      if(binary[i] == '1') ret += index; //ret += (binary[i] - 48)*index;
      index = index << 1;
   }
   return ret;
}
