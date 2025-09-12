#include <stdio.h>

int main() {
	// your code goes here     
	int day;
	printf("Enter a number to get the day of the week:");
	scanf("%d", &day);
	switch(day) {
	case 1:
	printf("Sunday\n");
	break;
	case 2:
	printf("Monday\n");
	break;
	case 3:
	printf("Tuesday\n");
	break;
	case 4:
	printf("Wednesday\n");
	break;
	case 5:
	printf("Thrusday\n");
	break;
	case 6:
	printf("Friday\n");
	break;
	case 7:
	printf("Saturday\n");
	break;
	default:
	printf("Invalid input! please enter a number between 1 and 7.\n");
	}
	return 0;
}