#if !defined(ANAGRAM_H)
#define ANAGRAM_H

#include <string>
#include <vector>
namespace anagram{
class anagram{
public:
   anagram(std::string input);
   std::vector<std::string> matches(std::vector<std::string>);
   bool comp_words(std::string a, std::string b);
   std::string lower_case(std::string s);
   bool exists(std::vector<std::string>, std::string);

private:
   std::string word;

};
}

#endif
