#include "scrabble_score.h"

#include <vector>
#include <map>
#include <iostream>
#include <algorithm>

namespace scrabble_score{

const std::map<int, std::vector<char>> points = {
{1, {'A', 'E', 'I', 'O', 'U', 'L', 'N', 'R', 'S', 'T'}},
{2, {'D', 'G'}},
{3, {'B', 'C', 'M', 'P'}},
{4, {'F', 'H', 'V', 'W', 'Y'}},
{5, {'K'}},
{8, {'J', 'X'}},
{10, {'Q', 'Z'}},
};


int score(std::string text){
   int sum = 0;
   for(char &c : text){
      for(auto &&key : points){
         std::vector<char> letters = key.second;
         auto found = std::find(letters.begin(), letters.end(), toupper(c));
         if(found != letters.end()){
            sum += key.first;
            break;
         }
      }
   }
   return sum;
}

}
