#include<stdio.h>

int swap(int *a, int *b){
  int tmp = *b;
  *b = *a;
  *a = tmp;
}

int main(){
  int a, b;
printf("enter a : ");
scanf("%d", &a);

printf("enter b : ");
scanf("%d", &b);
printf("the old a = %d\n", a);
printf("the old b = %d\n", b);
swap(&a, &b);
printf("the new a = %d\n", a);
printf("the new b = %d\n", b);
}