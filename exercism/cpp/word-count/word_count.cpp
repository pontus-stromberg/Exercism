#include "word_count.h"
#include <iostream>

using namespace std;

namespace word_count{

const map<string, int> words(string word){
   printf("new test\n");
   map<string, int> data;
   vector<string> v = split_string(word);
   for(string s : v){
      bool added = false;
      if(data.size() != 0){
         for(map<string, int>::iterator it = data.begin(); it != data.end(); it++){
            cout << "iterator " << it->first << " word " << s << endl;
            if(it->first.compare(s) == 0){
               printf("add to second\n");
               it->second++;
               added = true;
               break;
            }
         }
         if(!added){
            cout << s << " added" << endl;
            data[s] = 1;
         }
      }else{
         cout << s << " added" << endl;
         data[s] = 1;
      } 
   }
   
   for(map<string, int>::iterator it = data.begin(); it != data.end(); it++){
      cout << it->first << ' ' << it->second << endl;
   }
   
   return data;
}

vector<string> split_string(string input){
   vector<string> output;
   string word;
   for(char &c : input){
      c =::tolower(c);
      //if(c == ' ' || c == '\n' || c == '\t' || c == ','){
      if(!isdigit(c) && !isalpha(c) && c != 39){
         if(word.length() > 0){
            cout << "clean " << word << endl;
            if(word.at(0) == 39) word.replace(0,1,"");
            if(word.at(word.length()-1) == 39) word.replace(word.length()-1,1,"");
            output.push_back(word);
            word = "";
         }
      }else{
         word.push_back(c);
      }
   }
   //if(word.at(0) == 39) word.replace(0,1,"");
   //if(word.at(word.length()-1) == 39) word.replace(word.length()-1,1,"");
   if(word.length() > 0) output.push_back(word);
   
   for(string s : output){
      cout << "outputs " << s << endl;
   }
   /*
   for(string s : output){
      //string::iterator it = s.begin();
      printf("test char\n");
      cout << s << endl;
      
      if(s.at(0) == 39) s.replace(0,1,""); // <erase(s[0]);
      cout << s << endl;
      if(s.at(s.size()-1) == 39) s.replace(s.size()-1,1,""); // s.erase(s.size()-1);  
      cout << s << endl;
      }
   //if(word.length() > 0) output.push_back(word);
   */
   return output;
}

}
