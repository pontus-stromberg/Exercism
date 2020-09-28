#if !defined(QUEEN_ATTACK_H)
#define QUEEN_ATTACK_H

#include <utility>
#include <string>

namespace queen_attack{

class chess_board{
   private:
      std::pair<int, int> q_w;
      std::pair<int, int> q_b;
   public:
      chess_board();
      chess_board(std::pair<int, int>, std::pair<int, int>);
      std::pair<int, int> white() const;
      std::pair<int, int> black() const;
      operator std::string() const;
      bool can_attack() const;
};

}

#endif
