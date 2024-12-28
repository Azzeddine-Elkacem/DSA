#include<stdio.h>
int main(){
  int length, breadth, area;
  printf("enter the length of the rectangle :  ");
  scanf("%d", &length);
  printf("enter the breadth of the rectangle : ");
  scanf("%d", &breadth);
  area = length * breadth;
  printf("the area of the rectangle is = %d", area);

  return 0;
}