#include<stdio.h>
int main(){
int n;

printf("enter the value of n : ");
scanf("%d", &n);

int arr[n];
int prev = 0;
int curr = 1;
arr[0] = prev;
arr[1] = curr;
for(int i = 1; i < n ; i++){
 
  int tmp = curr;
  curr += prev;
  prev = tmp;

  arr[i] = prev;
  arr[i + 1]  = curr;
  
}
  for(int i = 0 ; i < n; i++){
    printf("arr[%d] = %d\n", i, arr[i] );
  }

  return 0;
}