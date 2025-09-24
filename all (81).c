#include <stdio.h>

int main() {
	// your code goes here
    void insertSorted(int arr[], int *n, int element) {
    int i, j;
    for (i = 0; i < *n; i++) {
    if (arr[i] >= element) {
    break;
    }
    }
    for (j = *n - 1; j >= i; j--) {
    arr[j + 1] = arr[j];
    }
    arr[i] = element;
    (*n)++;
    }
    int main() {
    int arr[100] = {10, 20, 30, 50, 60};
    int n = 5;
    int elementToInsert = 40;
    printf("Original array: ");
    for (int i = 0; i < n; i++) {
    printf("%d", arr[i]);
    }
    printf("\n");
    insertSorted(arr, &n, elementToInsert);
    printf("Array after inserting %d: ", elementToInsert);
    for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}


