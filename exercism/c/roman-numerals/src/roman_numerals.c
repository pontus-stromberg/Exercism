#include "roman_numerals.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

static const char *digits[][4] = {
    {"I",    "X",    "C",    "M"  },
    {"II",   "XX",   "CC",   "MM" },
    {"III",  "XXX",  "CCC",  "MMM"},
    {"IV",   "XL",   "CD",   "-"  },
    {"V",    "L",    "D",    "-"  },
    {"VI",   "LX",   "DC",   "-"  },
    {"VII",  "LXX",  "DCC",  "-"  },
    {"VIII", "LXXX", "DCCC", "-"  },
    {"IX",   "XC",   "CM",   "-"  },
};

char * to_roman_numeral(int number){
   
   char *ret = (char *)calloc(MAX_ROMAN_LEN, 512);
   int nbr;
   int index = 0;
   int arr_nbr = 3;
   for(int i = 1000; i >= 1; i/=10){
      nbr = number/i;
      number %= i;
      if(nbr > 0 && strcmp(digits[nbr-1][arr_nbr], "-") != 0){
         for(int n = 0; n < (int)strlen(digits[nbr-1][arr_nbr]); n++){
            ret[index] = digits[nbr-1][arr_nbr][n];
            index++;
         }
      }
      arr_nbr--;
   }
   return ret;   
}
