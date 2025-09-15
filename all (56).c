#include <stdio.h>

int main() {
	// your code goes here
    int num, swapped_num;
    int first_digit, last_digit;
    int num_digits;
    long long power_of_10;
    printf("Enter a number:");
    scanf("%d", &num);
    if (num >= 0 && num <= 9) {
    printf("Number after swappingfirst and last digit: %d\n", num);
    return 0;
    }
    num_digits = (int)log10(num) + 1;
    last_digit = num % 10;
    power_of_10 = (long long)pow(10, num_digits - 1);
    first_digit = num / power_of_10;
    swapped_num = last_digit * power_of_10 + (num % power_of_10);
    swapped_num = swapped_num - last_digit + first_digit;
    printf("Number after swapping first and last digit: %d\n", swapped_num);
    return 0;
}

