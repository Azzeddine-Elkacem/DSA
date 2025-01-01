#include <stdio.h>


int poww(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int a, r, n;

   
    printf("Enter the first term (a): ");
    scanf("%d", &a);
    printf("Enter the common ratio (r): ");
    scanf("%d", &r);
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. n must be greater than 0.\n");
        return 1;
    }

    int arr[n];
    int sum = 0;

    
    for (int i = 0; i < n; i++) {
        arr[i] = a * poww(r, i); 
        sum += arr[i];           
    }

    
    printf("Geometric series:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }


    printf("Sum of the series: %d\n", sum);

    return 0;
}
