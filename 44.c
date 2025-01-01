#include<stdio.h>

int binSearch(int arr, int x, int inf, int sup){
    while(inf <= sup){
         int m = (inf + sup)/2;
           if(arr[m] == x){
             return m;
           }else if (arr[m] < x ) {
              inf = m + 1;
           }else{
               sup = m -1;
           }

      return -1;
    }
}
int main(){

int size = 5;
int arr[] = {3, 5, 0, 23, 9};
int x ;
printf("enter the value of x : ");
scanf("%d", &x);
int result = binSearch(arr, , x);
if(result == -1){
printf("the value not found in the array :(");
}else{
printf("the index of the value of x : %d",result);
}


  return 0;
}