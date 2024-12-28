#include<stdio.h>

int factorial(int number){
  if(number == 0 || number == 1){
    return 1;
  }else{
    return number * factorial(number - 1);
  }
  
}
int main(){
  int number;
  printf("enter the number :");
  scanf("%d", &number);
  printf("the power of this number is =%d", factorial(number));
}