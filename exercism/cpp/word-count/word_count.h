#if !defined(WORD_COUNT_H)
#define WORD_COUNT_H

#include <map>
#include <string>
#include <vector>

using namespace std;

namespace word_count{
/*
class word_count{
   private:
      const map<string, int> data;

   public:
*/
   const map<string, int> words(string);
   vector<string> split_string(string);
}



#endif
