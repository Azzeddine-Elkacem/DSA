#include<stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int *pointer = arr;  
    printf("Array elements using pointer arithmetic:\n");

    for(int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i + 1, *(pointer + i));  
    }
   
    printf("\nPointer manipulation:\n");
    printf("First element: %d\n", *pointer);       
    printf("Second element: %d\n", *(pointer + 1)); 
    printf("Third element: %d\n", *(pointer + 2));  

    printf("Last element (using pointer arithmetic): %d\n", *(pointer + 4));
    
    int *endpointer = pointer + 4;  
    int diff = endpointer - pointer; 
    printf("\nNumber of elements between start and end pointer: %d\n", diff);
    return 0;
}
