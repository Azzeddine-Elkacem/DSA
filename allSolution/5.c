#include<stdio.h>
int main (){

int number ;
printf("enter the number you want to know about it : ");
scanf("%d", &number);
if(number % 2 == 0){
  printf("the number is even!");
}else{
  printf("the number is odd!");
}
return 0;

/*we can use the ternary operator to check even or odd 

printf("The number is %s!\n", (number % 2 == 0) ? "even" : "odd");

*/
}