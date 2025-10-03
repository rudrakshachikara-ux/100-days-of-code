#include <stdio.h>

int main() {
	// your code goes here
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] == ' ') {
    str[i] = '-';
    }
    }
    printf("Modified string: %s\n", str);
    return 0;
}





