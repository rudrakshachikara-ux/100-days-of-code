#include <stdio.h>
enum Gender { MALE, FEMALE, OTHER };
struct Person {
    char name[50];
    int age;
    enum Gender gender;
};
int main() {
    struct Person p1;
    printf("Enter name: ");
    scanf("%s", p1.name);
    printf("Enter age: ");
    scanf("%d", &p1.age);
    printf("Enter gender (0 = MALE, 1 = FEMALE, 2 = OTHER): ");
    scanf("%d", (int*)&p1.gender);
    printf("\n--- Person Details ---\n");
    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    switch (p1.gender) {
        case MALE:
            printf("Gender: Male\n");
            break;
        case FEMALE:
            printf("Gender: Female\n");
            break;
        case OTHER:
            printf("Gender: Other\n");
            break;
        default:
            printf("Gender: Invalid\n");
    }
    return 0;
}





