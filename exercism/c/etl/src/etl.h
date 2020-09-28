#ifndef ETL_H
#define ETL_H

typedef struct{
   char value;
   int key;
} new_map;

typedef struct{
   int value;
   const char *keys;
} legacy_map;

int convert(legacy_map *input, int input_len, new_map **output);

#endif
