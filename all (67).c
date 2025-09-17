#include <stdio.h>

int main() {
	// your code goes here
    int i, j, k;
    int num_rows = 5;
    for (i = 1; i <= num_rows; i++) {
    for (j = 0; j < num_rows; j++) {
    printf("");
    }
    for (k = 0; k < (2 * i - 1); k++) {
    printf("*");
    }
    printf("\n");
    }
    for (i = num_rows - 1; i >= 1; i--) {
    for (j = 0; j < num_rows - i; j++) {
    printf("");
    }
    for (k = 0; k < (2 * i - 1); k++) {
    printf("*");
    }
    printf("\n");
    }
    return 0;
}


