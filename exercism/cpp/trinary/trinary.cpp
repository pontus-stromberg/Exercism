#include "trinary.h"
#include <cmath>

namespace trinary{

int to_decimal(std::string input){
   int sum = 0;
   int index = input.length() - 1;
   for(char &c : input){
      if(!isdigit(c)) return 0;
      sum += (c - '0')*pow(3, index);
      index--;
   }
   return sum;
}

}
