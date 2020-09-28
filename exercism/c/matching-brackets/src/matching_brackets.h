#ifndef MATCHING_BRACKETS_H
#define MATCHING_BRACKETS_H

#include <stdbool.h>

#define MAX_LEFTS 10

enum Matching {CONTINUE, MATCH, NOT_MATCH};

int match(char left, char right);

bool is_paired(const char *input);

#endif
