#include <stdio.h>

int main() {
	// your code goes here
    char str[100];
    char temp;
    int i, j;
    printf("Enter a string: ");
    scanf("%s", str);
    int length = strlen(str);
    for (i = 0; j = length - 1, i < j; i++, j--) {
    temp = str[i];
    str[i] = str[j];
    str[j] = temp;
    }
    printf("Reversed string: %s\n", str);
    return 0;
}


