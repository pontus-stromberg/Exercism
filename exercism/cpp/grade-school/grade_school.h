#if !defined(GRADE_SCHOOL_H)
#define GRADE_SCHOOL_H

#include <vector>
#include <map>

using namespace std;

namespace grade_school{

class school{
   public:
      map<int, vector<string>> roster() const;
      void add(string, int);
      vector<string> grade(int) const;
   private:
      map<int, vector<string>> students {};
};

}

#endif
