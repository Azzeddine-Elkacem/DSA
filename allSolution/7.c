#include<stdio.h>
int main (){
  int number;
  printf("enter number you want : ");
  scanf("%d", &number);
  if (number < 0){
    printf("the number is negative!");
  }else if(number > 0){
    printf("the number is positive!");
  }else {
    printf("the number is equale to Zero!");
  }
}