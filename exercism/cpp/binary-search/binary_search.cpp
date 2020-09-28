#include "binary_search.h"
#include <iostream>
#include <stdexcept>

namespace binary_search{

std::size_t find(std::vector<int> list, int nbr){
   
   size_t index = list.size()/2;
   size_t big = list.size();
   size_t small = 0;
   if(big == 0) throw std::domain_error("Invalid input");
   do{
      if(list[index] > nbr){
         big = index;
         index = small + (index-small)/2;
      }else if(list[index] < nbr){
         small = index;
         index = index + (big-index)/2;
      } 
      if(list[index] == nbr) return index;
   }while(index != small && index != big);
   throw std::domain_error("Value not found");
}

}
