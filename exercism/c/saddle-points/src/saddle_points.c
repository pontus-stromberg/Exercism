#include "saddle_points.h"
#include <stdio.h>
#include <stdbool.h>

saddle_points_t *saddle_points(const uint8_t rows, const uint8_t cols, uint8_t matrix[rows][cols]){
   saddle_points_t *p = malloc(rows * cols * sizeof(saddle_point_t));
   bool rw_high, col_low;
   uint8_t value;
   for(uint8_t i = 0; i < (uint8_t)rows; i++){
      for(uint8_t j = 0; j < (uint8_t)cols; j++){
         rw_high = true;
         col_low = true;
         value = matrix[i][j];
         for(uint8_t a = 0; a < (uint8_t)rows; a++){
            if(value > matrix[a][j]){
               rw_high = false;
               break;
            }
         }
         for(uint8_t b = 0; b < (uint8_t)cols; b++){
            if(value < matrix[i][b]){
               col_low = false;
               break;
            }
         }   
         if(rw_high && col_low){
            p->points[p->count].row = i + 1;
            p->points[p->count].column = j + 1;
            p->count++;
         }
      }
   }

   return p;
/*
   for(int j = 0; j < (int)cols; j++){
      int col_value = matrix[0][j];
      for(int i = 1; i < (int)rows; i++){
         //printf("col matrix %d %d\n", col_value, matrix[i][j]);
         if(col_value > matrix[i][j]){
            //printf("low col %d\n", j);
            col_value = matrix[i][j];
            index_cols[j] = j;
         }
      }
   }

   

   for(int a = 0; a < 3; a++){
      //for(int b = 0; b < 3; b++){
      printf("%d %d %d\n", matrix[a][0], matrix[a][1], matrix[a][2]);
      printf("rows cols %d %d\n", index_rows[a], index_cols[a]);
      //printf("%d %d %d\n", matrix[a][2]);
      //}
   }
   */
}

void free_saddle_points(saddle_points_t *points){
   free(points);
}
