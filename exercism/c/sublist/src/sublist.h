#ifndef SUBLIST_H
#define SUBLIST_H

int compare(int *list_big, int *list_small, int count_big, int count_small);

enum type {UNEQUAL, EQUAL, SUBLIST, SUPERLIST};

int check_lists(int *list_comp, int *list_base, int count_comp, int count_base);

#endif
