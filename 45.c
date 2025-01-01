#include <stdio.h>

void countFrequency(int arr[], int size) {
    int visited[size]; 
    for (int i = 0; i < size; i++) {
        visited[i] = 0; 
    }
    for (int i = 0; i < size; i++) {
        if (visited[i] == 1) {
            continue; 
        }

        int count = 1; 

        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1; 
            }
        }
        printf("Element %d occurs %d times\n", arr[i], count);
    }
}

int main() {
    int size;

  
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }
    int arr[size];

   
    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Frequency of elements in the array:\n");
    countFrequency(arr, size);

    return 0;
}
