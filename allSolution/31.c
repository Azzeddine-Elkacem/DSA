#include<stdio.h>
typedef struct student { 
  char name[11] ;
  int rollNumber ;
  float marks ;
}student ;

int main(){
student s1 = {
  "Azzeddine",
  39142708,
  15.6 ,
};

printf("%s\n", s1.name);
printf("%d\n", s1.rollNumber);
printf("%.2f\n", s1.marks);

}