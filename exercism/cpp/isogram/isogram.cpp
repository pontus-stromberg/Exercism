#include "isogram.h"
#include <iostream>
#include <algorithm>
#include <cctype>
//using namespace std;

namespace isogram{

bool is_isogram(std::string word){

   for(char &c : word){
      c = ::tolower(c);
   }
   
   for(char &c : word){
      if(std::count(word.begin(), word.end(), c) > 1 && isalpha(c)) return false;
   }
   return true;

}

}
