#include <stdio.h>

// Function to find the index of the ceil of x
int findCeilIndex(int arr[], int n, int x) {
    int low = 0;
    int high = n - 1;
    int ceil_index = -1; // Initialize with -1, indicating no ceil found yet

    while (low <= high) {
        int mid = low + (high - low) / 2; // Prevent potential integer overflow

        if (arr[mid] >= x) {
            ceil_index = mid; // Found a potential ceil, try to find an earlier one
            high = mid - 1;
        } else {
            low = mid + 1; // arr[mid] is smaller than x, search in the right half
        }
    }
    return ceil_index;
}

int main() {
    int arr[] = {1, 2, 8, 10, 10, 12, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;

    printf("Enter the integer x to find its ceil: ");
    scanf("%d", &x);

    int index = findCeilIndex(arr, n, x);

    if (index != -1) {
        printf("The ceil of %d is %d at index %d.\n", x, arr[index], index);
    } else {
        printf("No ceil found for %d in the array (all elements are smaller).\n", x);
    }

    return 0;
}

