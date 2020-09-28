#include "hexadecimal.h"
#include <iostream>
#include <cmath>
namespace hexadecimal{

int convert(std::string input){
   int sum = 0;
   for(int i = 0; i < (int)input.length(); i++){
      if(!isdigit(input[i]) && (input[i] < 97 || input[i] > 102)) return 0;
      int base = pow(16, input.length() - i - 1);
      if(isdigit(input[i])){
         sum += ((input[i] - '0') * base);
      }
      else{
         sum += ((input[i] - 97 + 10) * base);
      }   
   }
   return sum;
}

}
