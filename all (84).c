#include <limits.h>

int main() {
	// your code goes here
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n =sizeof(arr) / sizeof(arr[0]);
    if (n < 2) {
    printf("Array must have at lest two element to find the second largest.\n");
    return 1;
    }
    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    if (arr[0] > arr[1]) {
    largest = arr[0];
    secondLargest = arr[1];
    } else {
    largest = arr[1];
    secondLargest = arr[0];
    }
    for (int i =2; i < n; i++) {
    if (arr[i] > largest) {
    secondLargest = largest;
    largest = arr[i];
    } else if (arr[i] > secondLargest && arr[i] != largest) {
    secondLargest = arr[i];
    }
    }
    if (secondLargest == INT_MIN) {
    printf("No distinct second largest element found.\n");
    } else {
    printf("The second largest element is: %d\n", secondLargest);
    }
    return 0;
}





 