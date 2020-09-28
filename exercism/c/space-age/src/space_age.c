#include "space_age.h"

float convert_planet_age(long double planet, long seconds){

   long earth_year = 31557600;
   float age = (seconds/earth_year)/planet;
   return age;

}
