#include <stdio.h>

int main() {
	// your code goes here
    void inputMatrix(int matrix[][10]), int rows, int cols) {
    printf("Enter elements of the matrix (%dx%d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
    printf("Enter elements [%d][%d]: ", i, j);
    scanf("%d", matrix[i][j]);
    }
    }
    }
    void addMatrices(int A[][10], int B[][10], int result[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
    result[i][j] = A[i][j] + B[i][j];
    }
    }
    }
    void displayMatrix(int matrix[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
    }
    printf("%4d ", matrix[i][j]);
    }
    printf("\n");
    }
}
    int main() {
    int A[10][10], B[10][10], result[10][10];
    int rows, cols;
    printf("Enter the number of rows (max 10): ");
    scanf("%d", &rows);
    printf("Enter the number of columns (max 10): ");
    scanf("%d", &cols);
    printf("\n--- Input Matrix A ---\n");
    inputMatrix(A, rows, cols);
    printf("\n--- Input Matrix B ---\n");
    inputMatrix(B, rows, cols);
    addMatrices(A, B, result, rows, cols);
    printf("\n--- Matrix A ---\n");
    displayMatrix(A, rows, cols);
    printf("\n--- Matrix B ---\n");
    displayMatrix(B, rows, cols);
    printf("\n--- Resultant Matrix (A + B) ---\n");
    displayMatrix(result, rows, cols);
    return 0;
}


