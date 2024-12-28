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
  //print the normal arr :
  for(int i = 0; i < n; i++){
    printf("arr[%d] = %d\n", i, arr[i]);
  }
printf("<----------------------->\n");
  //print the reversal arr : 
  for(int i = n-1; i >= 0 ; i --){
    printf("arr[%d] = %d\n", i, arr[i]);
  }
  
  return 0;
  }
