#include "etl.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int convert(legacy_map *input, int input_len, new_map **output){
   output = malloc(sizeof(new_map)*input_len);
   output[0] = malloc(sizeof(int)*input_len);
   output[0]->key = 1;
   int output_len = 0;
   printf("len %d\n", (int)strlen(input->keys));
   for(int i = 0; i < (int)strlen(input->keys); i++){
      printf("inside\n");
      output[i] = malloc(sizeof(int)*input_len);
      output[i]->value = input->value;
      output[i]->key = input->keys[i];
      output_len++;
      printf("output_len %d\n", output_len);
   }
   return output_len;
}
