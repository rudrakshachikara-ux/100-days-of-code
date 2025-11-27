#include <stdio.h>
#include <stdlib.h>
struct Employee {
    int id;
    char name[50];
    float salary;
};
int main() {
    struct Employee *emp;  
    emp = (struct Employee *)malloc(sizeof(struct Employee));
    if (emp == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Enter Employee ID: ");
    scanf("%d", &emp->id);
    printf("Enter Employee Name: ");
    scanf("%s", emp->name);
    printf("Enter Employee Salary: ");
    scanf("%f", &emp->salary);
    printf("\nEmployee Details:\n");
    printf("ID: %d\n", emp->id);
    printf("Name: %s\n", emp->name);
    printf("Salary: %.2f\n", emp->salary);
    free(emp);
    return 0;
}

