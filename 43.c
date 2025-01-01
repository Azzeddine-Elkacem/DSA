#include<stdio.h>

int lrSearch(int arr[], int size, int x){
  for(int i = 0; i < size; i++){
    if(arr[i] == x){
      return i;
    }
  }
  return -1; //Not found:(
}

int main(){

int size = 5;
int arr[] = {3, 5, 0, 23, 9};
int x ;
printf("enter the value of x : ");
scanf("%d", &x);
int result = lrSearch(arr, size, x);
if(result == -1){
printf("the value not found in the array :(");
}else{
printf("the index of the value of x : %d",result);
}


  return 0;
}