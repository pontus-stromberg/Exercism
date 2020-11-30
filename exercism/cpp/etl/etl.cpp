#include "etl.h"
#include <iostream>
#include <algorithm>

namespace etl{

std::map<char, int> transform(std::map<int, std::vector<char>> input){
   std::map<char, int> output;
   for(std::map<int, std::vector<char>>::iterator it = input.begin(); it != input.end(); ++it){
      for(int i = 0; i < (int)it->second.size(); i++){
         output[tolower(it->second[i])] = it->first;
      }
   }
   return output;
}

}

