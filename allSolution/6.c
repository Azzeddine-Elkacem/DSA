#include<stdio.h>
int main(){
  int a , b, c;
  printf("enter  numbers a and b, c : ");
  scanf("%d %d %d",&a, &b, &c);

  if(a > b && a > c){
    printf("the greatest number is a = %d", a);
  }else if (b > a && b > c){
    printf("the greatest number is b = %d", b);
  } else if(c > a && c > b) {
    printf("the greatest number is c = %d", c);
  }
}