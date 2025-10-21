#include <stdio.h>
#include <limits.h> 

void findMaxInSlidingWindow(int arr[], int n, int k) {
    if (n == 0 || k == 0 || k > n) {
        printf("Invalid input: Array is empty, window size is zero, or window size is larger than array size.\n");
        return;
    }
    for (int i = 0; i <= n - k; i++) {
        int currentMax = INT_MIN; 
        for (int j = 0; j < k; j++) {
            if (arr[i + j] > currentMax) {
                currentMax = arr[i + j];
            }
        }
        printf("%d ", currentMax); 
    }
    printf("\n"); 
}

int main() {
    int arr[] = {1, 3, -1, -3, 5, 3, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Window size (k): %d\n", k);
    printf("Maximum elements in each window: ");
    findMaxInSlidingWindow(arr, n, k);
    int arr2[] = {10, 20, 30, 40, 50};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int k2 = 2;

    printf("\nArray: ");
    for (int i = 0; i < n2; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    printf("Window size (k): %d\n", k2);
    printf("Maximum elements in each window: ");
    findMaxInSlidingWindow(arr2, n2, k2);

    return 0;
}

