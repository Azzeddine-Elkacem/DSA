#include<stdio.h>

void date (int date, int month, int year){
printf("%d-%d-%d", date, month, year);
}
typedef struct Day_month_year{
  int day;
  int month;
  int year;
} Date;
int main(){
  Date date1;
   printf("Enter the day: ");
  scanf("%d", &date1.day);

  printf("Enter the month: ");
  scanf("%d", &date1.month);
  
  printf("Enter the year: ");
  scanf("%d", &date1.year);

  date(date1.day, date1.month, date1.year);


}