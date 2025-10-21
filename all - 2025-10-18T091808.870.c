#include <stdio.h>
#include <stdlib.h> // For malloc and free

// Function to find the majority element
int findMajorityElement(int nums[], int n) {
    // Phase 1: Find a potential candidate for the majority element
    int candidate = -1;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Phase 2: Verify if the candidate is indeed the majority element
    count = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate) {
            count++;
        }
    }

    if (count > n / 2) {
        return candidate;
    } else {
        return -1; // No majority element found
    }
}

int main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Array size must be positive.\n");
        return 1;
    }

    // Dynamically allocate memory for the array
    int *nums = (int *)malloc(n * sizeof(int));
    if (nums == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &nums[i]);
    }

    int majorityElement = findMajorityElement(nums, n);

    if (majorityElement != -1) {
        printf("The majority element is: %d\n", majorityElement);
    } else {
        printf("No majority element found (-1)\n");
    }

    // Free the dynamically allocated memory
    free(nums);

    return 0;
}

