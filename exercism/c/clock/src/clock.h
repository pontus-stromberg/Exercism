#ifndef CLOCK_H
#define CLOCK_H

#include <stdbool.h>


typedef struct{
   char text[6];
}clock_t;

clock_t get_time(signed int hour, signed int minute);

clock_t clock_create(signed int hour, signed int minute);

clock_t clock_add(clock_t clock, int minute);

clock_t clock_subtract(clock_t clock, int minutes);

bool clock_is_equal(clock_t a, clock_t b);

#endif
