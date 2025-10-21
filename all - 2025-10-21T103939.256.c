#include <stdio.h>
#include <limits.h> 

int maxSumSubarrayOfSizeK(int arr[], int n, int k) {
    if (n <= 0 || k <= 0 || k > n) {
        printf("Invalid input: Array size (n) must be positive, k must be positive and less than or equal to n.\n");
        return INT_MIN; 
    }

    int currentWindowSum = 0;
    int maxSum = INT_MIN;
    for (int i = 0; i < k; i++) {
        currentWindowSum += arr[i];
    }

    maxSum = currentWindowSum; 
    for (int i = k; i < n; i++) {
        
        currentWindowSum += arr[i] - arr[i - k];
        if (currentWindowSum > maxSum) {
            maxSum = currentWindowSum;
        }
    }

    return maxSum;
}

int main() {
    int arr[] = {2, 1, 5, 1, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    int result = maxSumSubarrayOfSizeK(arr, n, k);

    if (result != INT_MIN) { 
        printf("The maximum sum of a subarray of size %d is: %d\n", k, result);
    }

    int arr2[] = {1, 2, 3, 4, 5};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int k2 = 2;
    result = maxSumSubarrayOfSizeK(arr2, n2, k2);
    if (result != INT_MIN) {
        printf("The maximum sum of a subarray of size %d is: %d\n", k2, result);
    }

    int arr3[] = {10, -2, 7, -5, 12};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    int k3 = 4;
    result = maxSumSubarrayOfSizeK(arr3, n3, k3);
    if (result != INT_MIN) {
        printf("The maximum sum of a subarray of size %d is: %d\n", k3, result);
    }

    return 0;
}

