#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    int freq[n];  
    for (int i = 0; i < n; i++) {
        freq[i] = 0;
    }

    printf("Enter %d elements (0 to %d, one repeated):\n", n, n - 2);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (freq[arr[i]] == 1) {
            printf("Repeated element is: %d\n", arr[i]);
            return 0;
        } else {
            freq[arr[i]]++;
        }
    }
    printf("No repeated element found.\n");
    return 0;
}


