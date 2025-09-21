#include <stdio.h>

int main() {
	// your code goes here
    long long num;
    printf("Enter an integer number: ");
    scanf("%d", &num);
    if (num < 0) {
    num = -num;
    }
    int digit_counts[10] = {0};
    if (num == 0) {
    digit_counts[0] = 1;
    } else {
    while (num > 0) {
    int digit = num % 10;
    digit_counts[digit]++;
    num /= 10;
    }
    }
    int max_count = -1;
    int most_frequency_digit = -1;
    for (int i = 0; i < 10; i++) {
    if (digit_counts[i] > max_count) {
    max_count = digit_counts[i];
    most_frequency_digit = i;
    }
    }
    printf("The digit that occurs the most times is %d\n", most_frequency_digit);
    return  0;
}



