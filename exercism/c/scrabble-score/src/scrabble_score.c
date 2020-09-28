#include "scrabble_score.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

static const struct {
    const char *letters;
    unsigned score;
} values[] = {
    { "aeioulnrst", 1 },
    { "dg", 2 },
    { "bcmp", 3 },
    { "fhvwy", 4 },
    { "k", 5 },
    { "jx", 8 },
    { "qz", 10 },
};

int score(char *word){
   int points = 0;
   for(size_t i = 0; i < strlen(word); i++){
      for(size_t j = 0; j < sizeof(values)/sizeof(values[0]); j++){
         if(strchr(values[j].letters, tolower(word[i]))){
            points += values[j].score;
         }
      }
   }
   return points;
}
