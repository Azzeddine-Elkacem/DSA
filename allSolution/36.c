#include <stdio.h>
#include <stdlib.h>

int main() {
   FILE *p1;
   p1 = fopen("greeting.txt", "a+");
   if(p1 == NULL){
    printf("we can't open this file!");
    return 1;
   }
    fputs("hello,world!", p1);
   fclose(p1);

    return 0;
}
