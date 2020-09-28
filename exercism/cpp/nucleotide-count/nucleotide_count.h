#if !defined(NUCLEOTIDE_COUNT_H)
#define NUCLEOTIDE_COUNT_H

#include <string>
#include <map>

namespace nucleotide_count{

class counter{
   private:
      std::map<char, int> data;
   public:
      counter(std::string);
      std::map<char, int> nucleotide_counts() const;
      int count(char) const;
};

}

#endif
