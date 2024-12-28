#include <stdio.h>
struct student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    struct student students[5]; 
    float totalMarks = 0.0, averageMarks;

    for (int i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name); 
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);  
        printf("Marks: ");
        scanf("%f", &students[i].marks); 
        totalMarks += students[i].marks;  
    }
    averageMarks = totalMarks / 5;
  
    printf("\nStudent Details:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d: %s, Roll Number: %d, Marks: %.2f\n", i + 1, students[i].name, students[i].rollNumber, students[i].marks);
    }
    printf("\nTotal Marks of all students: %.2f\n", totalMarks);
    printf("Average Marks: %.2f\n", averageMarks);

    return 0;
}
