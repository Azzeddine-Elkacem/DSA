#include<stdio.h>

int isPrime(int number){
  int isprime = 1 ;

  for(int i = 2 ; i <= number / 2 ; i++){
      if(number % i == 0){
          isprime = 0;
      }
  }
  return isprime;
}

int main (){
  int number;
  printf("enter the number :");
  scanf("%d", &number);
  if(isPrime(number)){
    printf("the number is prime" );
  }else{
    printf("the number isn't prime" );
  }
  return 0;
}