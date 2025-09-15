#include <stdio.h>

int main() {
	// your code goes here
    int n, i;
    double sum = 0.0;
    printf("Enter the number of terms (n):");
    scanf("%d", &n);
    if (n <= 0) {
    printf("NUmber of terms must be a positive integer .\n");
    return 1;
    }
    for (i = 1; i <= n; i++) {
    double numerator = (double) (2 * i - 1);
    double denominator = (double) (2 * i);
    sum += (numerator / denominator);
    }
    printf("The sum of the series up to %d terms is: %.6f\n", n, sum);
    return 0;
}




