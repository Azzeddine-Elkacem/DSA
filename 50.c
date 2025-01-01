#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int SieveOfEratosthenes(int limit){
bool isPrime[limit + 1];
    for(int i = 0 ; i < limit ; i++){
       isPrime[i] = true;
    }
isPrime[0] = isPrime[1] = false;

for(int p = 2; p < sqrt(limit); p++){
    if(isPrime){
      for(int i = p * p; i <= limit ; i +=p){
        isPrime[i] = false;
      }
    }
}

 for (int i = 2; i <= limit; i++) {
        if (isPrime[i]) {
            printf("%d ", i);
        }
    }



}

int main(){
int n;
printf("enter the limit n : ");
scanf("%d", &n);
SieveOfEratosthenes(n);


  return 0;
}