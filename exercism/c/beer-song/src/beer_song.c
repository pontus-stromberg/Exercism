#include "beer_song.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void verse(char *buffer, unsigned int verse_number){

   if(verse_number == 0){
      snprintf(buffer, 1024, "No more bottles of beer on the wall, no more bottles of beer.\nGo to the store and buy some more, 99 bottles of beer on the wall.\n");
   }else if(verse_number == 2){
      snprintf(buffer, 1024, "2 bottles of beer on the wall, 2 bottles of beer.\nTake one down and pass it around, 1 bottle of beer on the wall.\n");
   }else if(verse_number == 1){
      snprintf(buffer, 1024, "1 bottle of beer on the wall, 1 bottle of beer.\nTake it down and pass it around, no more bottles of beer on the wall.\n");
   }else{
      snprintf(buffer, 1024, "%d bottles of beer on the wall, %d bottles of beer.\nTake one down and pass it around, %d bottles of beer on the wall.\n", verse_number, verse_number, verse_number-1);
   }
}


void sing(char *buffer, unsigned int starting_verse_number, unsigned int ending_verse_number){

   char temp[1024] = "";
   strcpy(buffer, temp);
   for(int i=starting_verse_number; i>=(int)ending_verse_number; i--){
      verse(temp, i);
      strcat(buffer, temp);
      strcat(buffer, (i == (int)ending_verse_number) ? "\0" : "\n");
   }
}
