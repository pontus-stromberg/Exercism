#include "matching_brackets.h"
#include <iostream>
#include <stack>

namespace matching_brackets{

bool check(std::string input){
   std::stack<char> stack;
   for(char &c : input){
      if(is_opening(c)){
         stack.push(c);
      }else if(is_closing(c)){
         if(stack.empty()) return false;
         else{
            char prev = stack.top();
            stack.pop();
            if(!matching(prev, c)) return false;
         }
      }
   }
   return stack.empty();  
}

bool is_opening(char c){
   return c == '(' || c == '{' || c == '[';
}

bool is_closing(char c){
   return c == ')' || c == '}' || c == ']';
}

bool matching(char c1, char c2){
   if((c1 == 40 && c2 == 41) || (c1 == 91 && c2 == 93) || (c1 == 123 && c2 == 125)) return true;
   return false;
}

}
