#include "circular_buffer.h"
#include <errno.h>
#include <stdio.h>

int16_t write(circular_buffer_t * buffer, buffer_value_t value){
   if(buffer->len == buffer->cap){
      errno = ENOBUFS;
      return EXIT_FAILURE;
   }
   buffer->data[(buffer->start+buffer->len)%buffer->cap] = value;
   buffer->len++;
   return EXIT_SUCCESS;
}

int16_t overwrite(circular_buffer_t * buffer, buffer_value_t value){
   if(buffer->len == buffer->cap){
      buffer->data[buffer->start] = value;
      buffer->start = (buffer->start+1) %buffer->cap;
   }else{
      buffer->data[buffer->start + buffer->len] = value;
      buffer->len++;
   }
   return EXIT_SUCCESS;
}

int16_t read(circular_buffer_t * buffer, buffer_value_t *value){
   if(buffer->len == 0){
      errno = ENODATA;
      return EXIT_FAILURE;
   }
   *value = buffer->data[buffer->start]; 
   buffer->start = (buffer->start+1) % buffer->cap;
   buffer->len--;
   return EXIT_SUCCESS;
}

circular_buffer_t *new_circular_buffer(size_t capacity){
   circular_buffer_t *b = malloc(capacity);
   b->start = 0;
   b->len = 0;
   b->cap = capacity;
   return b;
}

void delete_buffer(circular_buffer_t *buffer){
   free(buffer);
}

void clear_buffer(circular_buffer_t *buffer){
   buffer->start = 0;
   buffer->len = 0;
}


