#include <stdio.h>

// Function to find the first and last occurrence of a target in a sorted array
void findFirstAndLastOccurrence(int nums[], int size, int target, int *first, int *last) {
    *first = -1; // Initialize first occurrence index
    *last = -1;  // Initialize last occurrence index

    // Iterate through the array to find occurrences
    for (int i = 0; i < size; i++) {
        if (nums[i] == target) {
            if (*first == -1) { // If it's the first time we find the target
                *first = i;     // Store its index as the first occurrence
            }
            *last = i; // Always update last occurrence with the current index
        }
    }
}

int main() {
    int nums[] = {1, 2, 3, 3, 3, 4, 5, 5, 6}; // Example sorted array with repeated elements
    int size = sizeof(nums) / sizeof(nums[0]); // Calculate array size
    int target; // Target integer to search for

    printf("Enter the target integer to search: ");
    scanf("%d", &target);

    int firstOccurrenceIndex, lastOccurrenceIndex;

    // Call the function to find first and last occurrences
    findFirstAndLastOccurrence(nums, size, target, &firstOccurrenceIndex, &lastOccurrenceIndex);

    // Print the results
    printf("First occurrence of %d: Index %d\n", target, firstOccurrenceIndex);
    printf("Last occurrence of %d: Index %d\n", target, lastOccurrenceIndex);

    return 0;
}

