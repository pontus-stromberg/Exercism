#include "hamming.h"
#include <stdexcept>
//#include <string>

namespace hamming{

   int compute(std::string a, std::string b){
      if(a.length() != b.length()) throw std::domain_error("different lengths");
      int count = 0;
      for(int i = 0; i < (int)a.length(); i++){
         if(a[i] != b[i]) count++;
      }
      return count;
   }

}

