#ifndef PYTHAGOREAN_TRIPLET_H
#define PYTHAGOREAN_TRIPLET_H

#include <stdint.h>
#include <stdlib.h>

//typedef uint8_t triplet_t;

typedef struct{
   uint16_t a;
   uint16_t b;
   uint16_t c;
}triplet_t;

typedef struct{
   size_t count;
   triplet_t triplets[];
   //uint8_t triplets[];
}triplets_t;

triplets_t *triplets_with_sum(uint16_t sum);

void free_triplets(triplets_t *triplets);

#endif
