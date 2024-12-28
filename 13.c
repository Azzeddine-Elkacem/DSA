#include<stdio.h>
int main(){
 
int n;
printf("enter the number of the elements : ");
scanf("%d", &n);
// enter the values into the array:
int arr[n];
  for(int i = 0; i < n ; i++){
   printf("enter the value of the case arr[%d] : ", i);
   scanf("%d",&arr[i]);
  }
  //print the arr :
  for(int i = 0; i < n; i++){
    printf("arr[%d] = %d\n", i, arr[i]);
  }
int sum = 0;
  for(int j = 0; j < n ; j++){
    sum += arr[j];
  }
  
  
printf("the sum is = %d", sum);

  return 0;
}