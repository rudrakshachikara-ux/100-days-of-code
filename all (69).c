#include <stdio.h>

int main() {
	// your code goes here
    int n, i, j, is_prime;
    printf("Enter the upper limit (n): ");
    scanf("%d", &n);
    printf("Prime numbers from 1 to %d are:", n);
    for (i = 2; i <= n; i++) {
    is_prime = 1;
    for (j = 2; j * j <= 1; j++) {
    if (i % j == 0) {
    is_prime = 0;
    break;
    }
    }
    if (is_prime == 1) {
    printf("%d", i);
    }
    }
    printf("\n");
    return 0;
}




