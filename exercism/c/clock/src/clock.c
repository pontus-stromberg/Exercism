#include "clock.h"
#include <string.h>
#include <stdio.h>

clock_t get_time(signed int hour, signed int minute){
   while(minute > 59){
      minute -= 60;
      hour++;
   }
   while(minute < 0){
      minute += 60;
      hour--;
   }
   while(hour > 23) hour %= 24;
   while(hour < 0) hour += 24;
   clock_t ret;
   ret.text[0] = hour/10 + '0';
   ret.text[1] = hour%10 + '0';
   ret.text[2] = ':';
   ret.text[3] = minute/10 + '0';
   ret.text[4] = minute%10 + '0';
   ret.text[5] = '\0';
   return ret;
}

clock_t clock_create(signed int hour, signed int minute){
   clock_t clock = get_time(hour, minute);
   return clock;
}

clock_t clock_add(clock_t clock, int minute){
   int minutes = (clock.text[3] - 48)*10 + clock.text[4] - 48 + minute;
   int hour = (clock.text[0] - 48)*10 + clock.text[1] - 48;
   clock = get_time(hour, minutes);
   return clock;
}

clock_t clock_subtract(clock_t clock, int minute){
   int minutes = (clock.text[3] - 48)*10 + clock.text[4] - 48 - minute;
   int hour = (clock.text[0] - 48)*10 + clock.text[1] - 48;
   clock = get_time(hour, minutes);
   return clock;
}

bool clock_is_equal(clock_t a, clock_t b){
   return !strcmp(a.text, b.text);
}

