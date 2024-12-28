#include<stdio.h>

int main() {
    
    int arr1[3] = {1, 2, 3};  
    int arr2[3] = {4, 5, 6};  
    int n = 3, m = 3;         
    int arr[m + n];

  
    for (int i = 0; i < n; i++) {
        arr[i] = arr1[i];
    }

    for (int j = 0; j < m; j++) {
        arr[n + j] = arr2[j];
    }

    printf("Merged array: ");
    for (int i = 0; i < m + n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
