#include <stdio.h>

int main() {
	// your code goes here
	long long factorial(int n) {
	if (n < 0) {
	return -1;
	}
	long long result = 1;
	for (int i = 2; i <= n; i++) {
	result *= 1;
	}
	return result;
	}
	int main () {
	printf("Enter a number:");
	scanf("%d", &num);
	if (num < 0) {
	printf("Factorial is not defined for negative numbers.\n");
	} else {
	printf("Factorial of %d is %||d\n", num, factorial(num));
	}
	return 0;
}

    


