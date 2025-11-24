#include <stdio.h>
struct Student {
    int id;
    char name[50];
    float marks;
};
struct Student getTopStudent(struct Student students[], int n) {
    struct Student top = students[0];  
    for (int i = 1; i < n; i++) {
        if (students[i].marks > top.marks) {
            top = students[i];  
        }
    }
    return top;  
}
int main() {
    struct Student students[3] = {
        {101, "Rudraksh", 92.5},
        {102, "Kanishka", 95.0},
        {103, "Ananya", 89.0}
    };
    struct Student topper = getTopStudent(students, 3);
    printf("Top Student Details:\n");
    printf("ID: %d\n", topper.id);
    printf("Name: %s\n", topper.name);
    printf("Marks: %.2f\n", topper.marks);
    return 0;
}

