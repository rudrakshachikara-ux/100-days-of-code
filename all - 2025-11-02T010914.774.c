#include <stdio.h>

void mergeSortedArrays(int a[], int m, int b[], int n, int merged[]) {
    int i = 0, j = 0, k = 0;
    while (i < m && j < n) {
        if (a[i] < b[j]) {
            merged[k++] = a[i++];
        } else {
            merged[k++] = b[j++];
        }
    }
    while (i < m) {
        merged[k++] = a[i++];
    }
    while (j < n) {
        merged[k++] = b[j++];
    }
}

int main() {
    int m, n;
    printf("Enter size of first sorted array: ");
    scanf("%d", &m);
    int a[m];
    printf("Enter %d sorted elements:\n", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second sorted array: ");
    scanf("%d", &n);
    int b[n];
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    int merged[m + n];
    mergeSortedArrays(a, m, b, n, merged);
    printf("Merged sorted array:\n");
    for (int i = 0; i < m + n; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}


