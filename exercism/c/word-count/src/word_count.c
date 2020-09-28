#include "word_count.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int word_count(const char *input_text, word_count_word_t * words){

   const char * delimiters = " ,\n.:!&@$%^&";
   char *str = NULL;
   str  = malloc(sizeof(char)*(strlen(input_text)+1));
   strcpy(str, input_text);
   char *token = strtok(str, delimiters);   
   int new_word = 0;

   int i = 0;
   int nbr_words = 0;

   for(int n = 0; n < MAX_WORDS; n++){
      strcpy(words[n].text,"");
      words[n].count = 0;
   }

   int length = 0;
   while(token != NULL){
      
      length = strlen(token);

      if(token[0] == '\''){
         for(int x = 1; token[x]; x++){
            token[x-1] = token[x];
         }
         token[strlen(token)-2] = '\0';
      }

      for(int a = 0; a <length; a++){
         token[a] = tolower(token[a]);
      }

      if(strlen(token) > MAX_WORD_LENGTH) return EXCESSIVE_LENGTH_WORD;
      
      // see if token is same as any previous word
      for(int j = 0; j < MAX_WORDS; j++){
         new_word = strcmp(token, words[j].text);
         if(!new_word){
            words[j].count++;
            break;
         }
      }
      if(new_word){
         strcpy(words[nbr_words].text, token);
         words[nbr_words].count++;
         nbr_words++;
         if(nbr_words > MAX_WORDS) return EXCESSIVE_NUMBER_OF_WORDS;
      }

      token = strtok(NULL, delimiters);
      i++;
   }

   
   for(int k = 0; k < nbr_words; k++){
      printf("%s %d \n",words[k].text, words[k].count);

   }


   printf("%s\n", input_text);

   return nbr_words;


}

