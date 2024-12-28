#include<stdio.h>
#include<stdbool.h>
int main(){

char word[6] = "madam";
int length = 0;

while(word[length]!='\0'){
  length++;
}
bool ispalindrome = true;

  for(int k = 0; k < length; k++){
    if (word[k] != word[length - k - 1]) {
            ispalindrome = false;
            break;
    }
  }

  if(ispalindrome){
    printf("the word is palindrome!");

  }else{
  printf("the word isn't palindrome!");
  }

  return 0;
}