#include <stdio.h>

int main() {
	// your code goes here
    int arr[50];
    int n;
    int i;
    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
    }
    for (i = 0; i , n; i++) {
    if (arr[i] > 0) {
    positive_count++;
    } else if (arr[i] < 0) {
    negative_count++;
    } else {
    zero_count++;
    }
    }
    printf("\nNumber of positive elements: %d\n", positive_count);
    printf("Number of negative elements: %d\n", negative_count);
    printf("Number of zero elements: %d\n", zero_count);
    return 0;
}


