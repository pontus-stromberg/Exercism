#include "grade_school.h"
#include <iostream>
#include <algorithm> 

namespace grade_school{

   map<int, vector<string>> school::roster() const{
      return students;
   }

   void school::add(string name, int grade){
      auto v = students[grade];
      v.push_back(name);
      sort(v.begin(), v.end());
      students[grade] = v;
   
   }

   vector<string> school::grade(int grade) const{
      
      auto v_it = students.find(grade);
      if(v_it == students.end()) return {};
      
      auto v = v_it->second;
      return v;
   }

}
