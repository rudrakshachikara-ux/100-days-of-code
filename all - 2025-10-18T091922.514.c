#include <stdio.h>
#include <stdlib.h> // Required for malloc

int main() {
    int n;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Dynamically allocate memory for the array
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Indicate an error
    }

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find and print the next greater element for each element
    for (int i = 0; i < n; i++) {
        int nextGreater = -1; // Initialize nextGreater to -1

        // Iterate through elements to the right of arr[i]
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nextGreater = arr[j]; // Found the next greater element
                break; // Exit the inner loop as the nearest greater element is found
            }
        }

        // Print the result for the current element
        printf("%d", nextGreater);

        // Print a comma if it's not the last element
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("\n");

    // Free the dynamically allocated memory
    free(arr);
    arr = NULL; // Set to NULL after freeing to prevent dangling pointer issues

    return 0; // Indicate successful execution
}

