#include <stdio.h>

int main() {
	// your code goes here
	int n, sum=0;
	printf("Enter a positive number");
	scanf("%d", &n);
	sum=n*(n+1)/2;
	printf("The sum of the first %d natural number is: %d\n" , n, sum);
	return 0;
}

