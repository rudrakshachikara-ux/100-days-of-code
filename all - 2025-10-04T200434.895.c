#include <stdio.h>

int main() {
	// your code goes here
    char str[100];
    int i;
    printf("Please Enter any String: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] >= 'A' && str[i] <= 'Z') {
    str[i] = str[i] + 32;
    }
    else if (str[i] >= 'a' && str[i] <= 'z') {
    str[i] = str[i] - 32;
    }
    }
    printf("Toggled string: %s\n", str);
    return 0;
}



