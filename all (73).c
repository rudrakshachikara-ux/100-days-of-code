#include <stdio.h>

int main() {
	// your code goes here
    int arr[100];
    int n, i, num, freq = 0;
    printf("Enter the number of elements (max 100): ");
    scanf("%d", &n);
    if (n < 1 || n > 100)
    {
    printf("Please enter a valid number of elements between 1 and 100.\n");
    return 0;
    }
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
    {
    scanf("%d", &arr[i]);
    }
    printf("Enter the number to find its frequency:");
    scanf("%d", &num);
    for (i = 0; i < n; i++)
    {
    if (arr[i] == num)
    {
    freq++;
    }
    }
    printf("The number %d appears %d time(s) in the array.\n", num, freq);
    return 0;
}





