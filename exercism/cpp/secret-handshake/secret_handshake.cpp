#include "secret_handshake.h"
#include <iostream>
#include <algorithm> 

namespace secret_handshake{

std::string list[4] = {"wink", "double blink", "close your eyes", "jump"};

std::vector<std::string> commands(int input){
   std::vector<std::string> output;
   bool reverse = false;
   if(input/16 == 1){
      reverse = true;
      input -= 16;
   }
   for(int i = 3; i >= 0; i--){
      int nbr = 1 << i;
      if(input/nbr == 1){
         output.push_back(list[i]);
         input -= nbr;
      }
   }
   if(!reverse) std::reverse(output.begin(), output.end());
      
   return output;
}

}
