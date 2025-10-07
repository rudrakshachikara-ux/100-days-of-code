#include <stdio.h>

int main() {
	// your code goes here
    int areRotations(char *str1, char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // If lengths are different, they cannot be rotations
    if (len1 != len2) {
        return 0; // False
    }

    // Create a temporary string to store str1 concatenated with itself
    char *temp = (char *)malloc(sizeof(char) * (2 * len1 + 1));
    if (temp == NULL) {
    perror("Memory allocation failed");
    exit(EXIT_FAILURE);
    }
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

    if (areRotations(str1, str2)) {
        printf("\"%s\" is a rotation of \"%s\".\n", str2, str1);
    } else {
        printf("\"%s\" is NOT a rotation of \"%s\".\n", str2, str1);
    }

    char str3[] = "HELLO";
    char str4[] = "LOHEL";
    if (areRotations(str3, str4)) {
        printf("\"%s\" is a rotation of \"%s\".\n", str4, str3);
    } else {
        printf("\"%s\" is NOT a rotation of \"%s\".\n", str4, str3);
    }

    char str5[] = "TEST";
    char str6[] = "TSET";

    if (areRotations(str5, str6)) {
        printf("\"%s\" is a rotation of \"%s\".\n", str6, str5);
    } else {
        printf("\"%s\" is NOT a rotation of \"%s\".\n", str6, str5);
    }

    return 0;
}


