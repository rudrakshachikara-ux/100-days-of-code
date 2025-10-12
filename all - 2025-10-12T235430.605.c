#include <stdio.h>

int main() {
	// your code goes here

// Function to check if a string is a rotation of another
int areRotations(char *str1, char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // If lengths are different, they cannot be rotations
    if (len1 != len2) {
    return 0; // False
    }

    // Allocate memory for the concatenated string (str1 + str1)
    // +1 for the null terminator
    char *temp = (char *)malloc(sizeof(char) * (2 * len1 + 1)); 
    if (temp == NULL) {
    perror("Memory allocation failed");
    exit(EXIT_FAILURE);
    }

    // Concatenate str1 with itself
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 is a substring of temp
    if (strstr(temp, str2) != NULL) {
    free(temp); // Free allocated memory
    return 1; // True
    } else {
    free(temp); // Free allocated memory
    return 0; // False
    }
}

int main() {
    char str1[] = "ABCD";
    char str2[] = "CDAB";
    char str3[] = "ACBD";

    if (areRotations(str1, str2)) {
    printf("\"%s\" and \"%s\" are rotations of each other.\n", str1, str2);
    } else {
    printf("\"%s\" and \"%s\" are NOT rotations of each other.\n", str1, str2);
    }

    if (areRotations(str1, str3)) {
    printf("\"%s\" and \"%s\" are rotations of each other.\n", str1, str3);
    } else {
    printf("\"%s\" and \"%s\" are NOT rotations of each other.\n", str1, str3);
    }
    return 0;
}
}

