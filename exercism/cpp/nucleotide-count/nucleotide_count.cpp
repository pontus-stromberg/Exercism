#include "nucleotide_count.h"

#include <iostream>
#include <stdexcept>

namespace nucleotide_count{

std::map<char, int> counter::nucleotide_counts() const{
   return counter::data;
}

int counter::count(char c) const{
   
   for(const auto& key : counter::data){
      if(key.first == c) return key.second;
   }
   throw std::invalid_argument("Wrong input.");
   
}

counter::counter(std::string dna){
   counter::data = {{'A', 0}, {'T', 0}, {'C', 0}, {'G', 0}};
   
   std::map<char,int>::iterator it = counter::data.begin();
   for(char&c : dna){
      if(c != 'A' && c!= 'T' && c!= 'C' && c != 'G') throw std::invalid_argument("Wrong input.");
      for(it=counter::data.begin(); it!=counter::data.end(); ++it){
         if(it->first == c) it->second++;
      }
   }  
}

}
