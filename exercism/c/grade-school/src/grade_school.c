#include "grade_school.h"

static roster_t roster = {0};

int comp_str(const void *s1, const void *s2){

   const student_t *student1 = (const student_t *)s1;
   const student_t *student2 = (const student_t *)s2;
   if(student1->grade < student2->grade){
      return -1;
   }else if(student1->grade > student2->grade){
      return 1;
   }else{
      return strncmp(student1->name, student2->name, MAX_NAME_LEN);
   }
}

bool add_student(char *name, uint8_t grade){
   
   if(roster.count == MAX_STUDENTS) return false;
   if(strlen(name) == MAX_NAME_LEN) return false;
   strcpy(roster.students[roster.count].name, name);
   roster.students[roster.count].grade = grade;
   roster.count++;
   
   qsort(roster.students, roster.count, sizeof(*roster.students), comp_str);

   return true;

}

void clear_roster(){
   for(uint8_t i = 0; i < roster.count; i++){
      roster.count = 0;
      memset(roster.students, 0, sizeof(*roster.students) * roster.count);
   }
}

roster_t get_roster(){
   return roster;
}

roster_t get_grade(uint8_t desired_grade){
   roster_t ret_roster;
   ret_roster.count = 0;
   for(uint8_t i = 0; i< roster.count; i++){
      if(roster.students[i].grade == desired_grade){
         ret_roster.students[ret_roster.count].grade = roster.students[i].grade;
         strcpy(ret_roster.students[ret_roster.count].name, roster.students[i].name);
         ret_roster.count++;
      }
   }
   return ret_roster;
}


