#include <stdio.h>

int main() {
	// your code goes here
    int findHCF(int a, int b) {
    while (b != 0) {
    int temp = b;
    b = a % b;
    a = temp;
    }
    return a;
    }
    int main () {
    int num1, num2;
    printf("Enter first number:");
    scanf("%d", &num1);
    printf("Enter second number:");
    scanf("%d", &num2);
    printf("The HCF (GCD) of %d and %d is %d\n", num1, num2, findHCF(num1, num2);
    return 0;
}



    

