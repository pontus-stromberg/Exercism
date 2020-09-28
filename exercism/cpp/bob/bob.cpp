#include "bob.h"
#include <algorithm>
#include <iostream>

namespace bob{

std::string hey(std::string input){

   std::string filtered = "";
   int caps = 0;
   int upper = 0;
   int lower = 0;
   for(char &c : input){
      if(isalpha(c) || c == '?' || isdigit(c)){
         if(isupper(c)) upper = 1;
         if(islower(c)) lower = 1;
         filtered.push_back(c);
      }
   }
   
   int question = 0;
   if(filtered.length() == 0) return "Fine. Be that way!";
   if(filtered[filtered.length()-1] == '?') question = 1;
   if(upper && !lower) caps = 1;
   if(caps && question) return "Calm down, I know what I'm doing!";
   if(caps) return "Whoa, chill out!";
   if(question) return "Sure.";
   return "Whatever.";
}

}
