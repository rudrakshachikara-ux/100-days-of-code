#include <stdio.h>
#include <stdlib.h>
struct Employee {
    int id;
    char name[50];
    float salary;
};
int main() {
    struct Employee emp_write[3] = {
        {1, "Rudraksh", 50000.0},
        {2, "Kanishka", 60000.0},
        {3, "Ananya", 55000.0}
    };
    struct Employee emp_read[3];
    FILE *fp;
    fp = fopen("employees.dat", "wb");  // "wb" = write binary
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        exit(1);
    }
    fwrite(emp_write, sizeof(struct Employee), 3, fp);
    fclose(fp);
    fp = fopen("employees.dat", "rb");  // "rb" = read binary
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        exit(1);
    }
    fread(emp_read, sizeof(struct Employee), 3, fp);
    fclose(fp);
    printf("Employee Data Read from File:\n");
    for (int i = 0; i < 3; i++) {
        printf("ID: %d, Name: %s, Salary: %.2f\n",
               emp_read[i].id, emp_read[i].name, emp_read[i].salary);
    }
    return 0;
}

