#include "series.h"
#include <stdexcept>

namespace series{

std::vector<int> digits(std::string input){
   std::vector<int> output;
   for(char &c : input){
      output.push_back((int)(c - '0'));
   }
   return output;
}

std::vector<std::vector<int>> slice(std::string input, int nbr){
   std::vector<int> numbers = digits(input);
   if(nbr > (int)numbers.size()) throw std::domain_error("Invalid");
   std::vector<std::vector<int>> output;
   for(int i = 0; i < (int)numbers.size() + 1 - nbr; i++){
      std::vector<int> current;
      for(int j = 0; j < nbr; j++){
         current.push_back(numbers[i+j]);
      }
      output.push_back(current);
   }
   return output;   
}

}
