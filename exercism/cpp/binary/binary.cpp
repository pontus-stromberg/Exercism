#include "binary.h"
#include <iostream>

namespace binary{

int convert(std::string input){

   int sum = 0;
   for(int i = input.length()-1; i >= 0; i--){
      if(input[i] == '1'){
         sum += 1 << (input.length() - 1 - i);
      }else if(input[i] != '0') return 0;
   }
   return sum;
}

}

