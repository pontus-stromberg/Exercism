#include "queen_attack.h"
#include <stdio.h>

int can_attack(position_t white, position_t black){
   if(white.row < 0 || white.row > 7 || black.row < 0 || black.row > 7 || white.column < 0 || white.column > 7 || black.column < 0 || black.column > 7) return INVALID_POSITION;
   if(white.row == black.row && white.column == black.column) return INVALID_POSITION;
   if(white.row == black.row) return CAN_ATTACK;
   if(white.column == black.column) return CAN_ATTACK;
   if(white.row - black.row == white.column - black.column) return CAN_ATTACK;
   if(white.row - black.row == black.column - white.column) return CAN_ATTACK;
   return CAN_NOT_ATTACK;
}
