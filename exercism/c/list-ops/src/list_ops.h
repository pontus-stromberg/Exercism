#ifndef LIST_OPS_H
#define LIST_OPS_H

#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

typedef int8_t list_value_t;

typedef struct{
   size_t length;
   list_value_t values[];
}list_t;

list_t *new_list(size_t len, list_value_t *data);

list_t *append_list(list_t *list1, list_t *list2);

void delete_list(list_t *list);

list_t *filter_list(list_t *list, bool(*filter)(list_value_t value));

list_value_t foldl_list(list_t *list, list_value_t initial, list_value_t(*foldl)(list_value_t value, list_value_t initial));

list_value_t foldr_list(list_t *list, list_value_t initial, list_value_t(*foldr)(list_value_t value, list_value_t initial));

size_t length_list(list_t *list);

list_t *map_list(list_t *list, list_value_t(*map)(list_value_t value));

list_t *reverse_list(list_t *list);

#endif
