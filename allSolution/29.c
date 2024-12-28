#include<stdio.h>
int main(){
  int arr[5] = {1, 2, 3, 4, 5};
  int * ptr1 = arr;
  int * ptr2 = ptr1 + 5 - 1;
 
 printf("the original array : *********************\n");
  for(int i = 0; i < 5  ; i++){
    printf("arr[%d] = %d\n", i + 1, *(ptr1 + i ));
  }

  while(ptr1 < ptr2){
   int temp = *ptr1;
   *ptr1 = *ptr2;
   *ptr2 = temp;
   ptr1++;
   ptr2--;
  }

  printf("the reversed array : *********************\n");
  for(int i = 0; i < 5  ; i++){
    printf("arr[%d] = %d\n", i + 1, arr[i] );
  }
}