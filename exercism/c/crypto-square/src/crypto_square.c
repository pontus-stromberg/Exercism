#include "crypto_square.h"
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

char *ciphertext(const char *input){
   char *ret = malloc(sizeof(char) * MAX_LEN);
   int len = (int)strlen(input);

   int index = 0;
   for(int i = 0; i < len; i++){
      if(isalpha(input[i]) || isdigit(input[i])){
         ret[index] = tolower(input[i]);
         index++;
      }
   }
   printf("stirng %s\n", ret);
   printf("index %d\n", index);
   double root = sqrt(index);
   int cols = (root - (int)root == 0) ? root : root + 1;
   int rows = round(root);
   printf("rows cols %d %d\n", rows, cols);

   //if(root-rows >0) cols++; 
   char matrix[rows][cols];
   for(int i = 0; i < index; i++){
      //matrix[i%cols][i/cols] = ret[i];
      printf("rw col %d %d char %c\n", i%rows, i/rows, ret[i]);
      matrix[i%rows][i/rows] = ret[i];
   }
   printf("matrix[0] %s\n", matrix[0]);
   printf("matrix[1] %s\n", matrix[1]);
   int letters = index;
   index = 0;
   //printf("rows cols %d %d \n", rows, cols);
   printf("len loop %d\n", rows*cols + (rows-1));
   for(int i = 0; i < rows*cols + (rows-1); i++){
      //printf("index letters %d %d\n", index, letters);
      if(index >= letters || ((i-cols)%(cols+1) == 0 && i != 0)){
         ret[i] = ' ';
         len++;
      }else{
         printf("add %d %d char %c i %d\n", index/cols, index%cols, matrix[index/cols][index%cols], i);
         ret[i] = matrix[index/cols][index%cols];
         index++;
      }
   }
   printf("final ret %s\n", ret);
   /*
   for(int r = 0; r < rows; r++){
      for(int c = 0; c < cols; c++){
         ret[
      }
   }
   */
   return ret;
}
