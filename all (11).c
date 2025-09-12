#include <stdio.h>

int main() {
	// your code goes here
	 float celsius,fahrenheit;
	 printf("Enter temperature in celsius");
	 scanf("%d", &celsius);
	 printf("Enter tempature in fahrenheit");
	 scanf("%d", &fahrenheit);
	 fahrenheit=(celsius*9/5)+32;
	 return 0;
}

