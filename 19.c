#include<stdio.h>
int main(){
  int length;
  printf("enter the length of the string : ");
  scanf("%d", &length);
  char arr[length + 1];
  printf("enter the string : ");
  scanf("%s", arr);
  
  int vowelsCount = 0;
  int consonantsCount = 0;
  
   for(int j = 0; arr[j] != '\0'; j++){
    char ch = arr[j];
      if(ch=='i'||ch=='u'||ch=='e'||ch=='o'||ch=='a'||ch == 'I'|| ch =='U' || ch == 'E' || ch == 'O' || ch == 'A'){
        vowelsCount++;
      }else{
        consonantsCount++;
      }

   }
   printf("the number of vowels is = %d\n", vowelsCount);
   printf("the number of consonants = %d", consonantsCount);



return 0;
}