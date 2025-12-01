#include <stdio.h>
#include <stdlib.h>  
struct Student {
    int id;
    char name[50];
    float marks;
};
int main() {
    struct Student *s = (struct Student *)malloc(sizeof(struct Student));
    if (s == NULL) {
        printf("Memory allocation failed!\n");
        return 1; 
    }
    s->id = 101;
    snprintf(s->name, sizeof(s->name), "Rudraksh");  
    s->marks = 92.5;
    printf("Student Details:\n");
    printf("ID: %d\n", s->id);
    printf("Name: %s\n", s->name);
    printf("Marks: %.2f\n", s->marks);
    free(s);
    return 0;
}

