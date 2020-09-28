#include "palindrome_products.h"
#include <stdlib.h>
#include <stdio.h>

product_t *get_palindrome_product(int start, int end){
   start = start;
   end = end;
   //product_t *t = malloc(sizeof(product)*);
   product_t *res = calloc(1, sizeof(*res));
   res->smallest = 999;
   res->largest = 0;
   
   int len = end - start + 1;
   int nbrs[len];
   for(int i = 0; i < len; i++){
      nbrs[i] = start + i;
      //printf("nbrs %d\n", nbrs[i]);
   }
   //int prods[len*len];
   //int index = 0;

   printf("len %d\n", len);
   printf("nbrs[8] %d\n", nbrs[8]);
   for(int i = 0; i < len; i++){
      for(int j = 0; j < len; j++){
         //prods[index] = nbrs[i] * nbrs[j];    
         printf("i j %d %d\n", i, j);
         printf("nbrs[i] nbrs[j] %d %d\n", nbrs[i], nbrs[j]);
         printf("res %d\n", res->smallest);
         printf("is_palindrome %d\n", is_palindrome(nbrs[i]*nbrs[j]));
         //printf("comp %d\n", /*is_palindrome(nbrs[i]*nbrs[j]) &&*/ res->smallest > nbrs[i] * nbrs[j]);
         //if(is_palindrome(nbrs[i]*nbrs[j]) && res->smallest > nbrs[i] * nbrs[j]){
         //if(true){
         printf("test1\n");
         res->smallest = nbrs[i] * nbrs[j]; 
         res->factors_sm->factor_a = nbrs[i];
         //res->factors_sm->factor_b = nbrs[j];
         //}
         printf("between\n");
         /*if(is_palindrome(nbrs[i]*nbrs[j]) && res->largest < nbrs[i] * nbrs[j]){
            printf("test2");
            res->largest = nbrs[i] * nbrs[j];
            res->factors_lg->factor_a = nbrs[i];
            res->factors_lg->factor_b = nbrs[j];
         }
         */
         printf("after\n");
         
         //printf("prod %d\n", prods[index]);
         //index++;
      }
   }
   printf("small large %d %d\n", res->smallest, res->largest);
   is_palindrome(1);
//   prods[0] = prods[0];
/*
   bool small = false;
   bool big = false;
   for(int i = 0; i < len*len; i++){
      if(!small && is_palindrome(prods[i])){
         res->smallest = prods[i];
         
         small = 1;
      }
      if(!big && is_palindrome(prods[len-i])){
         res->largest = prods[len-i];
         big = 1;
      }
      if(big && small) break;
   }  
*/   
   return res;
}
bool is_palindrome(int nbr){
   nbr = nbr;
   return true;
}


void free_product(product_t *p){
   free(p);   
}
