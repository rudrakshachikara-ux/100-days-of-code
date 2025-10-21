#include <stdio.h>
#include <stdio.h>

// Function to find the first occurrence of the target
int findFirstOccurrence(int nums[], int size, int target) {
    int low = 0;
    int high = size - 1;
    int firstOccurrence = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            firstOccurrence = mid;
            high = mid - 1; // Continue searching in the left half for an earlier occurrence
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return firstOccurrence;
}

// Function to find the last occurrence of the target
int findLastOccurrence(int nums[], int size, int target) {
    int low = 0;
    int high = size - 1;
    int lastOccurrence = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            lastOccurrence = mid;
            low = mid + 1; // Continue searching in the right half for a later occurrence
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return lastOccurrence;
}

int main() {
    int nums[] = {1, 2, 3, 3, 3, 4, 5, 5, 6};
    int size = sizeof(nums) / sizeof(nums[0]);
    int target = 3;

    int first = findFirstOccurrence(nums, size, target);
    int last = findLastOccurrence(nums, size, target);

    printf("For target %d:\n", target);
    if (first != -1) {
        printf("First occurrence index: %d\n", first);
        printf("Last occurrence index: %d\n", last);
    } else {
        printf("First occurrence index: -1\n");
        printf("Last occurrence index: -1\n");
    }

    // Test with a target not present
    target = 7;
    first = findFirstOccurrence(nums, size, target);
    last = findLastOccurrence(nums, size, target);

    printf("\nFor target %d:\n", target);
    if (first != -1) {
        printf("First occurrence index: %d\n", first);
        printf("Last occurrence index: %d\n", last);
    } else {
        printf("First occurrence index: -1\n");
        printf("Last occurrence index: -1\n");
    }

    return 0;
}

