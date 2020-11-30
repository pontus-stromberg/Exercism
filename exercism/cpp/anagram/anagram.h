#if !defined(ANAGRAM_H)
#define ANAGRAM_H

#include <string>
#include <vector>
namespace anagram{
class anagram{
public:
   anagram(std::string input);
   std::vector<std::string> matches(std::vector<std::string>);
   std::string lower_case(std::string s);
   bool exists(std::vector<std::string>, std::string);

private:
   std::string word;
   std::string word_sorted;
};
}

#endif
