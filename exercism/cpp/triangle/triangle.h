#if !defined(TRIANGLE_H)
#define TRIANGLE_H

namespace triangle{

enum flavor {equilateral, isosceles, scalene};

flavor kind(double, double, double);
bool is_valid(double, double, double);
}


#endif
