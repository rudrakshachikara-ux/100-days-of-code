#include <stdio.h>
#define SIZE 5
struct Student {
    char name[50];
    int roll_no;
    float marks;
};
int main() {
    struct Student students[SIZE];
    for (int i = 0; i < SIZE; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        getchar(); 
        fgets(students[i].name, sizeof(students[i].name), stdin);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
    printf("\n--- Student Records ---\n");
    for (int i = 0; i < SIZE; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name     : %s", students[i].name); // fgets includes newline
        printf("Roll No  : %d\n", students[i].roll_no);
        printf("Marks    : %.2f\n\n", students[i].marks);
    }
    return 0;
}

