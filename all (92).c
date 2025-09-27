#include <stdio.h>

int main() {
	// your code goes here
    int matrix[MAX_SIZE][MAX_SIZE];
    int rows, cols;
    int isSymmetric = 1;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    if (rows != cols) {
    printf("The matrix is not a square matrix, so it cannoy be symmetric.\n");
    isSymmetric = 0;
    } else {
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
    printf("Enter element matrix[%d][%d]: ", i, j);
    sanf("%d", &matrix[i][j]);
    }
    }
    for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
    if (matrix[i][j] != matrix[i][j]) {
    isSymmetric = 0;
    break;
    }
    }
    if (!isSymmetric) {
    break;
    }
    }
    if (isSymmetric) {
    printf("The matrix is symmetric.\n");
    } else {
    printf("The matrix is not symmetric.\n");
    }
    }
    return 0;
}



