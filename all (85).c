#include <limits.h>

int main() {
	// your code goes here
	void reverse(int arr[], int start, int end) {
	while (start < end) {
	int temp = arr[start];
	arr[start] = arr[end];
	arr[end] = temp;
	start++;
	end--;
	}
	}
	void rotateRight(int arr[], int n, int k) {
	if (n == 0 || k == 0) {
	return ;
	}
	k = k % n;
	if (k == 0) {
	return ;
	}
	reverse(arr, 0, n - 1);
	reverse(arr, 0, k - 1);
	reverse(arr, k, n - 1);
	}
	void printArray(int arr[], int n) {
	for (int i = 0; i < n; i++) {
	printf("%d ", arr[i]);
	}
	printf("\n");
	}
	int main() {
	int arr[] = {1, 2, 3, 4, 5, 6, 7};
	int n= sizeof(arr) / sizeof(arr[0]);
	int k = 3;
	printf("Original array: ");
	printArray(arr, n);
	rotateRight(arr, n, k);
	printf("Array after rotating right by %d position: ", k);
	printArray(arr, n);
	int arr2[] = {10, 20, 30 ,40, 50};
	int n2 = sizeof(arr2) / sizeof(arr2[0]);
	int k2 = 2;
	printf("Original array: ");
	printArray(arr2, n2);
	rotateRight(arr2, n2, k2);
	printf("Array after rotating right by %d positions: ", k2);
	printArray(arr2, n2);
	return 0;
}






 