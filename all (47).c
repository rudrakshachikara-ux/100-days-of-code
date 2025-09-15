#include <stdio.h>

int main() {
	// your code goes here
	void printBinary(int num) {
	int bits[32]; 
	int i=0;
	if (num == 0) {
	printf("0");
	return;
	}
	while (num > 0) {
	bits[i] = num % 2;
	num = num / 2;
	i++;
	}
	for (int j = i - 1; j >= 0; j--) {
	}
}
	imt main () {
	int num;
	printf("Enter a number");
	scanf("%d", &num);
	printf("Binary representation");
	printBinary(num);
	return 0;
}


    


