#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <stdbool.h>

typedef double triangle_t[3];

bool is_zero(triangle_t t);

bool is_triangle(triangle_t t);

bool is_equilateral(triangle_t t);

bool is_isosceles(triangle_t t);

bool is_scalene(triangle_t t);

#endif
