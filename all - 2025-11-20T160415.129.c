#include <stdio.h>
enum Menu { ADD = 1, SUBTRACT, MULTIPLY };
int main() {
    int choice;
    int a, b, result;
    printf("Menu:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    switch (choice) {
        case ADD:
            result = a + b;
            printf("Result: %d\n", result);
            break;
        case SUBTRACT:
            result = a - b;
            printf("Result: %d\n", result);
            break;
        case MULTIPLY:
            result = a * b;
            printf("Result: %d\n", result);
            break;
        default:
            printf("Invalid choice!\n");
    }
    return 0;
}




