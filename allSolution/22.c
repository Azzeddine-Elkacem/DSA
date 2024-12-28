#include<stdio.h>

int power (int number){
return number * number;
}

int main(){
  int number;
  printf("enter the number :");
  scanf("%d", &number);
  printf("the power of this number is =%d", power(number));
}