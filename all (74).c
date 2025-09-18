#include <stdio.h>

int main() {
	// your code goes here
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
    }
    int even_count = 0;
    int odd_count = 0;
    for (int i = 0; i < n; i++) {
    if (arr[i] % 2 == 0) {
    even_count++;
    } else {
    odd_count++;
    }
    }
    printf("\nNumber of even elements: %d\n", even_count);
    printf("Number of odd elements: %d\n", odd_count);
    return 0;
}


