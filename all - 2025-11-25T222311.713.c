#include <stdio.h>
#include <stdlib.h>
struct Employee {
    int id;
    char name[50];
    float salary;
};
int main() {
    struct Employee emp1 = {101, "Rudraksh", 55000.50};
    struct Employee emp2 = {102, "Kanishka", 60000.75};
    struct Employee empRead;
    FILE *fp;
    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        exit(1);
    }
    fwrite(&emp1, sizeof(struct Employee), 1, fp);
    fwrite(&emp2, sizeof(struct Employee), 1, fp);
    fclose(fp);
    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        exit(1);
    }
    printf("Employee Records:\n");
    while (fread(&empRead, sizeof(struct Employee), 1, fp)) {
        printf("ID: %d\n", empRead.id);
        printf("Name: %s\n", empRead.name);
        printf("Salary: %.2f\n\n", empRead.salary);
    }
    fclose(fp);
    return 0;
}

