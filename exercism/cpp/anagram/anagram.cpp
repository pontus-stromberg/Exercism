#include "anagram.h"
#include <algorithm>

namespace anagram{

anagram::anagram(std::string input){
   word = anagram::lower_case(input);
   word_sorted = word;
   std::sort(word_sorted.begin(), word_sorted.end());
}

std::vector<std::string> anagram::matches(std::vector<std::string> words){
   std::vector<std::string> output;
   for(std::string s : words){
      std::string s_lower = lower_case(s);
      std::string sorted = s_lower;
      std::sort(sorted.begin(), sorted.end());
      if(s_lower.compare(word) != 0 && !exists(output, s)){
         if(sorted.compare(word_sorted) == 0){
            output.push_back(s);
         }
      }
   }
   return output;
}

std::string anagram::lower_case(std::string s){
   std::string ret;
   for(char &c : s){
      ret.push_back(tolower(c));
   }
   return ret;
}

bool anagram::exists(std::vector<std::string> anagrams, std::string new_word){
   for(std::string s : anagrams){
      if(lower_case(s).compare(lower_case(new_word)) == 0) return true;
   }
   return false;
}

}
