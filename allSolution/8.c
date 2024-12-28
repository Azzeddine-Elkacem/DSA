#include<stdio.h>
int main (){
  int number;
  printf("enter number you want : ");
  scanf("%d", &number);

  int factorial = number;
  for(int i = number -1 ; i >= 1; i--){
    factorial *= i;
  }
  printf("the factorial of the number is : %d", factorial);

  return 0;
}