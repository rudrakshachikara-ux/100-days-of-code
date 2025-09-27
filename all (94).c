#include <stdio.h>

int main() {
	// your code goes here
    int size;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);
    int matrix[size][size];
    int sum = 0;
    printf ("Enter the elements of the matrix :\n");
    for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
    printf("Enter element at the position [%d][%d]: ", i, j);
    scanf("%d", &matrix[i][j]);
    }
    }
    for (int i = 0; i < size; i++) {
    sum += matrix[i][j];
    }
    printf("Sum of main diagonal elements: %d\n", sum);
    return 0;
}


