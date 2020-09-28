#include "rational_numbers.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int8_t gcd(int8_t d1, int8_t d2){
   int8_t den = 2;
   while(den%d1 != 0 || den%d2 != 0){
      den++;
   }
   return den;
}

rational_t add(rational_t r1, rational_t r2){

   int8_t den = gcd(r1.denominator, r2.denominator);
   rational_t ret;
   ret.denominator = den;
   ret.numerator = r1.numerator * (den/r1.denominator) + r2.numerator * (den/r2.denominator);
   ret = reduce(ret);
   return ret;
   
}

rational_t subtract(rational_t r1, rational_t r2){
   int8_t den = gcd(r1.denominator, r2.denominator);
   rational_t ret;
   ret.denominator = den;
   ret.numerator = r1.numerator * (den/r1.denominator) - r2.numerator * (den/r2.denominator);
   ret = reduce(ret);
   return ret;

}

rational_t multiply(rational_t r1, rational_t r2){
   rational_t ret;
   ret.denominator = gcd(r1.denominator, r2.denominator);
   ret.numerator = r1.numerator * r2.numerator;
   ret = reduce(ret);
   return ret;
}

rational_t divide(rational_t r1, rational_t r2){
   rational_t ret;
   if(r1.denominator != 0 && r2.numerator != 0){
      ret.numerator = r1.numerator*r2.denominator;
      ret.denominator  =r1.denominator*r2.numerator;   
   }
   ret = reduce(ret);
   return ret;
}

rational_t absolute(rational_t r){
   r.numerator = abs(r.numerator);
   r.denominator = abs(r.denominator);
   return r;
}

rational_t exp_rational(rational_t r, int8_t n){
   r.numerator = pow(r.numerator, n);
   r.denominator = pow(r.denominator, n);
   r = reduce(r);
   return r;
}

rational_t reduce(rational_t r){
   if(r.numerator == 0){
      r.denominator = 1;
   }else if(abs(r.numerator) > abs(r.denominator)){
      for(int i = abs(r.denominator); i >= 2; i--){
         if(r.numerator%i == 0 && r.denominator%i == 0){
            r.numerator/=i;
            r.denominator/=i;
            break;
         }
      }
   }else{
      for(int i = abs(r.numerator); i >= 2; i--){
         if(r.numerator%i == 0 && r.denominator%i == 0){
            r.numerator/=i;
            r.denominator/=i;
            break;
         }
      }
   }
   if(r.denominator < 0){
      r.numerator *= -1;
      r.denominator *= -1;
   }
   return r;
}

float exp_real(float x, rational_t r){
   float n = (float)r.numerator/(float)r.denominator;
   float ret = pow(x, n);
   return ret;
} 
