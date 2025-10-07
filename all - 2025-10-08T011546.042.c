#include <stdio.h>

    int main() {
	// your code goes here
    void printInitials(char *name) {
    int i = 0;

    // Print the initial of the first word
    if (strlen(name) > 0 && isalpha(name[0])) {
    printf("%c", toupper(name[0]));
    }

    // Iterate through the rest of the string
    while (name[i] != '\0') {
        // If a space is encountered and the next character is not a space,
        // it means a new word starts, so print its initial.
    if (isspace(name[i]) && !isspace(name[i+1]) && name[i+1] != '\0') {
    printf(".%c", toupper(name[i+1]));
    }
    i++;
    }
    printf("\n"); // Newline after printing initials
}
}
    int main() {
    char name[100]; // Assuming a maximum name length of 99 characters + null terminator

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin); // Read the name, including spaces

    // Remove the trailing newline character if present from fgets
    name[strcspn(name, "\n")] = 0; 

    printf("Initials: ");
    printInitials(name);

    return 0;
}
