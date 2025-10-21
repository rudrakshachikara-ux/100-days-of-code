#include <stdio.h>
#include <stdlib.h>

void findFirstNegativeInSubarrays(int arr[], int n, int k) {
    int *deque = (int *)malloc(n * sizeof(int)); 
    int front = 0;
    int rear = -1; 
    for (int i = 0; i < k; i++) {
        if (arr[i] < 0) {
            deque[++rear] = i;
        }
    }
    if (front <= rear) { 
        printf("%d ", arr[deque[front]]);
    } else {
        printf("0 ");
    }
    for (int i = k; i < n; i++) {
        if (front <= rear && deque[front] <= i - k) {
            front++;
        }
        if (arr[i] < 0) {
            deque[++rear] = i;
        }
        if (front <= rear) {
            printf("%d ", arr[deque[front]]);
        } else {
            printf("0 ");
        }
    }
    printf("\n");

    free(deque); 
}

int main() {
    int arr[] = {12, -1, -7, 8, -15, 30, 16, 28};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    printf("Input array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Window size k: %d\n", k);

    printf("First negative in each window: ");
    findFirstNegativeInSubarrays(arr, n, k);

    int arr2[] = {1, 2, 3, 4, 5, 6};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int k2 = 2;

    printf("\nInput array: ");
    for (int i = 0; i < n2; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    printf("Window size k: %d\n", k2);

    printf("First negative in each window: ");
    findFirstNegativeInSubarrays(arr2, n2, k2);

    return 0;
}

