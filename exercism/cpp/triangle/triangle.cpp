#include "triangle.h"
#include <stdexcept>

namespace triangle{

   flavor kind(double a, double b, double c){
      if(!is_valid(a, b, c)) throw std::domain_error("Invalid");
      if(a == b && b == c) return equilateral;
      else if(a == b || b == c || a == c) return isosceles;
      return scalene;
   }

   bool is_valid(double a, double b, double c){
      if(a <= 0 || b <= 0 || c <= 0) return false;
      if(a >= b && a >= c && a > b + c) return false;
      if(b >= a && b >= c && b > a + c) return false;
      if(c >= a && c >= b && c > a + b) return false;
      return true;
   }

}
