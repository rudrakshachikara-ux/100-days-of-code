#include <stdio.h>
#include <stdlib.h> 
struct Employee {
    int id;
    char name[50];
    float salary;
};
int main() {
    struct Employee *emp = (struct Employee *)malloc(sizeof(struct Employee));
    if (emp == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    emp->id = 1001;
    snprintf(emp->name, sizeof(emp->name), "Rudraksh");  
    emp->salary = 55000.75;
    printf("Employee Details:\n");
    printf("ID: %d\n", emp->id);
    printf("Name: %s\n", emp->name);
    printf("Salary: %.2f\n", emp->salary);
    free(emp);
    return 0;
}

