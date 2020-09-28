#include "all_your_base.h"
#include <cmath>
#include <iostream>
#include <algorithm>
#include <stdexcept>

namespace all_your_base{

std::vector<unsigned int> convert(unsigned int old_base, std::vector<unsigned int> values, unsigned int new_base){

   if(old_base < 2 || new_base < 2) throw std::invalid_argument("Invalid argument");
   new_base = new_base;
   int value = 0;
   for(size_t i = 0; i < values.size(); i++){
      if(values[i] >= old_base) throw std::invalid_argument("Invalid argument");
      value += values[i]*pow(old_base, values.size() - i - 1);
   }
   std::vector<unsigned int> output;
   while(value > 0){
      output.push_back(value%new_base);
      value /= new_base;
   }
   std::reverse(output.begin(), output.end());
   return output;
   
}
}
