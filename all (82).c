#include <stdio.h>

int main() {
	// your code goes here
    int arr[100];
    int n, i, value, position;
    printf("Entyer the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
    }
    printf("Enter the value to insert: ");
    scanf("%d", &position);
    if (position < 1 || position > n + 1) {
    printf("Invalid position! Please enter a position between1 and %d.\n", n + 1);
    } else {
    for (i = n; i >= position; i--) {
    arr[i] = arr[i - 1];
    }
    arr[position - 1] = value;
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
    printf("%d ", arr[i]);
    }
    printf("\n");
    }
    return 0;
}



