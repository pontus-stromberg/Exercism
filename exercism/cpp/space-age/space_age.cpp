#include "space_age.h"
#include <math.h>

namespace space_age{

const double merc_year = 0.240846;
const double venus_year = 0.61519726;
const double mars_year = 1.8808158;
const double jupiter_year = 11.862615;
const double saturn_year = 29.447498;
const double uranus_year = 84.016846;
const double neptune_year = 164.79132;

space_age::space_age(long long seconds){
   secs = seconds;
   years = (double)seconds/31557600; 
}

double space_age::on_earth() const{
   return years;
}

double space_age::on_mercury() const{
   return years/merc_year;
}

double space_age::on_venus() const{
   return years/venus_year;
}

double space_age::on_mars() const{
   return years/mars_year;
}

double space_age::on_jupiter() const{
   return years/jupiter_year;
}

double space_age::on_saturn() const{
   return years/saturn_year;
}

double space_age::on_uranus() const{
   return years/uranus_year;
}

double space_age::on_neptune() const{
   return years/neptune_year;
}
long long space_age::seconds() const{
   return secs;
}

}
