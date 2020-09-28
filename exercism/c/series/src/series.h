#ifndef SERIES_H
#define SERIES_H

#include <stdint.h>

typedef struct{
   unsigned int substring_count;
   char **substring;
}series_results_t;

series_results_t series(char *input, unsigned int length); 

#endif
