#include <stdio.h>
#include <string.h>
struct Employee {
    int id;
    char name[50];
    float salary;
};
int main() {
    struct Employee emp1, emp2;
    printf("Enter details for Employee 1:\n");
    printf("ID: ");
    scanf("%d", &emp1.id);
    printf("Name: ");
    scanf("%s", emp1.name);
    printf("Salary: ");
    scanf("%f", &emp1.salary);
    printf("\nEnter details for Employee 2:\n");
    printf("ID: ");
    scanf("%d", &emp2.id);
    printf("Name: ");
    scanf("%s", emp2.name);
    printf("Salary: ");
    scanf("%f", &emp2.salary);
    if (emp1.id == emp2.id &&
        strcmp(emp1.name, emp2.name) == 0 &&
        emp1.salary == emp2.salary) {
        printf("\nThe two employees are IDENTICAL.\n");
    } else {
        printf("\nThe two employees are DIFFERENT.\n");
    }
    return 0;
}

