#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdbool.h>

typedef int ll_data_t;

typedef struct{
   ll_data_t value;
   list *prev;
   list *next
}list;

/*
typedef struct{
   int value;
   list *prev;
   list *next;
}ll_data_t;

typedef struct{
   
}list_t:
*/


list *list_create();

void list_destroy(list *list);

bool list_push(list *list, ll_data_t data);

int list_pop(list *list);

int list_shift(list *list);

bool list_unshift(list *list, ll_data_t data);

bool list_is_empty(list *list);

bool list_push(list *list, ll_data_t data);

#endif
