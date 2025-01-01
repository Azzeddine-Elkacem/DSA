#include<stdio.h>
int isPrime(int num){
    int result;
    for(int i = 0; i < num / 2; i++){
    if(num % 2 == 0){
         result = 0;// number isn't prime;
    }else{
          result = 1;// number is prime;
    }
    }
  return result;
}

int main(){

int leftNumber;
int rightNumber;

printf("enter the left number : ");
scanf("%d", &leftNumber);

printf("enter the right number :");
scanf("%d", &rightNumber);

int size = rightNumber - leftNumber +1 ;
int arr[size];
int j= 0;
for(int i = leftNumber; i < rightNumber; i++ ){
 if(isPrime(i)){
  arr[j++] = i;
 }
  
}

for(int i = 0 ; i < j ; i++){
    printf("arr[%d] = %d\n", i, arr[i] );
  }




  return 0;
}