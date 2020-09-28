#include "anagram.h"

#include <algorithm>
#include <iostream>

namespace anagram{

anagram::anagram(std::string input){
   word = input;
   for(char &c : word) c = ::tolower(c);
}

std::vector<std::string> anagram::matches(std::vector<std::string> input){
   std::vector<std::string> output;
   std::string sorted_word  = word;
   //sort(sorted_word.begin(), sorted_word.end());
   
   for(std::string s : input){
      if(!comp_words(s, word)){
         if(!exists(output, s)) output.push_back(s);
      }
   }
   return output;
}

bool anagram::comp_words(std::string a, std::string b){
   
   if(a.length() != b.length()) return false;
   for(char &c : a) c = ::tolower(c);
   for(char &c : b) c = ::tolower(c);
   for(int i = 0; i < (int)a.length(); i++){
      if(::tolower(a[i]) != ::tolower(b[i])) return false;
   }

   sort(a.begin(), a.end());
   sort(b.begin(), b.end());
   return a.compare(b) == 0;

   /*
   //if(a.compare(b) == 0) return false;
   std::string a_s = a;
   //sort(a_s.begin(), a_s.end());
   std::string b_s = b;
   //sort(b_s.begin(), b_s.end());
   for(char &c : a_s) c = ::tolower(c);
   for(char &c : b_s) c = ::tolower(c);
   
   return (a_s.compare(b_s) == 0);
   */
}

std::string anagram::lower_case(std::string s){
   std::string ret = s;
   for(char &c : ret) c = ::tolower(c);
   return ret;
}

bool anagram::exists(std::vector<std::string> v, std::string s){
   if(v.size() == 0) return false;
   return std::find(v.begin(), v.end(), s) == v.end();
}

}
