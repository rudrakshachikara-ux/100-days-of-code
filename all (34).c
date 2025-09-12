#include <stdio.h>

int main() {
	// your code goes here     
	float percentages;
	char grade;
	printf("Enter your percentage (0-100):");
	scanf("%f", &percentage);
	if(percentage >= 90 && percentage <= 100) {
	grade = 'A';
	} else if (percentage >= 80 && percentage < 90) {
	grade = 'B';
	} else if (percentage >= 70 && percentage < 80) {
	grade = 'C';
	} else if (percentage >= 60 && percentage < 70) {
	grade = 'D';
	} else if (percentage >= 0 && percentage < 60) {
	grade ='F';
	} else {
	printf("Invalid input! percentage must be between 0 and 100.\n");
	return 1;
	}
	printf("Your grade is: %c\n", grade);
	return 0;
}