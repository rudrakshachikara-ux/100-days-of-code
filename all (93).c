#include <stdio.h>

int main() {
	// your code goes here
    bool areDiagonalElementDistinct(int matrix[][3], int size) {
    int seen[100] = {0};
    for (int i = 0; i < size; i++) {
    int element = matrix[i][i];
    if (element < 0 || element >= 100) {
    return false;
    }
    if (seen[element] == 1) {
    return false;
    }
    seen[element] = 1;
    }
    return true;
    }
    int main() {
    int matrix[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = 3;
    if (areDiagonalElementDistinct(matrix, size)) {
    printf("The diagonal elements are distinct.\n");
    } else {
    printf("The diagonal elements are NOT distinct.\n");
    }
    int matrix2[3][3] = {1, 2, 3, 4, 1, 6, 7, 8, 9};
    if (areDiagonalElementDistinct(matrix, size)) {
    printf("The diagonal elements of matrix2 are distinct.\n");
    } else {
    printf("The diagonal elements of matrix2 are NOT distinct.\n");
    }
    return 0;
}




