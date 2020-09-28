#ifndef ANAGRAM_H
#define ANAGRAM_H

#include <stdlib.h>
#include <string.h>

#define MAX_STR_LEN 20
#define MAX_CANDIDATES 20


enum anagram_status {UNCHECKED = -1, NOT_ANAGRAM, IS_ANAGRAM};

//typedef struct{
struct candidate{
   const char *word;
//   char *word;
   enum anagram_status is_anagram;
   //enum anagram_status status{UNCHECKED = 0, IS_ANAGRAM = 1, NOT_ANAGRAM = 2};
};
//}candidate;

//typedef struct{
struct candidates{
   size_t count;
   struct candidate *candidate;
};
//}candidates;

void anagrams_for(const char *word, struct candidates *c);

char *lower(char *s1);

#endif
