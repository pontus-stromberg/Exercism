#include "complex_numbers.h"
#include <math.h>

complex_t c_mul(complex_t a, complex_t b){
   complex_t ret;
   ret.real = (a.real*b.real - a.imag*b.imag);
   ret.imag = (a.imag*b.real + a.real*b.imag);
   return ret;
}

complex_t c_add(complex_t a, complex_t b){
   complex_t ret;
   ret.real = a.real + b.real;
   ret.imag = a.imag + b.imag;
   return ret;
}

complex_t c_sub(complex_t a, complex_t b){
   complex_t ret;
   ret.real = a.real - b.real;
   ret.imag = a.imag - b.imag;
   return ret;
}

complex_t c_div(complex_t a, complex_t b){
   complex_t ret;
   ret.real = (a.real*b.real + a.imag*b.imag)/(pow(b.real, 2) + pow(b.imag,2));
   ret.imag = (a.imag*b.real - a.real*b.imag)/(pow(b.real, 2) + pow(b.imag,2));
   return ret;
}

double c_abs(complex_t a){
   double abs = sqrt(pow(a.real,2) + pow(a.imag,2));
   return abs;
}

complex_t c_conjugate(complex_t a){
   a.imag *= -1;
   return a;
}

double c_real(complex_t a){
   return a.real;
}

double c_imag(complex_t a){
   return a.imag;
}

complex_t c_exp(complex_t a){
   a.real = exp(a.real)*cos(a.imag);
   a.imag = exp(a.real)*sin(a.imag);
   return a;
}
