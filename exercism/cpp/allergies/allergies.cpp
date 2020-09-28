#include "allergies.h"
#include <map>
#include <iostream>

namespace allergies{

std::map<int, std::string> list = {
{1, "eggs"},
{2, "peanuts"}, 
{4, "shellfish"},
{8, "strawberries"},
{16, "tomatoes"},
{32, "chocolate"},
{64, "pollen"},
{128, "cats"}
};

allergy_test::allergy_test(int nbr){
   while(nbr > 128*2){
      nbr -= 256;
   }
   int index = 128;
   
   while(index >= 1){
      if(nbr/index > 0){
         allergy_list.insert(list.find(index)->second);
         nbr -= index;
      }
      index /= 2;
   
   }
}
   
bool allergy_test::is_allergic_to(std::string allergy){
   
   auto found = allergy_list.find(allergy);
   if(found != allergy_list.end()) return true;
   return false;
}

std::unordered_set<std::string> allergy_test::get_allergies(){
   return allergy_list;
}

}
