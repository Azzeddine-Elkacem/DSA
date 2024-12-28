#include<stdio.h>

int main() {
    char firstName[20];
    scanf("%s", firstName);

    char lastName[20];
    scanf("%s", lastName);

    char fullName[40]; 

    int i = 0;
    while (firstName[i] != '\0') {
        fullName[i] = firstName[i];
        i++;
    }
    fullName[i] = ' ';
    i++;
    
    int j = 0;
    while (lastName[j] != '\0') {
        fullName[i] = lastName[j];
        i++;
        j++;
    }

    fullName[i] = '\0';
    printf("Full Name: %s\n", fullName);

    return 0;
}
