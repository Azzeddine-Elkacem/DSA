#include<stdio.h>

typedef struct rectangle {
  int length;
  int breadth;
} Rectangle;

int calculatetheArea(int length, int breadth){
  return length * breadth;
}


int main(){
   Rectangle rec;
  printf("Enter the length of the rectangle: ");
  scanf("%d", &rec.length);

  printf("Enter the breadth of the rectangle: ");
  scanf("%d", &rec.breadth);

  printf("the area of this rectangle is : %d",calculatetheArea(rec.length, rec.breadth));

  return 0;
}