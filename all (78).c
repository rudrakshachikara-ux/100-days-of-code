#include <stdio.h>

int main() {
	// your code goes here
    int arr1[] = {10, 20, 30};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {40, 50, 60, 70};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int mergedArr[n1 + n2];
    int i, j, k;
    for (i = 0; i < n1; i++) {
    mergedArr[i] = arr1[i];
    }
    for (j = 0; j < n2; j++) {
    mergedArr[n1 + j] = arr2[j];
    }
    printf("Merged array: ");
    for (k = 0; k < (n1 + n2); k++) {
    printf("%d", mergedArr[k]);
    }
    printf("\n");
    return 0;
}


