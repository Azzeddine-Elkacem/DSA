#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // For isspace()

int main() {
    FILE *p1;
    char ch; 
    int count = 0; 
    int inWord = 0; 

    p1 = fopen("greeting.txt", "r");
    if (p1 == NULL) {
        printf("We can't open this file!\n");
        return 1;
    }

    while ((ch = fgetc(p1)) != EOF) {
        if (isspace(ch)) { 
           
            if (inWord) {
                count++;
                inWord = 0; 
            }
        } else {
            inWord = 1;
        }
    }
    if (inWord) {
        count++;
    }

    printf("Word count: %d\n", count);
    fclose(p1);

    return 0;
}
