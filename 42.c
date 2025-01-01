#include<stdio.h>
void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void triBulle(int arr[], int size){
  for(int i = 0; i < size - 1; i++){
      for(int j = 0;  j < size - i - 1; j++){
         if(arr[j] > arr[j+1]){
          swap(&arr[j], &arr[j+1]);
         }
      }
  }



}

void printThearr(int size, int array[]) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main(){

 int arr[5] = {10, 5, 7, 9, 6};
    int size = 5;
    triBulle(arr, size);
    printf("The sorted array:\n");
    printThearr(size, arr);
  return 0;
}