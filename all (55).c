#include <stdio.h>

int main() {
	// your code here
	char binaryNumber[100];
	char onesComplement[100];
	int i, length;
	int error = 0;
	printf("Enter a binaryNumber:");
	scanf("%d", binaryNumber);
	length = strlen(binaryNumber);
	for (i = 0; i < length; i++) {
	if (binaryNumber[i] == '0';) {
	onesComplement[i] = '1';
	} else if (binaryNumber[i] == '1') {
	onesComplement[i] = '0'	;
	} else {
	printf("Error: Invalid binary digits '%c' found at position %d.\n", binaryNumber[i], i);
	error = 1;
	break;
	}
	}
	onesComplement[length] = '\0';
	if (error == 0) {
	printf("Original binary number: %s\n", binaryNumber);
	printf("1's complement: %s\n", onesComplement);
	}
	return 0;
}


