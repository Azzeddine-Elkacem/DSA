#include <stdio.h>
#define EMPLOYEE_COUNT 5

struct Employee {
    char name[50];
    int age;
    float salary;
};

int main() {
    struct Employee employees[EMPLOYEE_COUNT];
    int i;
    printf("Enter information for %d employees:\n", EMPLOYEE_COUNT);
    for (i = 0; i < EMPLOYEE_COUNT; i++) {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter name: ");
        scanf(" %[^\n]s", employees[i].name);

        printf("Enter age: ");
        scanf("%d", &employees[i].age);

        printf("Enter salary: ");
        scanf("%f", &employees[i].salary);
    }

    printf("\nEmployee Details:\n");
    for (i = 0; i < EMPLOYEE_COUNT; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("Name: %s\n", employees[i].name);
        printf("Age: %d\n", employees[i].age);
        printf("Salary: %.2f\n", employees[i].salary);
    }

    return 0;
}
