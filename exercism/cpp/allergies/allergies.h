#if !defined(ALLERIGES_H)
#define ALLERGIES_H

#include <vector>
#include <string>
#include <unordered_set>

namespace allergies{

class allergy_test{
   private:
      std::unordered_set<std::string> allergy_list;
   public:
      bool is_allergic_to(std::string);
      allergy_test(int);
      std::unordered_set<std::string> get_allergies();
};

}

#endif
