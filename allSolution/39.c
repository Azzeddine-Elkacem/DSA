#include <stdio.h>
#include <stdlib.h>

int main() {
   FILE *p1;
   char name [50] = "Hazerchi Azzeddine Elkacem Abdelkader";
   p1 = fopen("greeting.txt", "a+");
   if(p1 == NULL){
    printf("we can't open this file!");
    return 1;
   }
    fprintf(p1, " my name is %s",name);
   fclose(p1);

    return 0;
}
