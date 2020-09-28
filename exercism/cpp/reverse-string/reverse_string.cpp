#include "reverse_string.h"
#include <algorithm> 
#include <cstring>
namespace reverse_string{

std::string reverse_string(std::string word){
   reverse(word.begin(), word.end());
   return word;
}

}
