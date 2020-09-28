#if !defined(SERIES_H)
#define SERIES_H

#include <vector>
#include <string>

namespace series{

std::vector<int> digits(std::string);
std::vector<std::vector<int>> slice(std::string, int);

}

#endif
