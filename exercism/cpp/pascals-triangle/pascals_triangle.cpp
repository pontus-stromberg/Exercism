#include "pascals_triangle.h"
#include <iostream>

namespace pascals_triangle{

std::vector<std::vector<int>> generate_rows(int rows){
   
   
   std::vector<std::vector<int>> pascal; 
   if(rows > 0) pascal.push_back({1});  
   for(int i = 1; i < rows; i++){
      std::vector<int> v = {1};
      for(int j = 1; j < i; j++){
         int nbr = pascal[i-1][j-1]+pascal[i-1][j];
         v.push_back(nbr);   
      }
      v.push_back(1);
      pascal.push_back(v);
   }
   return pascal;
}


}
