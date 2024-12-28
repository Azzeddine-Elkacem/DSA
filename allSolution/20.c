#include<stdio.h>

int main() {
    int length;
    char ch;
    int count = 0;

    printf("Enter the length of the string: ");
    scanf("%d", &length);

    char str[length + 1];  
    printf("Enter the string: ");
    scanf("%s", str); 
    
    printf("Enter the character to find its frequency: ");
    scanf(" %c", &ch);  

    for(int i = 0; i < length; i++) {
        if(str[i] == ch) {
            count++;
        }
    }
    printf("The frequency of '%c' in the string is: %d\n", ch, count);

    return 0;
}
