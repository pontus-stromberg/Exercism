#include "phone_number.h"
#include <iostream>
#include <stdexcept>

namespace phone_number{

   phone_number::phone_number(string s){
   string temp;
   int index = 0;
      for(char &c : s){
         if(isdigit(c)){
            if(c != '1' || index > 0){
               temp.push_back(c);
               index++;
            }
         }
      } 
   if(temp.at(0) < 2 + '0' || temp.at(0) > 9 + '0' || temp.length() != 10
      ||temp.at(3) < 2 + '0' || temp.at(3) > 9 + '0') throw domain_error("Wrong input!");
   
   nbr = temp;
   formatted = "(";
   formatted += nbr.substr(0,3) + ") ";
   formatted += nbr.substr(3,3) + "-";
   formatted += nbr.substr(6,4);

   }
   
   string phone_number::number(){
      return nbr;
   }

   string phone_number::area_code(){
      return nbr.substr(0,3);
   }

}
