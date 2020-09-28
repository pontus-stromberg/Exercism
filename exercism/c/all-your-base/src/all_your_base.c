#include "all_your_base.h"
#include <math.h>
#include <stdio.h>

size_t rebase(int8_t *digits, int16_t input_base, int16_t output_base, 
   size_t input_length){
   if(input_base <= 1 || output_base <= 1 || digits[0] == 0){
      digits[0] = 0;
      return 0;
   }
   int value = 0;
   for(int i = input_length - 1; i >= 0; i--){
      if(digits[input_length-1-i] < 0 || digits[input_length-1-i] >= input_base){
         digits[0] = 0;
         return 0;
      }
      value += digits[input_length - 1 - i]*pow(input_base, i);
   }
   
   int nbr = 1;
   int output_len = 0;
   do{
      nbr *= output_base;
      output_len++;
   }while(nbr < value);
   
   for(int i = output_len - 1; i >= 0; i--){
      digits[output_len - 1 - i] = value/pow(output_base, i);
      value = value%(int)pow(output_base, i);
   }
   
   return output_len;
}
