#include <stdio.h>

int main() {
	// your code goes here
    int n, i, sum=0;
    printf("Enter a number");
    scanf("%d", &n);
    for(i=1; i<=2*n-1; i+=2) {
    sum+=1;
    }
    printf("Sum of the first %d odd numbers is: %d\n", n, sum);
    printf("Using formula: %d\n", n*n);
    return 0;
}


