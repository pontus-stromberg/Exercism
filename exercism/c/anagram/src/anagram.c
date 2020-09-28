#include "anagram.h"
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

char *lower(char *s){
   for(int a = 0; a < (int)strlen(s); a++){
      s[a] = tolower(s[a]);
   } 
   return s;
}  

void anagrams_for(const char *word, struct candidates *c){
   for(int i = 0; i < (int)c->count; i++){
      printf("%s\n", c->candidate[i].word);
      bool used_c[MAX_STR_LEN] = {false};
      if(strlen(word) != strlen(c->candidate[i].word)){
         c->candidate[i].is_anagram = NOT_ANAGRAM;
      //}else if(strcmp((tolower(word), tolower(c->candidate[i].word)) == 0)){
      }else if(strcmp(lower(word), lower(c->candidate[i].word))){
         c->candidate[i].is_anagram = NOT_ANAGRAM;
      }else{
         //bool used_c[MAX_STR_LEN] = {false};
         for(int n = 0; n < (int)strlen(word); n++){
            bool used_w[MAX_STR_LEN] = {false};
            bool letter = false;
            c->candidate[i].is_anagram = IS_ANAGRAM;
            for(int j = 0; j < (int)strlen(word); j++){
//               printf("i1 j1 bool %d %d %d\n", i, j, letter);
               if(tolower(c->candidate[i].word[j]) == tolower(word[n]) && used_c[j] != true && used_w[n] != true){
                  letter = true;
                  used_c[j] = true;
                  used_w[n] = true;
//                  printf("j %d\n", j);
               }
            }
            if(!letter){
               c->candidate[i].is_anagram = NOT_ANAGRAM;
               printf("not anagram\n");
               break;
            }
//            }else{
//            c->candidate[i].is_anagram = IS_ANAGRAM;
//            printf("anagram\n");
         }
      }
   }  
 
}
