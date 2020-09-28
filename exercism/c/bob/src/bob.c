#include "bob.h"
#include <string.h>
#include <stdio.h>

char * hey_bob(char * text){

   int len = strlen(text);
   int caps = -1;
   int letters = 0;
   for(int i = 0; i<len; i++){
      if(text[i] >= 97 && text[i] <= 122){
         caps = 0;
      }
      if(text[i] >= 65 && text[i] <= 90 && caps == -1){
         caps = 1;
      }
      if((text[i] >= 97 && text[i] <= 122) || (text[i] >= 65 && text[i] <= 90) || (text[i] >= 48 && text[i] <= 57)){
         letters = 1;
      }     
   }

   int question = 0;
   int n = 1;
   if(letters){
      while(text[len-n] == ' ') n++;
   }
   if(text[len-n] == 63) question = 1;
   if(caps < 0) caps = 0;

   if(caps && question) return "Calm down, I know what I'm doing!";
   if(caps) return "Whoa, chill out!";
   if(question) return "Sure.";
   if(!letters) return "Fine. Be that way!";
   return "Whatever.";

}
