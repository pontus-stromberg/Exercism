#ifndef RATIONAL_NUMBERS_H
#define RATIONAL_NUMBERS_H

#include <stdint.h>

typedef struct{
   int8_t numerator;
   int8_t denominator;
}rational_t;

rational_t add(rational_t r1, rational_t r2);
   
rational_t subtract(rational_t r1, rational_t r2);

rational_t multiply(rational_t r1, rational_t r2);

rational_t divide(rational_t r1, rational_t r2);

rational_t absolute(rational_t r);

rational_t exp_rational(rational_t r, int8_t n);

rational_t reduce(rational_t r);

float exp_real(float x, rational_t r);

int8_t gcd(int8_t d1, int8_t d2);

#endif
