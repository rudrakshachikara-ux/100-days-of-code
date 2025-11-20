#include <stdio.h>
enum Gender {
    MALE,
    FEMALE,
    OTHER
};
struct Person {
    char name[50];
    int age;
    enum Gender gender;
};
const char* getGenderString(enum Gender g) {
    switch (g) {
        case MALE: return "Male";
        case FEMALE: return "Female";
        case OTHER: return "Other";
        default: return "Unknown";
    }
}
int main() {
    struct Person p1 = {"Rudraksh", 18, MALE};
    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    printf("Gender: %s\n", getGenderString(p1.gender));
    return 0;
}




