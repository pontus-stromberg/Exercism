#include "pangram.h"
#include <iostream>

namespace pangram{

bool is_pangram(std::string input){

   bool *letters = new bool[26];
   int counter = 0;
   for(char &c : input){
      if(isalpha(c)){
         if(letters[tolower(c) - 97] == false){
            letters[tolower(c) - 97] = true;
            counter++;
         }
      }
   }

   return counter == 26;
}

}
