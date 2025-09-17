#include <stdio.h>

int main() {
	// your code goes here
    int n, i;
    printf("Enter the size of the array:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integer elements:\n", n);
    for (i = 0; i < n; i++) {
    printf("Element %d: ", i + 1);
    scanf("%d", &arr[i]);
    }
    printf("\nElements of the array are: ");
    for (i = 0; i < n; i++) {
    printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}





