#include<stdio.h>
#include<stdlib.h>
int main(){
  int n;

 printf("Enter the number of elements in the array: ");
 scanf("%d", &n);

 int *arr = (int *)malloc(sizeof(int));
  if(arr == NULL){
       printf("Memory allocation failed! \n");
      return 1;
  }
  printf("Enter %d integers: \n", n);
     for (int i = 0; i < n; i++) {
          printf("Element %d: ", i + 1);
         scanf("%d", &arr[i]);
     }

  printf("The array elements are: \n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    free(arr);
    printf("Memory has been freed\n");

    return 0;








}