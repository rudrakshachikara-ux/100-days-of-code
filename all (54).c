#include <stdio.h>

int main() {
	// your code goes here
    int num, digit;
    long long product_of_odd_digit = 1;
    printf("Enter an integer:");
    scanf("%d", &num);
    if (num == 0) {
    printf("Productof odd digits: (as there are no digits)\n");
    return 0;
    }
    while (num > 0) {
    digit = num % 10;
    if (digit % 2 != 0) {
    product_of_odd_digit *= digit;
    }
    num /= 10;
    }
    printf("Product of odd digits: %11d\n", product_of_odd_digit);
    return 0;
}


