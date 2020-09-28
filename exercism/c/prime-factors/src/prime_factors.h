#ifndef PRIME_FACTORS_H
#define PRIME_FACTORS_H

#include <stdlib.h>
#include <stdint.h>

#define MAXFACTORS 20

size_t find_factors(uint64_t nbr, uint64_t buf[]);

#endif
