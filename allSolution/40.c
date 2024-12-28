#include <stdio.h>
#include <stdlib.h>

int main() {
   
   FILE *p1;
   FILE *p2;
   char c;
  
   p1 = fopen("greeting.txt", "r");
   if(p1 == NULL){
    printf("we can't open this file!");
    return 1;
   }

   p2 = fopen("greeting2.txt", "w");
   if(p2 == NULL){
    printf("we can't open this file!");
    return 1;
   }
    


do{
  c = fgetc(p1);
  fputc(c, p2);
}while(c != EOF);



  fclose(p1);
  fclose(p2);

    return 0;
}
