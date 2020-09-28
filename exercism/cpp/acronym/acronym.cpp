#include "acronym.h"

#include <vector>
#include <algorithm>

namespace acronym{

std::string acronym(std::string input){
   std::string output;
   output.push_back(input[0]);
   for(int i = 1; i < (int)input.length(); i++){
      if(input[i] == ' ' || input[i] == '-'){
         i++;
         output.push_back(toupper(input[i]));
      }
   }

   return output;
}

}
