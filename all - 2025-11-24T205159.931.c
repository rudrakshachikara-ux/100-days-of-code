#include <stdio.h>
struct Date {
    int day;
    int month;
    int year;
};
struct Employee {
    int id;
    char name[50];
    float salary;
    struct Date joiningDate;  
};
void printEmployee(struct Employee e) {
    printf("Employee ID: %d\n", e.id);
    printf("Name: %s\n", e.name);
    printf("Salary: %.2f\n", e.salary);
    printf("Joining Date: %02d-%02d-%04d\n", e.joiningDate.day, e.joiningDate.month, e.joiningDate.year);
}
int main() {
    struct Employee emp = {101, "Rudraksh", 100000.75, {24, 11, 2025}};
    printEmployee(emp);
    return 0;
}

