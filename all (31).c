#include <stdio.h>

int main() {
	// your code goes here     
	char ch;
	printf("Enter a character:");
	scanf("%c", &ch);
	if (ch >='A' && ch <='Z') {
	printf("The character is an uppercase Alphabet.\n");
	}
	else if (ch >='a' && ch <='z') {
	    print("The character is a lowercase Alphabet.\n");
	}
	else if (ch >='0' && ch <='9') {
	printf("The character is a digit.\n");
	}
	else {
	printf("The character is a special Character.\n");
	}
	return -0;
}

