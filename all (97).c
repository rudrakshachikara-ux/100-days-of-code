#include <stdio.h>

int main() {
	// your code goes here
	char str[100];
	int count = 0;
	int i = 0;
	printf("Enter a string: ");
	fgets(str, sizeof(str), stdin);
	while (str[i] != '\0') {
	if (str[i] == '\n') {
	break;
	}
	count++;
	i++;
	}
	printf("Number of characters in the string: %d\n", count);
	return 0;
}




