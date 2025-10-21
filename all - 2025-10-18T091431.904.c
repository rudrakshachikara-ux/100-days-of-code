#include <stdio.h>

int findPivotIndex(int* nums, int numsSize) {
    long long totalSum = 0;
    for (int i = 0; i < numsSize; i++) {
        totalSum += nums[i];
    }

    long long leftSum = 0;
    for (int i = 0; i < numsSize; i++) {
        long long rightSum = totalSum - leftSum - nums[i];
        if (leftSum == rightSum) {
            return i;
        }
        leftSum += nums[i];
    }

    return -1; // No pivot index found
}

int main() {
    int nums1[] = {1, 7, 3, 6, 5, 6};
    int numsSize1 = sizeof(nums1) / sizeof(nums1[0]);
    printf("Pivot index for nums1: %d\n", findPivotIndex(nums1, numsSize1)); // Expected: 3

    int nums2[] = {1, 2, 3};
    int numsSize2 = sizeof(nums2) / sizeof(nums2[0]);
    printf("Pivot index for nums2: %d\n", findPivotIndex(nums2, numsSize2)); // Expected: -1

    int nums3[] = {2, 1, -1};
    int numsSize3 = sizeof(nums3) / sizeof(nums3[0]);
    printf("Pivot index for nums3: %d\n", findPivotIndex(nums3, numsSize3)); // Expected: 0

    int nums4[] = {-1, -1, 0, 1, 1, 0};
    int numsSize4 = sizeof(nums4) / sizeof(nums4[0]);
    printf("Pivot index for nums4: %d\n", findPivotIndex(nums4, numsSize4)); // Expected: 2

    return 0;
}

