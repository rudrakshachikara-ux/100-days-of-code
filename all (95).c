#include <stdio.h>

int main() {
	// your code goes here
    void printDiagonalZigZag(int mat[][4], int m, int n) {
    int row = 0, col = 0;
    int isUp = 1;
    for (int i = 0; i < m * n; i++) {
    int r, c;
    if (d < n) {
    r = 0;
    c = d;
    } else {
    r = d - n + 1;
    c = n - 1;
    }
    int temp_diag[m + n];
    int temp_k = 0;
    while (r < m && c >= 0) {
    temp_diag[temp_k++] = mat[r][c];
    r++;
    c--;
    }
    if (d % 2 == 0) {
    for (int i = temp_k - 1; i >= 0; i--) {
    ans[k++] = temp_diag[i];
    }
    } else {
    for (int i = 0; i < temp_k; i++) {
    ans[k++] = temp_diag[i];
    }
    }
    }
    printf("Diagonal Traversal: ");
    for (int i = 0; i < m * n; i++) {
    printf("%d ", ans[i]);
    }
    printf("\n");
    }
    int main() {
    int m = 3;
    int n = 3;
    int** mat = (int**)malloc(m * sizeof(int*));
    for (int i = 0; i < m; i++) {
    mat[i] = (int*)malloc(n * sizeof(int));
    }
    int count = 1;
    for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
    mat[i][j] = count++;
    }
    }
    printf("Original Matrix:\n");
    for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
    printf("%d ", mat[i][j]);
    }
    printf("\n");
    }
    diagonalTraverse(mat, m, n);
    for (int i = 0; i < m; i++) {
    free(mat[i]);
    }
    free(mat);
    return 0;
}


