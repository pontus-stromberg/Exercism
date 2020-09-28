#include "atbash_cipher.h"
#include <iostream>
namespace atbash_cipher{

std::string encode(std::string input){
   std::string output;
   int counter = 0;
   for(char &c : input){
      if(isalpha(c)){
         if(counter % 5 == 0 && counter > 0) output += ' ';
         output += 96*2 + 27 - tolower(c);
         counter++;
      }else if(isdigit(c)){
         if(counter % 5 == 0 && counter > 0) output += ' ';
         output += c;
         counter++;
      }
   }
   return output;
}

std::string decode(std::string input){
   std::string output;
   for(char &c : input){
      if(isdigit(c)) output += c;
      else if(isalpha(c)) output += 96*2 + 27 - tolower(c);
   }
   return output;
}

}
