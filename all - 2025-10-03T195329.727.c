#include <stdio.h>

int main() {
	// your code goes here
    char str[100];
    int spaces = 0;
    int digits = 0;
    int special_chars = 0;
    int i = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0') {
    if (isspace(str[i]) && str[i] != '\n') {
    spaces++;
    } else if (isdigit(str[i])) {
    digits++;
    } else if (str[i] != '\n') {
    special_chars++;
    }
    i++;
    }
    printf("Number of spaces: %d\n", spaces);
    printf("Number of digits: %d\n", digits);
    printf("Number of special characters: %d\n", special_chars);
    return 0;
}




