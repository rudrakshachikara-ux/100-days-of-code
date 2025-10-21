#include <stdio.h>

void findPreviousGreater(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int previousGreater = -1; 
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                previousGreater = arr[j];
                break; // 
            }
        }
        printf("%d", previousGreater);
        if (i < n - 1) {
            printf(","); 
        }
    }
    printf("\n"); 
}

int main() {
    int arr1[] = {10, 4, 2, 20, 40, 12};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("Input array: {10, 4, 2, 20, 40, 12}\n");
    printf("Previous Greater Elements: ");
    findPreviousGreater(arr1, n1);

    int arr2[] = {1, 5, 0, 3, 4, 2};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("Input array: {1, 5, 0, 3, 4, 2}\n");
    printf("Previous Greater Elements: ");
    findPreviousGreater(arr2, n2);

    return 0;
}

