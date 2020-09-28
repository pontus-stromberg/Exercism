#include "queen_attack.h"
#include <stdexcept>

namespace queen_attack{

chess_board::chess_board(){
   q_w = std::make_pair(0,3);
   q_b = std::make_pair(7,3);
}

chess_board::chess_board(std::pair<int, int> w, std::pair<int, int> b){
   if(w.first == b.first && w.second == b.second) throw std::domain_error("Same position");
   q_w = w;
   q_b = b;

}

std::pair<int, int> chess_board::white() const{
   return q_w;   
}

std::pair<int, int> chess_board::black() const{
   return q_b;
}

chess_board::operator std::string() const{
   std::string board;
   for(int i = 0; i < 8; i++){
      for(int j  =0; j < 9; j++){
         if(j == 8) board += '\n'; 
         else if(q_w.first == i && q_w.second == j) board += "W ";
         else if(q_b.first == i && q_b.second == j) board += "B ";
         else{
            if(j != 7){
               board += "_ ";
            }else{
               board += "_";
            }
         }
      }
   }
   return board;
}

bool chess_board::can_attack() const{
   if(q_w.first == q_b.first) return true;
   if(q_w.second == q_b.second) return true;
   if(q_w.first - q_b.first == q_w.second - q_b.second) return true;
   if(q_w.first - q_b.first == q_b.second - q_w.second) return true;
   return false;
}

}
