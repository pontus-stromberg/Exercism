#if !defined(PHONE_NUMBER_H)
#define PHONE_NUMBER_H

#include <string>

using namespace std;

namespace phone_number{

class phone_number{   
   public:
      phone_number(string);
      string number();
      string area_code();
      operator string() const{return formatted;};
   private:
      string nbr;
      string formatted;
};
}
#endif
