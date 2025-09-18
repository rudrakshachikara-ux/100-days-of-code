#include <stdio.h>

int main() {
	// your code goes here
    int arr[100];
    int n, i;
    int positive = 0; negative = 0; even = 0; odd = 0;
    printf("Enter the number of elements (max 100): ");
    scanf("%d", &n);
    if (n < 1 || n > 100) {
    printf("Please enter a valid number of elements between 1 and 100.\n");
    return 0;
    }                                                                        
   printf("Enter %d integers:\n", n);                                           for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
    if (arr[i] > 0)
    positive++;
    else if (arr[i] < 0)
    negative++;
    if (arr[i] % 2 == 0)
    even++;
    else
    odd++;
    }
    printf("\nCount of positive numbers: %d\n", positive);
    printf("Count of negative numbers: %d\n", negative);
    printf("Count of even numbers: %d\n", even);
    printf("Count of odd numbers: %d\n", odd);
    return 0;
}



