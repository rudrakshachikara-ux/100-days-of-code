#include <stdio.h>

int main() {
	// your code goes here
    int number, i, sum = 0;
    printf("ENter a number");
    scanf("%d", &number);
    if (number <= 0) {
    printf("Please enter a positive integer.\n");
    return 1;
    }
    for (i = 1; i < number; i++) {
    if (number % i == 0) {
    sum += i;
    }
}
    if (sum == number) {
    printf("%d is a perfect number.\n", number);
    } else {
    printf("%d is not a perfect number.\n", number);
    }
    return 0;
}


