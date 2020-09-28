#ifndef COMPLEX_NUMBERS_H
#define COMPLEX_NUMBERS_H

typedef struct{
   double real;
   double imag;
}complex_t;

complex_t c_mul(complex_t a, complex_t b);

complex_t c_add(complex_t a, complex_t b);

complex_t c_sub(complex_t a, complex_t b);

complex_t c_div(complex_t a, complex_t b);

double c_abs(complex_t a);

complex_t c_conjugate(complex_t a);

double c_real(complex_t a);

double c_imag(complex_t a);

complex_t c_exp(complex_t a);



#endif
