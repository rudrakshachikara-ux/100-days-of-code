#include <stdio.h>

int main() {
	// your code goes here
    int num, originalNum, remainder, n = 0;
    double result = 0.0;
    printf("Enter a number");
    scanf("%d", &num);
    original = num;
    while (originalNum != 0) {
    originalNum /= 10;
    ++n;
    }
    originalNum = num;
    while (originalNum != 0) {
    remainder = originalNum % 10;
    result += pow(remainder, n);
    original /= 10;
    }
    printf("%d is a Armstrong number.\n", num);
    else
    printf("%d is not an Armstrong number.\n", num);
    return 0;
}
    

