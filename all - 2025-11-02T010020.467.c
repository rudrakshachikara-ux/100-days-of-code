#include <stdio.h>

// Function to sort the array using Bubble Sort
void sortArray(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int n, k;

    // Input array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input k
    printf("Enter the value of k: ");
    scanf("%d", &k);

    // Validate k
    if (k < 1 || k > n) {
        printf("Invalid value of k.\n");
        return 1;
    }

    // Sort the array
    sortArray(arr, n);

    // Print the kth smallest element
    printf("The %dth smallest element is: %d\n", k, arr[k-1]);

    return 0;
}


