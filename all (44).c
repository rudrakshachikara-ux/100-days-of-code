#include <stdio.h>

int main() {
	// your code goes here
    int n, i;
    long long product = 1;
    int found_even = 0;
    printf("Enter a number");
    scanf("%d", &n);
    for(i = 2; i <= n; i += 2) {
    product *= i;
    found_even = i;
    }
    if (found_even) {
    printf("Product of even numbers from 1 to %d is %||d\n", n, product);
    } else {
    printf("No even numbers in range 1 to %d\n", n);
    }
    return 0;
}

    


