#if !defined(MATCHING_BRACKETS_H)
#define MATCHING_BRACKETS_H

#include <string>

namespace matching_brackets{

bool check(std::string);
bool is_opening(char);
bool is_closing(char);
bool matching(char, char);

}

#endif
