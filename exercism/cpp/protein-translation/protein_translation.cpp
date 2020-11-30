#include "protein_translation.h"
#include <map>
#include <iostream>

namespace protein_translation{
std::map<std::string, std::string> prot_map = {
   {"AUG", "Methionine"},
   {"UUU", "Phenylalanine"},
   {"UUC", "Phenylalanine"},
   {"UUA", "Leucine"},
   {"UUG", "Leucine"},
   {"UCU", "Serine"},
   {"UCC", "Serine"},
   {"UCA", "Serine"},
   {"UCG", "Serine"},
   {"UAU", "Tyrosine"},
   {"UAC", "Tyrosine"},
   {"UGU", "Cysteine"},
   {"UGC", "Cysteine"},
   {"UGG", "Tryptophan"},
   {"UAA", "STOP"},
   {"UAG", "STOP"},
   {"UGA", "STOP"}
};

std::vector<std::string> proteins(std::string input){
   std::vector<std::string> output;
   for(int i = 0; i < (int)input.length(); i += 3){
      std::string condon = input.substr(i,3);
      for(auto it = prot_map.begin(); it != prot_map.end(); ++it){
         if(it->first.compare(condon) == 0){
            if(it->second == "STOP") return output;
            output.push_back(it->second);
            break;
         }
      }
   }
   return output;
}

}
