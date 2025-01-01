#include <stdio.h>


void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void triSelection(int sizeOfarr, int arr[]) {
    for (int i = 0; i < sizeOfarr - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < sizeOfarr; j++) {
            if (arr[minIndex] > arr[j]) {
                minIndex = j;
            }
        }
        swap(&arr[i], &arr[minIndex]);
    }
}



void printThearr(int size, int array[]) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int arr[5] = {10, 5, 7, 9, 6};
    int size = 5;
    triSelection(size, arr);
    printf("The sorted array:\n");
    printThearr(size, arr);

    return 0;
}
