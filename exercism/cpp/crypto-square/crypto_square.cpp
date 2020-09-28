#include "crypto_square.h"
#include <iostream>
#include <cmath>

namespace crypto_square{

cipher::cipher(std::string input){
   text = input;
}

std::string cipher::normalize_plain_text(){
   std::string ret;
   for(char &c : text){
      if(isalpha(c) || isdigit(c)){
         ret.push_back(tolower(c));
      }
   }
   return ret;
}

std::vector<std::string> cipher::plain_text_segments(){
   std::vector<std::string> ret;
   std::string input = normalize_plain_text();
   int len = input.length();
   if(len == 0) return ret;
   int sq = sqrt(len);
   int rows = round((double)len/(double)sq);
   std::string part;
   std::cout << "sq " << sq << std::endl;
   for(int i = 0; i < len; i++){
      //if(i > 0 && i%sq==0){
      if(i > 0 && i%rows==0){
         std::cout << "adding " << part << std::endl;
         ret.push_back(part);
         part = "";
      }
      part.push_back(input[i]);
   }
   std::cout << "end " << part << std::endl;
   ret.push_back(part);
   return ret;
}

std::string cipher::cipher_text(){
   std::string input = normalize_plain_text();
   std::vector<std::string> v = plain_text_segments();
   std::string output;
   int len = input.length();
   int rows = v.size();
   for(int i = 0; i < len; i++){
      if(v[i%rows][i/rows] == '\0') len++;
      else output.push_back(v[i%rows][i/rows]);
   }  
   return output;
}

std::string cipher::normalized_cipher_text(){
   std::string input = cipher_text();
   std::cout << input << std::endl;
   int len = input.length();
   int sq = sqrt(len);
   double sq_ = sqrt(len);
   printf("sq %f\n", sq_);
   std::string output;
   for(int i = 0; i < len; i++){
      if(i > 0 && i % sq == 0) output.push_back(' ');
      output.push_back(input[i]);
   } 
   return output;

}

}
