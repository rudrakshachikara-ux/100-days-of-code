#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int arr[n]; 
    printf("Enter %d elements (from 0 to %d, one missing):\n", n, n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    int expectedSum = n * (n + 1) / 2;
    int missing = expectedSum - sum;

    printf("Missing number is: %d\n", missing);

    return 0;
}


