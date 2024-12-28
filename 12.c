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
//define the max and min:
int max = arr[0];
  for(int i = 0; i <= n-1 ; i++){
   if(max < arr[i]){
     max = arr[i];
    }
  }
int min = arr[0];
  for(int j = 0; j <= n-1 ; j++){
    if(min > arr[j]){
        min = arr[j];
      }
  }

    printf("The maximum value is: %d\n", max);
    printf("The minimum value is: %d\n", min);
  return 0;
}