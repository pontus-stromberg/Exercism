#include "meetup.h"
#include <stdio.h>
#include <string.h>

int meetup_day_of_month(int year, int month, char * desc, char * day){

   time_t epoch = 0;
   struct tm * ref_date;
   ref_date = localtime(&epoch); 
   printf("%s\n", asctime(ref_date));
/*printf("ref year, month, day %i %d %d\n", ref_date->tm_year, ref_date->tm_mon, ref_date->tm_wday);
   ref_date->tm_year+=40;
   //printf("added year %i\n", ref_date->tm_year);   
   printf("added yeay, month, day %i %d %d\n", ref_date->tm_year, ref_date->tm_mon, ref_date->tm_wday);
*/
   
   int y_diff = year - 1970;

   month = month-1;
   
   int extra_days = y_diff/4;
   int days_years = y_diff*365 + extra_days;
   int days_in_months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
   int days_months = 0;
   for(int i = 0; i<month; i++){
      days_months += days_in_months[i];

   }
   
   long tot_days = days_months+1 + days_years;
   long tot_secs = tot_days*86400;

   //printf("days years %d\n", days_years);
   //printf("days months %d\n", days_months);
   //printf("tot secs %ld\n", tot_secs);

   struct tm * new_date = localtime(&tot_secs);

   printf("new date %s\n", asctime(new_date));
   printf("weekday %d\n", new_date->tm_wday);
   printf("day %s\n", day);

   int weekday = new_date->tm_wday;

   int day_nbr = get_day_nbr(day);
   printf("day_nbr %d\n", day_nbr);
//   int invert = 1;
   int factor = 0;   
   if(strcmp(desc, "first") == 0){
      factor = 0;
   }else if(strcmp(desc, "second") == 0){
      factor = 1;
   }else if(strcmp(desc, "third") == 0){
      factor = 2;
   }else if(strcmp(desc, "fourth") == 0){
      factor = 3;
   }else if(strcmp(desc, "fifth") == 0){
      factor = 4;
   }else{
      if(day_nbr<weekday){
         factor = 3;
      }else{
         factor = 2;
      }
//      weekday = (weekday+4)/7;
      //invert = -1;   
   }
   if(day_nbr>weekday) factor++; 
   //int date = 7*factor + (day_nbr - weekday) + 1;
   int date = 7*factor + (weekday - day_nbr) + 1;
   printf("date %d\nfactor %d\nday_nbr %d\nweekday %d\n", date, factor, day_nbr, weekday);

   return date;

}

int get_day_nbr(char * day){

   if(strcmp(day, "Monday") == 0){
      return 1;
   }else if(strcmp(day, "Tuesday") == 0){
      return 2;
   }else if(strcmp(day, "Wednesday") == 0){
      return 3;
   }else if(strcmp(day, "Thursday") ==0){
      return 4;
   }else if(strcmp(day, "Friday") == 0){
      return 5;
   }else if(strcmp(day, "Saturday") == 0){
      return 6;
   }else if(strcmp(day, "Sunday") == 0){
      return 7;
   }     
   return -1;
}
