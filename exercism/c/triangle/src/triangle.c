#include "triangle.h"

bool is_zero(triangle_t t){
   return (t[0] == 0 || t[1] == 0 || t[2] == 0);
}

bool is_triangle(triangle_t t){
   return (t[0] + t[1] < t[2] || t[0] + t[2] < t[1] || t[1] + t[2] < t[0]);
}

bool is_equilateral(triangle_t t){
   if(is_zero(t)) return false;
   bool ret = true;
   for(int i = 0; i < 2; i++){
      ret = ret && (t[i] == t[i+1]);
   }
   return ret;
}

bool is_isosceles(triangle_t t){
   if(is_zero(t)) return false;
   if(is_triangle(t)) return false;
   if(t[0] == t[1] || t[0] == t[2] || t[1] == t[2]) return true;
   return false;
}

bool is_scalene(triangle_t t){
   if(is_zero(t)) return false;
   if(is_triangle(t)) return false;
   if(t[0] != t[1] && t[0] != t[2] && t[1] && t[2]) return true;
   return false;
}
