#include <stdio.h>

int main() {
	// your code goes here
    int isPrime(int n) {
    if (n <= 1) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;
    int i;
    for (i = 3; i <= sqrt(n); i += 2) {
    if (n % i == 0)
    return 0;
    }
    return 1;
    }
    int main () {
    int num;
    printf("Enetr a number");
    scanf("%d", &num);
    if (isPrime(num))
    printf("%d ia prime number.\n", num);
    else
    printf("%d ia not a prime number.\n", num);
    return 0;
}

    

