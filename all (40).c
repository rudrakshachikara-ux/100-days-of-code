#include <stdio.h>

int main() {
	// your code goes here
    char op;
    int num1, num2, result;
    printf("Enter an operator ( +, -, *, /, %%):");
    scanf("%c", &op);
    printf("Enetr two integers:");
    scanf("%d %d", num1, &num2);
    switch (op) {
    case '+':
    result = num1 + num2;
    printf("%d + %d = %d\n", num1, num2, result);
    break;
    case '-':
    result = num1- num2;
    printf("%d - %d = %d\n", num1, num2, result);
    break;
    case '*':
    result = num1 * num2;
    printf("%d * %d = %d\n", num1, num2, result);
    break;
    case '/':
    if ( num2 != 0) {
    printf("%d / %d = %d\n", num1, num2, result);
    } else {
    printf("Error: Division by zero!\n");
    }
    break;
    case '%':
    if (num2 != 0) {
    result = num1 % num2;
    printf("%d %% %d = %d\n", num1, num2, result);
    } else {
    printf("Error: Modulo  by zero!\n");
    }
    break;
    default:
    printf("Invalid operator.\n");
    }
    return 0;
}

 