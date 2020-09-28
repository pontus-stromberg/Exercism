#include "allergies.h"
#include <math.h>
#include <stdio.h>

bool is_allergic_to(allergen_t allergy, uint16_t score){
   allergen_list_t list = get_allergens(score);
   return list.allergens[allergy];
}

allergen_list_t get_allergens(uint16_t score){
   allergen_list_t list;
   list.count = 0;
   while(score > 0){
      int allergy = 0;
      while(score >= 1 << allergy){
         allergy++;
      }
      allergy--;
      if(allergy <= ALLERGEN_CATS){
         list.allergens[allergy] = true;
         list.count++;
      }
      score -= 1 << allergy;
   }
   return list;
}
