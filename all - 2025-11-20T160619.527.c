#include <stdio.h>
enum UserRole { ADMIN = 1, USER, GUEST };
int main() {
    enum UserRole role;
    role = ADMIN;
    switch (role) {
        case ADMIN:
            printf("Welcome, Admin! You have full access.\n");
            break;
        case USER:
            printf("Welcome, User! You have limited access.\n");
            break;
        case GUEST:
            printf("Welcome, Guest! You have read-only access.\n");
            break;
        default:
            printf("Invalid role.\n");
    }
    return 0;
}


