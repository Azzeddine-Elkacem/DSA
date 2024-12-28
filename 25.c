#include<stdio.h>

int sumOfDigits(int number){
  if(number == 0){
    return 0;
  }
  return (number % 10) + sumOfDigits(number / 10); 
}


int main(){
  int number;
  printf("enter the number :");
  scanf("%d", &number);
printf("the sum of digits is %d", sumOfDigits(number));
}