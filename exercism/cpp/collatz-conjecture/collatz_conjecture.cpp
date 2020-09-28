#include "collatz_conjecture.h"
#include <stdexcept>
namespace collatz_conjecture{
   
int steps(int nbr){
   if(nbr < 1) throw std::domain_error("Invalid input");
   int counter = 0;
   while(nbr != 1){
      if(nbr%2== 0) nbr /= 2;
      else nbr = 3*nbr + 1;
      counter++;
   }
   return counter;
}

}
