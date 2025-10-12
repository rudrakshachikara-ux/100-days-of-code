#include <stdio.h>

int main() {
	// your code goes here
    int main() {
    char name[100];
    char *words[20];
    int count = 0;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    // Remove newline character from input
    name[strcspn(name, "\n")] = '\0';

    // Split name into words
    char *token = strtok(name, " ");
    while (token != NULL) {
        words[count++] = token;
        token = strtok(NULL, " ");
    }

    // Print initials except for the last word (surname)
    for (int i = 0; i < count - 1; i++) {
        printf("%c. ", words[i][0]);
    }

    // Print the surname in full
    printf("%s\n", words[count - 1]);

    return 0;
}
}

