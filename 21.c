#include<stdio.h>
int gcd(int n1, int n2){
  
 while(n2 != 0){
  int tmp = n2 ;
  n2 = n1 % n2 ;
  n1 = tmp ;
 }
return n1;
}

int main(){
printf("the gcd of this two numbers is %d", gcd(28,21));

 return 0;
}