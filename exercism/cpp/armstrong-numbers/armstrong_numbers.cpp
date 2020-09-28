#include "armstrong_numbers.h"
#include <vector>
#include <iostream>
#include <cmath>

namespace armstrong_numbers{

bool is_armstrong_number(int input){
   int counter = 0;
   int nbr = input;
   std::vector<int> nbrs;
   while(nbr > 0){
      nbrs.push_back(nbr%10);
      nbr /= 10;
      counter++;
   }
   int sum = 0;
   for(int i = 0; i < (int)nbrs.size(); i++){
      sum += pow(nbrs[i], nbrs.size());
   }
   return sum == input;
}

}
