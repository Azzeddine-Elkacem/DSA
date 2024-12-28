#include <stdio.h>
#include <stdlib.h>

int main() {
   FILE *p1;
   char str[20];
   p1 = fopen("greeting.txt", "r");
   if(p1 == NULL){
    printf("we can't open this file!");
    return 1;
   }

    while(fgets(str, 2, p1) != NULL){
      printf("%s", str);
    }
   fclose(p1);

    return 0;
}
