#include <stdio.h>

int main() {
	// your code goes here
    int main() {
    char name[100];
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    // Remove newline character if present
    name[strcspn(name, "\n")] = '\0';

    char *word = strtok(name, " ");
    char *lastName = NULL;

    // Process each word
    while (word != NULL) {
    lastName = word;  // Keep track of the last word
    word = strtok(NULL, " ");
    }

    // Tokenize again to print initials except the last name
    word = strtok(name, " ");
    while (word != NULL && strcmp(word, lastName) != 0) {
    printf("%c.", toupper(word[0]));
    word = strtok(NULL, " ");
    }

    // Print last name in full
    printf(" %s\n", lastName);

    return 0;
}


