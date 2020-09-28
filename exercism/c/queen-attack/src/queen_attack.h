#ifndef QUEEN_ATTACK_H
#define QUEEN_ATTACK_H

enum RESULT {INVALID_POSITION, CAN_NOT_ATTACK, CAN_ATTACK};

typedef struct{
   int row;
   int column;
}position_t;

int can_attack(position_t white, position_t black);

#endif
