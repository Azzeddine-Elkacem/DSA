#include<stdio.h>
int main(){
  int number;
  printf("enter number you want : ");
  scanf("%d", &number);
  for(int i = 1 ; i <= 9; i ++){
    printf("%d * %d = %d\n", number, i , number * i);
  }
}