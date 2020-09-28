#include "rna_transcription.h"

#include <map>
#include <iostream>

namespace rna_transcription{

std::map<char, char> convert = {
{'G', 'C'},
{'C', 'G'},
{'T', 'A'},
{'A', 'U'}
};

char to_rna(char input){
   return convert.at(input);
}

std::string to_rna(std::string input){
   std::string output;
   for(char &c : input){
      output.push_back(to_rna(c));   
   }
   return output;
}

}
