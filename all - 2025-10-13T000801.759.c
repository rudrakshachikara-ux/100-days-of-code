#include <stdio.h>

int main() {
	// your code goes here
    void printAllSubstrings(char *str) {
    int length = strlen(str); // Get the length of the input string

    // Outer loop for the starting index of the substring
    for (int i = 0; i < length; i++) {
        // Middle loop for the ending index of the substring
        for (int j = i; j < length; j++) {
            // Inner loop to print the characters of the current substring
            for (int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n"); // Print a newline after each substring
        }
    }
}

int main() {
    char myString[] = "abc"; // Example string
    printf("All substrings of \"%s\":\n", myString);
    printAllSubstrings(myString);
    return 0;
}
}

