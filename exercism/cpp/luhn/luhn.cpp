#include "luhn.h"
#include <iostream>

namespace luhn{

bool valid(std::string input){
   int counter = 0;
   int sum = 0;
   for(int i = input.length() - 1; i >= 0; i--){
      char c = input[i];
      if(!isdigit(c) && c != ' ') return false;
      if(isdigit(c)){
         if(counter%2 == 1){
            int nbr = (c - '0')*2;
            if(nbr > 9 ) nbr -= 9;
            sum += nbr;
         }else{
         sum += c - '0'; 
         }
         counter++;
      }
   }
   if(counter < 2) return false;
   return sum % 10 == 0;
}


}
