#include<stdio.h>


int main(){
char str [20]= "hello";
char * ptr = str;
int length = 0 ;

// for(int i = 0; ptr[i] != '\0'; i++){
//   length++;
// }
while(*ptr != '\0'){
  ptr++;
  length++;
}
printf("the length is %d", length);
  return 0;
}