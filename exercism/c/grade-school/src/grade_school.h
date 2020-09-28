#ifndef GRADE_SCHOOL_H
#define GRADE_SCHOOL_H
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAX_NAME_LEN 20
#define MAX_STUDENTS 20

int comp_str(const void *a, const void *b);

bool add_student(char * name, uint8_t grade);

void clear_roster();

typedef struct{
   uint8_t grade;
   char name[MAX_NAME_LEN];
} student_t;

typedef struct{
   size_t count;
   student_t students[MAX_STUDENTS];
} roster_t;

roster_t get_roster();
roster_t get_grade(uint8_t desired_grade);
#endif
